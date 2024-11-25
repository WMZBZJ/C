#include<iostream>
using namespace std;
int main() {
	char str[] = "HELLO";//使用“”定义字符数组其实就是输入了一个字符串，而字符串是自带字符串结束标记
	char str2[] = { 'h' };//字符串结束标记是指‘\0’如果没有他会出现不可预料的乱码
    char str1[] = "WORLD";//h烫烫烫烫烫烫烫烫烫烫烫烫烫烫烫蘔ORLD就是这个结果
	char str3[] = { 'a','b','\0'};//也可以用单引号定义，但如非必要必要忘记加‘\0’（他也占内存）
	char str4[50];
	cin >> str;           //不可输入空格
	cin.getline(str, 50);//最多接受49个字符还有一个留给‘\0’，可输入空格
	cout << str2;
	cin.get();
	cin.ignore();
	return 0;
}
