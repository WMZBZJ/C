#include<iostream>
#include<cmath> 
using namespace std;
int main(){
	int a,n;
	float s;
	for(a=101;a<=200;a+=2){
		s=sqrt(a);
		for(n=2;n<=s;n++){
		if(a%n==0)
		break;
		if(n+1>s)
		cout<<a<<" '\t'"; 
		}
    }
    cin.ignore();
    cin.get();
    return 0;
}
