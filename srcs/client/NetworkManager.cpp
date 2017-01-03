#include "NetworkManager.hpp"

NetworkManager::NetworkManager() { }

NetworkManager::~NetworkManager() { close(sockfd); }

int 		NetworkManager::createSocket(const char *address) {

	cout << "Try connection on: " << address << endl;

    if ((sockfd = socket(AF_INET, SOCK_DGRAM, IPPROTO_UDP)) == -1)
        fprintf(stderr, "socket() error");

    bzero(&serv_addr, sizeof(serv_addr));
    serv_addr.sin_family = AF_INET;
    serv_addr.sin_port = htons(PORT);

    if (inet_aton(address, &serv_addr.sin_addr) == 0) {
        fprintf(stderr, "Failed to connect\n");
        return (-1);
    }
    return (0);
}

int 		NetworkManager::send(string *s) {

    if (!strncpy(buf, (*s).c_str(), sizeof(buf)))
        fprintf(stderr, "empty message error\n");
    
    buf[sizeof(buf) - 1] = 0;

	if (sendto(sockfd, buf, BUFLEN, 0, (struct sockaddr*)&serv_addr, slen) == -1)
    {
            fprintf(stderr, "sendto() error\n");
            return (-1);
    }

    //usleep(5000);
}