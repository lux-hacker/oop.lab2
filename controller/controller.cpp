#include "controller.h"
#include <string>
#include <iostream>
#include <cstring>
#include "../view/view.h"
#include "../model/Deltoida/Deltoida.h"


using namespace std;
using namespace line;
using namespace view;

namespace controller{
    double getDouble(const char m[]) {
        while (true) {
            char buf[256] = {0};
            cout << m;
            cin.getline(buf, 256);
            char *tmp = buf;
            double res = strtod(buf, &tmp);
            if (tmp == buf + strlen(buf)) return res;
            cout << "!!! YOU MUST WRITE REAL NUMBER !!!" << endl;
        }
    }

    long getInt(const char m[]) {
        while (true) {
            char buf[256] = {0};
            cout << m;
            cin.getline(buf, 256);
            char *tmp = buf;
            long res = strtol(buf, &tmp, 10);
            if (tmp == buf + strlen(buf)) return res;
            cout << "!!! YOU MUST WRITE REAL NUMBER !!!" << endl;
        }
    }

    void menu(){
        Deltoida d;
        while(true){
            printMenu();
            int n = (int) getInt("Enter point of menu -> ");
            switch (n) {
                case 0:{
                    return;
                }
                case 1:{
                    cout << "======[CREATE DELTOIDA]======" << endl;
                    double r = getDouble("Enter radius of small round circle -> ");
                    d = Deltoida(r);
                    break;
                }
                case 2:{
                    cout << "======[PRINT DELTOIDA]======" << endl << d << endl;
                    break;
                }
                case 3:{
                    cout << "======[CHANGE RADIUS OF DELTOIDA]=====" << endl;
                    double r = getDouble("Enter new radius of small round circle -> ");
                    d.setRadius(r);
                    break;
                }
                case 4:{
                    cout << "======[LENGTH OF SEGMENT OF TANGENT]======" << endl;
                    cout << d.getLengthTangent() << endl;
                    break;
                }
                case 5:{
                    cout << "======[LENGTH OF DELTOIDA]======" << endl;
                    cout << d.getLengthLine() << endl;
                    break;
                }
                case 6:{
                    cout << "======[SQUARE OF DELTOIDA]======" << endl;
                    cout << d.getSquare() << endl;
                    break;
                }
                case 7:{
                    cout << "======[COORDS BY T-PARAM]======" << endl;
                    double t = getDouble("Enter real number -> ");
                    cout << "A("<< d.getXCoord(t) << "," << d.getYCoord(t) << ")" << endl;
                    break;
                }
                case 8:{
                    cout << "======[EQUATION OF DELTOIDA]======" << endl;
                    cout << line::Deltoida::getEquation() << endl;
                    break;
                }
                default:{
                    cout << "!!! THIS POINT DOESN'T EXIST !!!" << endl;
                }
            }
        }
    }
}
