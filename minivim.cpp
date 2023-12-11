#include "minivim.hpp"

MiniVim::MiniVim()
{
  initscr();
  noecho();
  cbreak();
  keypad(stdscr, TRUE);
}

MiniVim::~MiniVim()
{
  refresh();
  endwin();
}

void run()
{
  printf("funcionando");
  getch();
}