#include<iostream>
using namespace std; 
int main() {
	int N,sum,i;
	cout<<"请输入N的值";
	cin>>N;
	while(i<=N){
		sum+=i;
		++i;
	}
	cout<<"和值sum="<<sum<<endl;
	system("pause");
	return 0;
}
