#include<iostream>
using namespace std;
int main() {
	char n;
	cout << "ÇëÊäÈëÒ»¸ö×ÖÄ¸\n";
	cin >> n;
	if (n >= 'a'&&n<='z') {
		n = n + 'A' - 'a';
		cout << n << '\t';
	}
	else if (n >='A'&&n<='Z') {
		n = n - 'A' + 'a';
		cout << n << '\t';
	}
	cin.ignore();
	cin.get();
	return 0;
}