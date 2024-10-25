#include<iostream>
#include<cmath> 
using namespace std;
int main(){
	int F1=1,F2=1,F3,n,N;
	cout<<"请输入该数列的项数\n";
	cin>>n;
	cout<<F1<<'\t'<<F2<<'\t'; 
	for(N=1;N<=n;N++){
	    F3=F1+F2;
	    cout<<F3<<'\t';
	    F1=F2;
	    F2=F3;
    }
    cin.ignore();
    cin.get();
    return 0;
}
    
	
