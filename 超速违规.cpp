#include <iostream>
using namespace std;
int main(){
	float limit,speed,fine;
	cin>>limit>>speed;
	if((speed>1.1*limit)&&(speed<=1.2*limit)){
	fine=200;
	cout<<fine<<endl;
	}
	else if(speed>1.5*limit){
	cout<<"µõÏú¼İÊ»Ö¤\n";
	}
	else{
	fine=0;
	cout<<fine<<endl;
	}
	return 0; 
}
 
