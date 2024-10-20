#include<iostream>
#include<string> 
using namespace std; 
int main() {
	string pin,account;
	account = "3021599168";
	pin = "lbwnb8LBWNB8";
	cout<<"ÇëÊäÈëÄãµÄÕËºÅ\n";
	cin>>account;
	cout<<"ÇëÊäÈëÄãµÄÃÜÂë\n";
	cin>>pin;
	if(account=="3021599168"&&pin=="lbwnb8LBWNB8")
	cout<<"µÇÂ½³É¹¦\n";
	else
	cout<<"ÕËºÅ»òÃÜÂë´íÎó\n";
	system("pause");
	return 0;
}
