#include<iostream>
#include<string> 
using namespace std; 
int main() {
	string pin1,account1,pin2,pin3,account2;
	cout<<"欢迎使用HELLO单车，下面请按要求完成注册\n您的账号\n"; 
	cin>>account1;
	do {
	cout<<"请输入密码\n";
	cin>>pin1; 
	cout<<"请确认密码\n";
	cin>>pin2;
	if (pin1==pin2)
	cout<<"注册成功\n";
	else
	cout<<"两次密码不一致，请重新设置\n";
}while (pin1!=pin2);
    cout<<"欢迎使用HELLO单车，下面请登录\n账号\n";
	cin>>account2;
	cout<<"密码\n";
	cin>>pin3;
	if(pin3==pin1&&account1==account2)
	cout<<"登录成功\nHELLO\nHELLO单车提醒您\n道路千万条\n安全第一条\n请安全骑行\n";
	else
	cout<<"账号或密码错误，请重试\n";
	system("pause");
	return 0;
}
	 
	 

