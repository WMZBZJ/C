#include <iostream> 
using namespace std;
int main() {
	float a,b,c,d;
	cout<<"������3������"<<endl; 
	cin>>a>>b>>c; 
	if(a<b) {
		d=a;
		a=b;
		b=d;		
	}  
	if(a<c) {
		d=a;
		a=c;
		c=d;
	}  
	if(b<c) {
	    d=c;
		c=b;
		b=d;
	}
	cout<<a<<" "<<b<<" "<<c<<endl;
	system("pause");
	return 0;      
}

