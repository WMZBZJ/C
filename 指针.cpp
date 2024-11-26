//当用户定义了一个变量，那么系统就会自动的给这个变量分配地址，这个变量名就代表了这个地址储存的数据
//下面我们来试着输出一个变量的地址
#include<iostream>
using namespace std;
int main() {
	int a;
	char b;
	bool c;
	string d;
	cout << "变量a的地址" << &a << '\n';
	cout << "变量b的地址" << &b << '\n';//b的地址无法输出是由于cout将其当成字符串输出，找不到‘\0'就不会停，从而出现乱码
	cout << "变量c的地址" << &c << '\n';
	cout << "变量d的地址" << &d << '\n';
	cout << "变量a的地址" << (void*) & a << '\n';//采用（viod*）可以正常输出地址是因为它将字符强制转换输出了b的地址
	cout << "变量b的地址" << (void*)&b << '\n';
	cout << "变量c的地址" << (void*)&c << '\n';
	cout << "变量d的地址" << (void*)&d << '\n';
	cout << "变量a的地址" << (long long) & a << '\n';//这里不能使用int转换，会有数据溢出，因此只能使用long long类型
	cout << "变量b的地址" << (long long) & b << '\n';
	cout << "变量c的地址" << (long long) & c << '\n';
	cout << "变量d的地址" << (long long) & d << '\n';
	//指针是专门用于存放变量的内存中的首地址
	cout << "下面演示指针" << '\n';
	int* pa;//声明指针变量模板，指针变量名不能与已经存在的变量同名，什么类型的指针就指向什么类型的变量
	char* pb;//如果不符合会报错，某些编译器可以在用户强制转换变量后从而不报错
	bool* pc;
	string* pd;
	pa = &a;//经过指针变量赋值后，指针就会代表它的地址值，故下面的输出应当相同
	pb = &b;
	pc = &c;
	pd = &d;
	cout << "变量a的地址" << (long long)&a << '\n';
	cout << "变量b的地址" << (long long)&b << '\n';
	cout << "变量c的地址" << (long long)&c << '\n';
	cout << "变量d的地址" << (long long)&d << '\n';
	cout << "变量a的地址" << (long long)pa << '\n';
	cout << "变量b的地址" << (long long)pb << '\n';
	cout << "变量c的地址" << (long long)pc << '\n';
	cout << "变量d的地址" << (long long)pd << '\n';
	//不论是什么类型的变量都占用了内存空间，64位8个字节，32位4个字节，用sizeof可以计算占用内存的长度
	cout << "下面输出的是字符类型的变量占用的内存长度\n";
	cout << sizeof(pa) << '\n';
	cout << sizeof(pb) << '\n';
	cout << sizeof(pc) << '\n';
	cout << sizeof(pd) << '\n';
	cout << sizeof(int*) << '\n';
	cout << sizeof(char*) << '\n';
	cout << sizeof(bool*) << '\n';
	cout << sizeof(string*) << '\n';
}