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

#define SERV_TCP_PORT 6505

int main()
{
	int			sockfd, n,dstSock,i,j;
	struct sockaddr_in	ca,dstAddr;
	char			recvline[513];
	int			dstAddrSize = sizeof(dstAddr);

	sockfd = socket(AF_INET,SOCK_STREAM,0);

	bzero((char *)&ca,sizeof(ca));
	ca.sin_family	=AF_INET;
	ca.sin_addr.s_addr	=htonl(INADDR_ANY); 
	ca.sin_port		=htons(SERV_TCP_PORT);

	bind(sockfd, (struct sockaddr *)&ca,sizeof(ca));
	listen(sockfd,5);

	while(1){
	printf("Waiting for connection\n");
	dstSock = accept(sockfd,(struct sockaddr *)&dstAddr,&dstAddrSize);
	printf("Connected.\n");


	for(i=0;i<3;i++){

	   n = recv(dstSock, recvline,512,0);

	   recvline[n] = 0;

	for(j=0;j<n;j++){
	  recvline[j]=toupper(recvline[j]);
	}

	send(dstSock,recvline,512,0);
	printf("Send Data    :%s\n",recvline);
	}
	close(dstSock);
	}
	return 0;
}
