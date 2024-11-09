#include<iostream>
using namespace std;
void f1(int a, int b = 5) {//初始化的缺省只能放在没有初始化的变量后
	int c;
	c = a + b;
	cout << c<<'\n';
}
int main() {
	f1(10, 3);//函数的缺省即是给一个形参初始化，以后计算默认以此值计算，
	f1(10);   //即使初始化了也可以输入其他值，以其他值代入计算
	return 0;
}