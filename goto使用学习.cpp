#include<iostream>
using namespace std;
int i = 10;
void f1() {
	   int i = 5;
   AA:  i++;        //goto类似一个传送门将一个语句在再次送回goto后定义的标签再次执行语句
	   cout << i<<" ";   //其过程类似循环，这里就是运用了if语句实现的，不满足条件就无法打印
	   if (i >= 200)//在实际运用中应尽量避免该方式，会导致程序混乱，除非是在跳出错误处理和多重循环时 
		   goto BB; //不论是标签还是定义都只在其对应的块作用域中生效
	   goto AA;
   BB: cout << i << '\n';
}
int main() {
	int i = 5;
	f1();
	cout << ::i<<'\n';//全局变量可以在主函数外定义，应用时在1前面加上::以使用他们，与全局变量
	cout << i;        //同样的变量名可以重复使用
	cin.ignore();
	cin.get();
	return 0;
}