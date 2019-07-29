#include <iostream>
#include "BOARD_H.h"

using namespace std;

void Board::background(Frame *f){//전체 출력 함수
    for(int i = 0;MAX_X;i++)
    {
        for(int j = 0;MAX_Y;i++)
        {
            cout << f->shape[i][j] << " ";
        }
        cout << endl;
    }
}
