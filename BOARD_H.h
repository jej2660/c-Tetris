#ifndef BOARD_H
#define BOARD_H
#include "CONSTS_H.h"
class Board{
public:
   void background_print(Frame *f);
};
class Frame{
public:
   int shape[MAX_X][MAX_Y] = {0, };
};
#endif