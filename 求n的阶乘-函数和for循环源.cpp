#include<iostream>
using namespace std;
int fac(int n) {
	int m;
	if (n == 0)
		return 1;
	if(n>0){
	m = n * fac(n - 1);
	return m;
	}
}
int main() {
	int n, m=1;
	cout << "���������������Ľ׳�\n";
	cin >> n;
	cout << fac(n)<<'\n';
	if (n == 0)
		cout << "0�Ľ׳�Ϊ1\n";
	else {
		for (m = 1; n > 0; n--) {
			m *= n;
		}
	}
	cout << m << '\n';
	cin.ignore();
	cin.get();
	return 0;
}