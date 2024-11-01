#include<iostream>
#include<cmath>
using namespace std;
int factor_sum(int n) {
	int  t=0 ,a;//i作为取1~a的所有数，m求a的开根号，n不断自增求因子，t存储值
		for (a = 2; a <= sqrt(n); a++) {
			if (n % a == 0&&a!=n/a) {
				t += a;
				t = t + n / a;
			}
		}
	return t;
}
int main() {
	int n,i;
	cin >> n;
	for (i = 1; i <= n; i++) {
		if(factor_sum(factor_sum(i))==i&& factor_sum(i)!= factor_sum(factor_sum(i))&& factor_sum(i)<=n)
		cout << i<<" "<< factor_sum(i) << '\n';
	}
	return 0;
} 