#include<iostream>
using namespace std; 
int main() {
	const float PI=3.1415926;
	int a;
	float b,c,area,radius;
	cout<<"����������������ģ��\n'1'ΪԲ\n'2'Ϊ����\n'3'Ϊ����"<<endl;
	cin>>a;
	switch(a) {
		case 1:
			cout<<"������뾶"<<endl;
			cin>>radius;
			area=radius*PI*radius;
			cout<<area<<endl;
			break;
		case 2:
			cout<<"�����볤�Ϳ�"<<endl;
			cin>>b>>c;
			area=b*c;
			cout<<area<<endl;
			break;
	    case 3:
	    	cout<<"������߳�"<<endl;
	    	cin>>b;
			area=b*b;
	    	cout<<area<<endl;
	        break;
	    default:
	    	cout<<"��Ǹ���µĹ������ڿ�����"<<endl;
			break;		 
	} 
	system("pause");
	return 0;
}
