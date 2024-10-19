#include<iostream>
using namespace std; 
int main() {
	const float PI=3.1415926;
	int a;
	float b,c,area,radius;
	cout<<"请输入你所需的面积模块\n'1'为圆\n'2'为矩形\n'3'为方形"<<endl;
	cin>>a;
	switch(a) {
		case 1:
			cout<<"请输入半径"<<endl;
			cin>>radius;
			area=radius*PI*radius;
			cout<<area<<endl;
			break;
		case 2:
			cout<<"请输入长和宽"<<endl;
			cin>>b>>c;
			area=b*c;
			cout<<area<<endl;
			break;
	    case 3:
	    	cout<<"请输入边长"<<endl;
	    	cin>>b;
			area=b*b;
	    	cout<<area<<endl;
	        break;
	    default:
	    	cout<<"抱歉，新的功能正在开发中"<<endl;
			break;		 
	} 
	system("pause");
	return 0;
}
