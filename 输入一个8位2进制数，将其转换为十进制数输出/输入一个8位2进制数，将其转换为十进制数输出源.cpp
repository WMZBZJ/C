#include<iostream>
using namespace std;
double power(double a,int n) {
	int s=1;
	for (; n > 0;n--) {
		s *= a;
	}
	return s;
}
int main() {
	int value=0,i;
	cout << "请输入一个八位的二进制数\n";
	for (i = 7; i >= 0; i--) {
		char ch;
		cin >> ch;
		if(ch=='1')
		value += static_cast<int>(power(2, i));
	}
	cout << value << endl;
	cin.ignore();
	cin.get();
	return 0;
}