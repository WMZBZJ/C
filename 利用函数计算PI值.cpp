#include<iostream>
#include<cmath>
using namespace std;
double power(double i, int n) {
	double s = i;
	while (n--)
		s = s*i*i;
	return s;
}
double arctan(double a) {
	int n = 0;
	double s=0.0,b=0.0,t=1.0;
	for (; abs(power(a, n)) >= 1e-15; n++) {
		b=t*power(a,n)/ (2 * n + 1);
		s +=b;
		t *= -1;
	}
	return s;
}
int main() {
	double PI;
	PI = 16 * arctan(1 / 5.0) - 4 * arctan(1 / 239.0);
	cout << PI;
	return 0;
}