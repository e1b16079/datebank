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

#define SERV_HOST_ADDR "150.89.15.178"
#define SERV_UDP_PORT 6502

int main()
{
	int			sockfd, n;
	struct sockaddr_in	sa,ca;
	char			sendline[512], recv[513];

	/*bzero((char *)&sa,sizeof(sa));
	sa.sin_family	=AF_INET;
	sa.sin_addr.s_addr	=inet_addr(SERV_HOST_ADDR); 
	sa.sin_port		=htons(SERV_UDP_PORT);
*/
	sockfd = socket(AF_INET,SOCK_DGRAM,0);
	
	bzero((char *)&ca,sizeof(ca));
	ca.sin_family	=AF_INET;
	ca.sin_addr.s_addr	=htonl(INADDR_ANY); 
	ca.sin_port		=htons(SERV_UDP_PORT);

	bind(sockfd, (struct sockaddr *)&ca,sizeof(ca));
	
	for(;;){
	 /*fgets(sendline,512,stdin);
	   n = strlen(sendline);
	   sendto( sockfd, sendline,n,0,(struct sockaddr *)&sa, sizeof(sa));
*/
	   n = recvfrom(sockfd, recv,512,0, (struct sockaddr *)0,(socklen_t *)0);

	   recv[n] = 0;
	   
	   fputs(recv, stdout);
	   fflush(stdout);
	   
	}
	return 0;
}
