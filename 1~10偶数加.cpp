#include<iostream>
using namespace std; 
int main() {
	int i,s=0;
	for(i=1;i<10;i+=2) {
		s+=i+1;
		cout<<s<<" "<<i<<endl;		
	}
	system("pause");
	return 0;
}
