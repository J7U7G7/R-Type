#include "../includes/Unix_Socket.hpp"
#include <stdio.h>

SocketU::SocketU(const std::string ip, int port, const std::string mode) : hSocket(0)
{
	hMode = mode;
    hSin.sin_addr.s_addr	= inet_addr(ip.c_str());
    hSin.sin_family		= AF_INET;
    hSin.sin_port		= htons(port);
    if ((hSocket = socket(AF_INET, (mode == "UDP" ? (SOCK_DGRAM) : (SOCK_STREAM)), 0)) == -1)
        std::cout << "Could not create client socket" << std::endl;
    if (mode != "UDP")
        this->connect();
}

SocketU::SocketU(int port, int queue, const std::string mode)
{
	hMode = mode;
    hSin.sin_addr.s_addr	= htonl(INADDR_ANY);
    hSin.sin_family		= AF_INET;
    hSin.sin_port		= htons(port);
    if ((hSocket = socket(AF_INET, (mode == "UDP" ? (SOCK_DGRAM) : (SOCK_STREAM)), 0)) == -1)
        std::cout << "Could not create server socket" << std::endl;
    this->bind();
    if (mode != "UDP")
        this->listen(queue);
}

SocketU::SocketU(int sock, struct sockaddr_in sin)
{
	hSocket = sock;
    hSin = sin;
}

void SocketU::bind()
{
    if (::bind(this->hSocket, (struct sockaddr *)&(this->hSin), sizeof(this->hSin)) != 0)
        std::cout << "Can't bind socket" << std::endl;
}

void SocketU::listen(int queue)
{
    if (::listen(this->hSocket, queue) != 0)
        std::cout << "Could not listen to socket" << std::endl;
}

void SocketU::connect()
{
    if (::connect(this->hSocket, (struct sockaddr *)&(this->hSin), sizeof(this->hSin)) != 0)
        std::cout << "Could not connect through socket" << std::endl;
}

ISocket* SocketU::accept()
{
    ISocket* clientSocket;
    int newSock;
    struct sockaddr_in csin;
    unsigned int csinSize = sizeof(csin);

    if ((newSock = ::accept(this->hSocket, (struct sockaddr *)&csin, &csinSize)) == -1)
        std::cout << "Accept failed" << std::endl;
    clientSocket = new SocketU(newSock, csin);
    return clientSocket;
}

void	SocketU::send(const std::string& buf, std::string ip, int port)
{
    if (this->hMode == "UDP")
    {
        struct sockaddr_in toSin;
        toSin.sin_addr.s_addr = inet_addr(ip.c_str());
        toSin.sin_family = AF_INET;
        toSin.sin_port	= htons(port);
        if (::sendto(this->hSocket, buf.c_str(), buf.size(), 0, (struct sockaddr *)&toSin, sizeof(toSin)) == -1)
            std::cout << "Could not write to adress." << std::endl;
    }
    else
    {
        if (::send(this->hSocket, buf.c_str(), buf.size(), 0) == -1)
            std::cout << "Could not write to socket." << std::endl;
    }
}

std::string SocketU::recv(int len, std::string* ip)
{
	char *buf = new char[len];

    if (this->hMode == "UDP")
    {
        struct sockaddr_in fromSin;
        unsigned int fromLen = sizeof(fromSin);
            if (recvfrom(this->hSocket, buf, len, 0, (struct sockaddr *)&fromSin, &fromLen) == -1)
            std::cout << "Could not read on UDP socket." << std::endl;
		if (ip)
			(*ip) = inet_ntoa(fromSin.sin_addr);
        printf("Received Data from %s:%d\nData: %s\n", inet_ntoa(fromSin.sin_addr), ntohs(fromSin.sin_port), buf);
    }
    return (buf);
}

SocketU::~SocketU()
{
    if (close(this->hSocket))
        std::cout << "Can't close socket" << std::endl;
}