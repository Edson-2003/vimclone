#include "minivim.hpp"

int main(int argc, char **argv)
{
  auto minivim = std::make_shared<MiniVim>();
  minivim->run();

  return 0;
}