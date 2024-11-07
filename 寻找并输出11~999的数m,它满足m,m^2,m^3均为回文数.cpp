#include<iostream>
using namespace std;
int palindrome(int n) {
	int i=n,s;
	for (s=0; n > 0; n=n / 10) {
		s = s * 10 + n % 10;
	}
	if (s == i)
		return i;
	else
		return 0;
}
int main() {
	int n = 11;
	for (int m; n <= 999; n++) {
		m = palindrome(n);
		if(m!=0&& palindrome(m * m)!=0&& palindrome(m * m*m)!=0)
		cout << palindrome(n) << '\t' << palindrome(m * m) <<'\t' << palindrome(m * m * m) << '\t';
	}
	cin.ignore();
	cin.get();
	return 0;
}