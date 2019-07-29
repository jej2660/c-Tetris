#ifndef BOARD_H
#define BOARD_H
#include "CONSTS_H.h"
class Board{
public:
   void background_print(Frame *f);
};
class Frame{
public:
   int Shape[MAX_X][MAX_Y];
   void init(Frame *f);
}
#endif