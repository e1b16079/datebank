#include <ncurses.h>
#include <unistd.h>
#include <string.h>
#include <stdio.h>
#include <stdlib.h>

#define BOARDSIZE 8

//状態を定義
#define NONE 0
#define BLACK 1
#define WHITE 2

char board[BOARDSIZE][BOARDSIZE];

void print_menu(void);
void select_item(int kkk);
void select_menu(int kkk);
void init_window(void);

int main(int argc, char **argv) {
  initscr();

  print_menu();
  select_item(6);

  sleep(3);
  endwin();

  return 0;  
}

void print_menu(void){
  char start[] = "<START>";
  char help[] = "<HELP>";
  char ranking[] = "<RANKING>";
  char exit[] = "<EXIT>";
  int x, y;
   
  getmaxyx(stdscr, y, x);

  mvprintw(y/2-8, x/2, "othello");

  mvprintw(y/2, x/2, "%s", start);
  mvprintw(y/2+2, x/2, "%s", help);
  mvprintw(y/2+4, x/2, "%s", ranking);
  mvprintw(y/2+6, x/2, "%s", exit);

  refresh();
  return;
}

void select_item(int kkk){
  MEVENT event;
  int input;

  //マウスを利用
  keypad(stdscr, TRUE);
  cbreak();

  //検知するマウスイベントを指定
  mousemask(BUTTON1_PRESSED |  //左ボタン押下
	    REPORT_MOUSE_POSITION,
	    NULL);
  refresh();

  getmouse(&event);

if(event.bstate == BUTTON1_PRESSED){
	mvprintw(90, 70, "*");
      }
 refresh();

  return;
}

void init_window(void){
  int i,j;
	
  for(i = 0 ; i < BOARDSIZE ; ++i){
    for(j=0 ; j < BOARDSIZE ; ++j){
      switch(board[i][j]){
      case NONE:
	printf("□");
	break;
      case BLACK:
	printf("○");
	break;
      case WHITE:
	printf("●");
	break;
      default:
	printf("er");
	break;
      }
    }
    printf("\n");
  }
	
}
