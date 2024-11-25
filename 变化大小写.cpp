#include<iostream>
using namespace std;
void fun(char str[]);//函数原型可以在主函数定义但最好还是在全局范围定义，这样函数就可以在任意一个作用域调用
int main() {
	char str[30] = "WSNDHHHwsndhhh";
	cout << str << '\n';
	fun(str);
	cout << str << '\n';
	cin.ignore();
	cin.get();
	return 0;
}
void fun(char str[]) {
	int i;
	for (i = 0; str[i]; i++) {
		if (str[i] <= 'z' && str[i] >= 'a')
			str[i] = str[i] - 'a' + 'A';
		else if (str[i] <= 'Z' && str[i] >= 'A')//这里使用else if 是因为否则其会再次将刚转化的大写变成小写
			str[i] = str[i] + 'a' - 'A';        //if-else if-else是一个语句块，只会在一次循环中执行一次条件
	}
}