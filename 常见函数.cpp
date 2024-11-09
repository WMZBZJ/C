#include<iostream>
#include<cstring>
#include<cmath>
using namespace std;
int main() {
	string str1, str2;
	cin >> str1 >> str2;
	const char* cstr1 = str1.c_str();
	const char* cstr2 = str2.c_str();//c风格的字符串固定长度且以空字符结尾\0且其一般储存在字符数组中
	int result = strcmp(cstr1, cstr2);//strcmp使用时须将其转化为c风格的字符串，其本来就是用于c语言的
	if (result == 0)                  //函数，也可以一开始就定义'const char*'定义一个字符串
		cout << cstr1 << ' ' << cstr2 << ' ' << "字符串长度相等\n";//const char* a 是定义一个常量字符，其内容无法被修改
	if(result<0)
		cout<<"字符串长度"<<cstr1<<"小于"<<cstr2<<'\n'<<result;
	if (result  > 0)
		cout << "字符串长度" << cstr1 << "大于" << cstr2 << '\n';
	string str3, str4;
	cin >> str1 >> str2;
	int result1 = str3.compare(str4);//c++中也可以使用compare比较，当然其本身也可以进行大小比较
	if (result == 0)                 //只是compare可以像strcmp返回一个值经过大小比较
		cout << cstr1 << ' ' << cstr2 << ' ' << "字符串长度相等\n";
	if (result < 0)
		cout << "字符串长度" << cstr1 << "小于" << cstr2 << '\n' << result;
	if (result > 0)
		cout << "字符串长度" << cstr1 << "大于" << cstr2 << '\n';
	char str5[] = "HELLO";
	int len = strlen(str5)+1;
	char str6[7];//数组不初始化需要提前限定长度；
	strcpy_s(str6,len,str5);//strcpy_s只要先前定义好2个数组就行（如果复制的一方过小则会溢出）
	cout << str6<<'\n';        //VS貌似不支持在数组中定义长度直接用strlen函数，可以在先前用一个变量保存，再在strcpy_s中间插入
	strncpy_s(str6, str5,3);//strncpy_s可以让你只输出你所需长度的字符在strncpy_s最后声明(可以用变量)
	cout << str6<<'\n';
	char str7[16] = "HELLO";
	char str8[]=" World";
	strcat_s(str7, str8);//strcat是将2个字符拼接的函数，但前者应该有足够的空间保存这个字符
	cout << str7<<'\n';        //同样存在strncat_s可以限制最大字符
	string str9="HELLO", str10=" World";
	str9.append(str10);
	cout << str9<<'\n';//当然在c++中不必这么麻烦可以用append函数和+=进行，前提是其为string类型的
	str9 += str10;
	cout << str9<<'\n';
	cin.ignore();
	cin.get();
	return 0;
}