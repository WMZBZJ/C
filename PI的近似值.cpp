#include<iostream>
#include<cmath> 
using namespace std;
int main(){
	int n;
	double PI,s,i=1.0,t=1.0;
	for(n=1;abs(i)>=1e-6;n++){ 
	    i=t/(2*n-1);
		s+=i;
		t*=-1;
	}
	PI=4.0*s;
	cout<<PI;
	cin.ignore();
	cin.get();
	return 0;
}
	
