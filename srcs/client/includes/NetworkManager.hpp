#ifndef __NETWORKMANAGER_HPP__
#define __NETWORKMANAGER_HPP__

#include "main.hpp"

class NetworkManager {

public:
	NetworkManager();
	~NetworkManager();

	void 	send();
	int 	createSocket(const char *);

private:
	struct 	sockaddr_in serv_addr;
    char 	buf[BUFLEN];
    int 	sockfd;
    int		slen=sizeof(serv_addr);
	
};

#endif