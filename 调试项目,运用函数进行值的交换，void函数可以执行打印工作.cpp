#include<iostream>
using namespace std;
void swap(int &a,int &b){
	int t;
	t = a;
	a = b;
	b = t;
}
void fiddle(int c, int& d) {
	c += 100;
	d += 100;
	cout << c<<'\t';
	cout << d<<'\n';
}
int main(){
	int x, y,x1,y1;
	cout << "请输入两个整数\n";
	cin >> x >> y;
	cout << x << '\t' << y<<endl;
	swap(x, y);
    cout << x << '\t' << y<<endl;
	cout << "请输入两个整数\n";
	cin >> x1 >> y1;
	cout << x1 << '\t' << y1 << '\n';
	fiddle(x1, y1);
	cout << x1 << '\t' << y1 << '\n';
	cin.ignore();
	cin.get();
	return 0;
}