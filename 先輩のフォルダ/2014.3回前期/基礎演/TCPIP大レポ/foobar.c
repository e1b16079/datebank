#include <stdio.h>
#include <string.h>
#include <strings.h>
#include <sys/types.h>
#include <sys/socket.h>
#include <netinet/in.h>      /*ネットワークプログラミングには,これらのヘッダファイルが必要*/
#include <arpa/inet.h>       /*これらのファイルは,/usr/includeディレクトリの下にある*/

#define SERV_HOST_ADDR "150.89.15.178" /*通信相手先のIPアドレスを文字列で指定*/
#define SERV_UDP_PORT 6501             /*通信相手先のポート番号を定義*/

int main(){
  int sockfd, n;
  struct sockaddr_in sa, ca;         /*saは送信用,caは受信用の構造体*/
  char sendline[512], recv[513];

  /*通信相手先の送信用情報を構造体saに格納する*/
  bzero( (char *)&sa, sizeof(sa) );       /*構造体saの中をゼロで埋める*/
  sa.sin_family = AF_INET;                /*IPの使用を宣言*/
  sa.sin_addr.s_addr = inet_addr(SERV_HOST_ADDR);          /*相手先のIPアドレス*/
  sa.sin_port = htons(SERV_UDP_PORT);                /*相手先のポート番号*/      

  /*ソケットを1つ確保する*/
  sockfd = socket(AF_INET, SOCK_DGRAM, 0);         /*UDP通信用のソケット獲得*/

  /*受信用の情報を構造体caに格納する*/
  bzero( (char *) &ca, sizeof(ca) );
  ca.sin_family = AF_INET;
  ca.sin_addr.s_addr = htonl(INADDR_ANY);   /*エッチ,ティー,オー,エヌ,エル*/
  /*自分自身のどのIPアドレスにパケットが到着しても自分宛として受け取る*/

  ca.sin_port = htons(0);   /*エッチ,ティー,オー,エヌ,エス,かっこゼロ*/
  /*自分側のポート番号はOSによって適当に付与してもらう,ここをゼロ以外の値に
    　　設定すると,自分側のポート番号を陽に指定できる*/

  /*受信用のポートをソケットにバインドする,これにより当該ポートでの受信が開始される*/
  bind(sockfd, (struct sockaddr *) &ca, sizeof(ca));

  /*キーボードから読み込んだ文字列を送信する,また受信したデータを画面に表示する.*/
  for(;;){          /*無限ループ*/
    fgets(sendline, 512, stdin);          /*キーボードから1行読み込み*/
    n = strlen(sendline);                 /*文字列の長さを変数nに代入*/
    sendto(sockfd, sendline, n, 0, (struct sockaddr *)&sa, sizeof(sa));
    /*ソケットsockfdに配列sendlineの内容を書き出す*/

    n = recvfrom(sockfd, recv, 512, 0, (struct sockaddr *)0,
		 (socklen_t *) 0);
    /*ソケットからデータを読み出す,最大512文字*/

    recv[n] = 0;
    /*受信データには文字列の終端記号が書かれていないので,それを書き出す*/

    fputs(recv, stdout);       /*受信文字列を画面に出力*/
    fflush(stdout);            /*画面出力はバッファリングされているのでバッファをクリア*/
  }
  return 0;
}

