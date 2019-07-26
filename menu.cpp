#include <iostream>
#include "MENU_H.h"
using namespace std;

void Display::init(){
    cout << "   T T T T T   E E E E E    T T T T T   R R R     I I I    S S" << endl;
    cout << "       T       E                T       R    R      I     S        " << endl;
    cout << "       T       E E E E E        T       R R R       I       S S   " << endl;
    cout << "       T       E                T       R    R      I          S " << endl;
    cout << "       T       E E E E E        T       R     R   I I I    S S" << endl << endl << endl;
    cout << "       1. START" << endl;
    cout << "       2. SCOREBOARD" << endl;
    cout << "input number: ";
}
void Display::select_mode(){
    int a;
    while(1){
        cin >> a;
        switch (a)
        {
        case 1:
            //start
            break;
        case 2:
            //scoreboard
            break;
        default:
            continue;
        }
    }
}