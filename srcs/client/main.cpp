//#include <SFML/Graphics.hpp>
//#include <SFML/Window.hpp>
//#include <SFML/System.hpp>

#include "main.hpp"
#include "Client.hpp"

#define BUFLEN 512
#define PORT 4242

int main(int argc, char **argv)
{
    Client client;
    
    client.run();
    return (0);
}




/*struct sockaddr_in serv_addr;
    int sockfd, i, slen=sizeof(serv_addr);
    char buf[BUFLEN];

    if ((sockfd = socket(AF_INET, SOCK_DGRAM, IPPROTO_UDP))==-1)
        printf("Error socket");
    bzero(&serv_addr, sizeof(serv_addr));
    serv_addr.sin_family = AF_INET;
    serv_addr.sin_port = htons(PORT);
    if (inet_aton(argv[1], &serv_addr.sin_addr) ==0)
    {
        fprintf(stderr, "inet_aton() failed\n");
        exit(1);
    }
    while(1) {
        printf("Commandes :\n");
        printf("'game' for know the game number\n");
        printf("'ip' for know your ip adress\n");
        printf("\nEnter data to send : ");
        scanf("%[^\n]",buf);
        getchar();
        if (sendto(sockfd, buf, BUFLEN, 0, (struct sockaddr*)&serv_addr, slen)==-1)
            printf("Error sendto");
    }
    close(sockfd);
    return 0;*/