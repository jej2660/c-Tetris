#include "BLOCKS.h"
#include <iostream>
#include "CONSTS_H.h"
#include "BOARD_H.h"
Frame ff;
using namespace std;

void Square::draw(){
    ff.shape[MAX_X / 2][MAX_Y] = BLOCK;
    ff.shape[MAX_X / 2 + 1][MAX_Y] = BLOCK;
    ff.shape[MAX_X / 2][MAX_Y -1] = BLOCK;
    ff.shape[MAX_X /2 + 1][MAX_Y -1] = BLOCK;
}
void Square::down(int x, int y){

}