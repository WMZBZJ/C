#include<iostream>
using namespace std;
int main() {
	float a,b(5);
	cout<<"请输入每月电量"<<endl;
	cin>>a;
	if(0<=a&&a<=50)
	b=0.53*a;
	if(a>50)
	b=0.53*50+(a-50)*0.58;
	else
	cout<<"wdnmd"<<endl;
	cout<<b<<endl;
	system("pause");
	 return 0;
} 
