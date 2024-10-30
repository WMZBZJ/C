#include<iostream>
using namespace std;
int main() {
	int n, m=0,t;
	for (n = 0; n < 1000; n++) {
		t = n;
		m = 0;
		while (t > 0) {
			m = m * 10 + t % 10;
			t/= 10;
		} 
		if(n==m)
	    cout << m<< '\t';
	}
	cin.ignore();
	cin.get();
	return 0;
}