#include<iostream>
using namespace std;
#define A 1+2;
#define CD 12;  //宏定义是指用一个字符转换一个数值或者字符串
#define XY 1+CD;//经测试发现,宏定义在执行到第一个就会截止，即使后面有再长的算式也不继续计算
#define BC "HELLO"//上述错误是因为在宏定义后加上了“;”计算机以为是语句结束信号，宏定义后可以不加';'
#define DQ 123
#define XYZ DQ+1
int main() {
	int a,AB=1,B=2;
	a = AB+B+A;
	cout << a<<'\n';
	a = AB + A +B ;
	cout << a << '\n';
	a =  XY;
	cout << a << '\n';
	cout << BC << '\n';
	a = DQ + XYZ;
	cout << a << '\n';
	return 0;
}