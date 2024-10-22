#include<iostream>
#include<cmath>
using namespace std;
int main() {
	float a,b,c,A,B,C,D,S,P;
	cout<<"请输入三角形的三个边长"<<endl;
	cin>>a>>b>>c;
	P=(a+b+c)/2.0;
	A=a*a; B=b*b; C=c*c;
	S=sqrt(P*(P-a)*(P-b)*(P-c));
    if(A<B) {
    	D=A;
    	A=B;
    	B=D;
	}
	if(A<C) {
		A=D;
		A=C;
		C=D;	
	}
	if(a+b>c&&a+c>b&&b+c>a) {
	    cout<<"是三角形\n面积为S="<<S<<endl;
	    if(A=B+C)
	    cout<<"是直角三角形\n";
	    else
	    cout<<"不是直角三角形\n";
	}
    else 
	    cout<<"不是三角形\n";
	system("pause"); 
	return 0;
}
