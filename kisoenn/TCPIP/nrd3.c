#include <stdio.h>
#include <string.h>
#include <strings.h>
#include <sys/types.h>
#include <sys/socket.h>
#include <netinet/in.h>
#include <arpa/inet.h>
#include <ctype.h>
#include <unistd.h>
#include <sysexits.h>
#include <stdlib.h>

#define SERV_HOST_ADDR "150.89.212.255"
#define SERV_UDP_PORT 6503

int main()
{
	int			sockfd, n;
	struct sockaddr_in	sa,ca;
	char			sendline[512], recv[513];
	int l=sizeof(ca);

	sockfd = socket(AF_INET,SOCK_DGRAM,0);
	
	bzero((char *)&ca,sizeof(ca));
	ca.sin_family	=AF_INET;
	ca.sin_addr.s_addr	=htonl(INADDR_ANY); 
	ca.sin_port		=htons(SERV_UDP_PORT);

	bind(sockfd, (struct sockaddr *)&ca,sizeof(ca));
	
	for(;;){

	   n = recvfrom(sockfd, recv,512,0, (struct sockaddr *)&ca,(socklen_t *)&l);

	   recv[n] = 0;
	   printf("%s\n",inet_ntoa(ca.sin_addr));
	   fputs(recv, stdout);
	   fflush(stdout);
	   
	}
	return 0;
}
