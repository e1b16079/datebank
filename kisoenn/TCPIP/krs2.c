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

	bzero((char *)&sa,sizeof(sa));
	sa.sin_family	=AF_INET;
	sa.sin_addr.s_addr	=inet_addr(SERV_HOST_ADDR); 
	sa.sin_port		=htons(SERV_UDP_PORT);

	sockfd = socket(AF_INET,SOCK_DGRAM,0);
	
	int flag=1;
	setsockopt(sockfd,SOL_SOCKET,SO_BROADCAST,(char*)&flag,sizeof(flag));

	for(;;){
	   fgets(sendline,512,stdin);
	   n = strlen(sendline);
	   sendto( sockfd, sendline,n,0,(struct sockaddr *)&sa, sizeof(sa));

	}
	return 0;
}
