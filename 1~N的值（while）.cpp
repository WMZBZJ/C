#include<iostream>
using namespace std; 
int main() {
	int N,sum,i;
	cout<<"������N��ֵ";
	cin>>N;
	while(i<=N){
		sum+=i;
		++i;
	}
	cout<<"��ֵsum="<<sum<<endl;
	system("pause");
	return 0;
}
