#include "view.h"
#include <iostream>

using namespace std;

namespace view{
    void printMenu(){
        cout << "======[WELCOME TO MENU]======" << endl;
        cout << "1) Create deltoida" << endl;
        cout << "2) Print deltoida" << endl;
        cout << "3) Change deltoida's parameters" << endl;
        cout << "4) Get length of segment of tangent" << endl;
        cout << "5) Get length of deltoida" << endl;
        cout << "6) Get square of deltoida" << endl;
        cout << "7) Get coords by t-parameter" << endl;
        cout << "8) Get equation of deltoida" << endl;
        cout << "0) Exit" << endl;
    }
}
