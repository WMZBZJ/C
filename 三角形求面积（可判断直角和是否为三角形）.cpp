#include<iostream>
#include<cmath>
using namespace std;
int main() {
	float a,b,c,A,B,C,D,S,P;
	cout<<"�����������ε������߳�"<<endl;
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
	    cout<<"��������\n���ΪS="<<S<<endl;
	    if(A=B+C)
	    cout<<"��ֱ��������\n";
	    else
	    cout<<"����ֱ��������\n";
	}
    else 
	    cout<<"����������\n";
	system("pause"); 
	return 0;
}
