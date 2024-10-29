#include<iostream>
using namespace std;
int main() {
	char ch;
	int n;
	cout << "请输入一个你想转换成的整数，我们将会把他转换成整数\n";
	cin >> ch;
	n = ch - '0';
	cout << n << '\n';
	cout << "请输入一个你想转换成的整数字符，我们将会把他转换成整数字符\n";
	cin >> n;
	ch = n + '0' ;
	cout << ch << '\n';
	cin.ignore();
	cin.get();
	return 0;
}

