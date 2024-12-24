#include <iostream>
#include<string>
using namespace std;
//在此处实现一个汽车类
class Car{
    char door[4], light[4];
    int  spreed=0;
public:
    void dooropen() {
        strcpy_s(door,3,"ON");
    }
    void doorclose() {
        strcpy_s(door,4,"OFF");
    }
    void lightopen() {
        strcpy_s(light,3,"ON");
    }
    void lightclose() {
        strcpy_s(light,4,"OFF");
    }
    void spreedup() {
        spreed += 10;
    }
    void spreeddown() {
        spreed -= 10;
    }
    void func(char a) {
        switch (a) {
        case '1':
            dooropen();
            break;
        case '2':
            doorclose();
            break;
        case '3':
            lightopen();
            break;
        case '4':
            lightclose();
            break;
        case '5':
            spreedup();
            break;
        case '6':
            spreeddown();
            break;
        default:
            break;
        }
    }
    Car(){}
    void print() {
        cout << "车门" << door <<'\n' << "车灯" << light << '\n' << "速度" << spreed << endl;
    }
};


int main() {
    ////在此处解析执行输出汽车的整体状态
    char cmds[25];
    int i;
    Car a1;
    cin >> cmds;
    for (i = 0; cmds[i] != 0; i++)
        a1.func(cmds[i]);
    a1.print();
    return 0;
}
   