#include<iostream>
using namespace std;
int main() {
	char ch;
	int n;
	cout << "������һ������ת���ɵ����������ǽ������ת��������\n";
	cin >> ch;
	n = ch - '0';
	cout << n << '\n';
	cout << "������һ������ת���ɵ������ַ������ǽ������ת���������ַ�\n";
	cin >> n;
	ch = n + '0' ;
	cout << ch << '\n';
	cin.ignore();
	cin.get();
	return 0;
}

