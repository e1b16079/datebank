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

#define SERV_HOST_ADDR "150.89.217.4"
#define SERV_TCP_PORT 6505

int main()
{
	int			sockfd, n,i;
	struct sockaddr_in	sa;
	char			sendline[512], buffer[512];

	bzero((char *)&sa,sizeof(sa));
	sa.sin_family	=AF_INET;
	sa.sin_addr.s_addr	=inet_addr(SERV_HOST_ADDR); 
	sa.sin_port		=htons(SERV_TCP_PORT);

	sockfd = socket(AF_INET,SOCK_STREAM,0);
	
	connect(sockfd, (struct sockaddr *)&sa,sizeof(sa));

	for(i=0;i<3;i++){
	   fgets(sendline,512,stdin);
	   n = strlen(sendline);
	   send(sockfd,sendline,512,0);
	   n = recv(sockfd, buffer,512,0);
	   
	  
	   buffer[n] = 0;
	
	   fputs(buffer, stdout);
	   fflush(stdout);
	}
	close(sockfd);
	return 0;
}
