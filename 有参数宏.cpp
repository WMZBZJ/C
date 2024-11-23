#include<iostream>
using namespace std;     //宏定义通常在一行内定义完，并以换行符结束，不可与其它语句同行编写
                         //当一个宏定义多于一行时，必须使用转义符“\”，即在换行前先输入一个“\”
#define V(a,b) a*b       //宏参数的宏不区分参数类型，并且不对参数进行计算
#define W(a,b) a*'b'     //w（a,b）转换为a*98
int fun(int a, int b) {
	return (a * b);
}
int main() {
	int m=5, n=6;
	float x = 2.5, y = 4.5;
	cout << V(m, n) << '\t' << fun(m, n)<<'\n';
	cout << V(x, y) << '\t' << fun(x, y) << '\n';         //函数可以在输入数之前就改变其形参的值
	cout << V(m+1, n+1) << '\t' << fun(m+1, n+1) << '\n';//第三行中的V（m+1,n+1）转化为m+1*n+1再进行计算
	                                                     //无论是否有参数宏定义都是先转换再计算
	cout << W(m, n) << '\t' << fun(m, n) << '\n';//'b'的ascll码值是98
	cin.ignore();
	cin.get();
	return 0;
}