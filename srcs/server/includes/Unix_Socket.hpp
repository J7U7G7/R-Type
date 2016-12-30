#ifndef SOCKETU
# define SOCKETU

#include <iostream>
#include <fcntl.h>
#include <unistd.h>
#include "ISocket.hpp"
#include "netinet/in.h"
#include <sys/socket.h>
#include <netinet/in.h>
#include <arpa/inet.h>
       
class SocketU : public ISocket
{
public:
    SocketU(const std::string, int, const std::string mode = "UDP");
    SocketU(int, int = 42, const std::string mode = "UDP");
    SocketU(int, struct sockaddr_in);
    virtual ~SocketU();

    void connect();
    ISocket* accept();
    void send(const std::string&, std::string ip = "", int port = 0); // fonction d'envoie donnée
	std::string recv(int, std::string* ip = NULL); //fonction recevoir donnée

private:
    void bind();
    void listen(int);

    int                 hSocket;
    struct sockaddr_in  hSin;
    std::string			hMode;
};

#ifndef WIN32
typedef SocketU AbstractSocket;
#endif

#endif