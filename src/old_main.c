#include <stdio.h>
#include <ncurses.h>

int main(void){

	initscr();
	noecho();
	printw("Press the proper key combination.\n");
	refresh();

	int unlocked = 0;
	int step = 0;
	
	while(unlocked != 1){
		int ch = getch();

		printw("%c\n", ch); //Don't ask about %c it's magic courtesy of lastname dawg

		if(ch == 'a'){
			printw("A key is pressed.\n");
		}
		if(ch == 0x0A){
			printw("Left arrow is pressed.\n");
		}
		
		refresh();
	}

	endwin();
	return 0;

}