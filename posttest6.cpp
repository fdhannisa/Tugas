#include <iostream>
#include <windows.h>
using namespace std;

int main(){
    initscr();
    start_color();
    init_pair(1,COLOR_WHITE,COLOR_GREEN);
    attron(COLOR_PAIR((1)));

    mvprintw (0,0, "Annisa nur fadhilah");
    Sleep(1000);
    refresh();

    mvprintw (0,0, "aNnisa nur fadhilah");
    Sleep(1000);
    refresh();

    mvprintw (0,0, "anNisa nur fadhilah");
    Sleep(1000);
    refresh();

    mvprintw (0,0, "annIsa nur fadhilah");
    Sleep(1000);
    refresh();

    mvprintw (0,0, "anniSa nur fadhilah");
    Sleep(1000);
    refresh();

    mvprintw (0,0, "annisA nur fadhilah");
    Sleep(1000);
    refresh();

    mvprintw (0,0, "annisa Nur fadhilah");
    Sleep(1000);
    refresh();

    mvprintw (0,0, "annisa nUr fadhilah");
    Sleep(1000);
    refresh();

    mvprintw (0,0, "annisa nuR fadhilah");
    Sleep(1000);
    refresh();

    mvprintw (0,0, "annisa nur Fadhilah");
    Sleep(1000);
    refresh();

    mvprintw (0,0, "annisa nur fAdhilah");
    Sleep(1000);
    refresh();

    mvprintw (0,0, "annisa nur faDhilah");
    Sleep(1000);
    refresh();

    mvprintw (0,0, "annisa nur fadHilah");
    Sleep(1000);
    refresh();

    mvprintw (0,0, "annisa nur fadhIlah");
    Sleep(1000);
    refresh();

    mvprintw (0,0, "annisa nur fadhiLah");
    Sleep(1000);
    refresh();

    mvprintw (0,0, "annisa nur fadhilAh");
    Sleep(1000);
    refresh();

    mvprintw (0,0, "annisa nur fadhilaH");
    Sleep(1000);

    refresh();
    getch();
    endwin();

}