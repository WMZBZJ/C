#include<iostream>
#include<string> 
using namespace std; 
int main() {
	string pin1,account1,pin2,pin3,account2;
	cout<<"��ӭʹ��HELLO�����������밴Ҫ�����ע��\n�����˺�\n"; 
	cin>>account1;
	do {
	cout<<"����������\n";
	cin>>pin1; 
	cout<<"��ȷ������\n";
	cin>>pin2;
	if (pin1==pin2)
	cout<<"ע��ɹ�\n";
	else
	cout<<"�������벻һ�£�����������\n";
}while (pin1!=pin2);
    cout<<"��ӭʹ��HELLO�������������¼\n�˺�\n";
	cin>>account2;
	cout<<"����\n";
	cin>>pin3;
	if(pin3==pin1&&account1==account2)
	cout<<"��¼�ɹ�\nHELLO\nHELLO����������\n��·ǧ����\n��ȫ��һ��\n�밲ȫ����\n";
	else
	cout<<"�˺Ż��������������\n";
	system("pause");
	return 0;
}
	 
	 

