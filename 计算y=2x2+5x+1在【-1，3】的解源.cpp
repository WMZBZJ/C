#include<iostream>
#include<cmath>
using namespace std;
int main() {
    	float x1 = -1.0, x2 = 3.0, x3,  y1, y2, y3;
	do {
		x3 = float((x2 + x1) / 2);
		y3 = float((2 * x3 * x3 + 5 * x3 + 1));
		y1 = float(2 * x1 * x1 + 5 * x1 + 1);
		y2 = float(2 * x2 * x2 + 5 * x2 + 1);
		if (y1 * y3 > 0) {
			x1 = float(x3);
		}
		else
			x2 = float(x3);
	} while (fabs(y3) > 1e-5);
	  cout << x3<<'\t';
	  cin.ignore();
	  cin.get();
	  return 0;
} 