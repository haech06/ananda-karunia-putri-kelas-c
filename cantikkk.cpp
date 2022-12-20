#include <ncurses/ncurses.h>#include <ncurses\curses.h>
#include <windows.h>
using namespace std;

int main(){
	initscr();
	
	start_color();
	init_pair(1, COLOR_MAGENTA, COLOR_WHITE);
	init_pair(2, COLOR_WHITE, COLOR_MAGENTA);
	
	attron (COLOR_PAIR(1));
	mvprintw(1,1, "Putri cancii");
	refresh();
	Sleep(6000);
	attroff (COLOR_PAIR(1));
	
	attron (COLOR_PAIR(2));
	mvprintw(2,1, "Putri cancii");
	refresh();
	Sleep(6000);
	attron (COLOR_PAIR(2));
	
	getch();
	endwin();
	
	
}

