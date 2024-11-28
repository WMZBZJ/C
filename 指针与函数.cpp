#include<iostream>
using namespace std;
void func(int* no, string* str) {
	cout << "向编号" << *no << "号,说" << *str << '\n';
	*no = 8;
	*str = "我有一只小小鸟";
}
void func1(int no, string str) {
	no = 8;
	str = "我有一只小小鸟";
}
void maxandmin(int a, int b, int c, int* max, int* min) {
	*max = a > b ? a:b;
	*min = a < b ? a : b;
	*max = *max > c ? *max : c;
	*min = *min < c ? *min : c;
}
//指针交给函数的是地址，对其地址进行操作可以修改对应变量的内存，实现改变实参中的值，而普通变量
//只能实现值传递，无法改变实参的值，因此指针的引用可以解决函数无法返回2个值的诟病
//指针作为形参可以输入一个指针变量（不解引用），也可以输入一个普通变量的地址
int main() {
	int bh=3;
	string message="我是一只傻傻鸟";
	/*cout << "向编号" << bh << "号,说" << message << '\n';*/
	func1(bh, message);
	cout << "这是普通变量函数的结果，未实现实参的改变" << '\n';
	cout << "向编号" << bh << "号,说" << message << '\n';
	func(&bh, &message);
	//int* no = &bh;                                     //这里是使用指针输出
	//string* str = &message;
	///*cout << "向编号" << *no << "号,说" << *str << '\n';
	//*no = 8;
	//*str = "我有一只小小鸟";*/
	cout << "向编号" << bh << "号,说" << message << '\n';
	int a = 155, b = 150, c = 175,max,min;
	maxandmin(a, b, c, &max, &min);
	cout <<"最大值" << max << '\t'<<"最小值" << min;
	cin.ignore();
	cin.get();
	return 0;

}