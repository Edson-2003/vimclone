#pragma once

#include <ncurses.h>
#include <memory>

class MiniVim
{
  public:
    MiniVim();
    ~MiniVim();
    void run();
};