#include<iostream>
using namespace std;
int main() {
	int n, a, i, s = 0,t;
	cout << ("输入a的值, 输入你最后一项a的数量\n");
	cin >>a>> n;
	for (i = 0,t=a; i < n; i++) {
		s += t;
		t = t*10 + a;
	}
	cout << s<<'\n';
	cin .ignore();
	cin.get();
	return 0;
}