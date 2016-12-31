#ifndef ISOCKET
#define ISOCKET

#define SERVER_PORT 4242
#define CLIENT_PORT 4243
#define BUFLEN 512

#include <iostream>

class ISocket
{
public:
	virtual ~ISocket() {};

	virtual void connect() = 0;
	virtual ISocket* accept() = 0;
	virtual void send(const std::string&, std::string ip = "", int port = 0) = 0;
	virtual std::string recv(int, std::string* ip = NULL) = 0;

private:
	virtual void bind() = 0;
	virtual void listen(int) = 0;
};

#ifdef WIN32
    #include "winsock2.h"
	//include socket windows hpp
#else
    #include <sys/types.h>
    #include <sys/socket.h>
    #include "Unix_Socket.hpp"
#endif

#endif