#include<iostream> 
using namespace std;
int main(){
	int n,a,b,c;
	for(n=100;n<=999;n++){
	    a=n%10;//��λ 
	    b=n/10%10;//ʮλ
	    c=n/100;//��λ
		if(n==a*a*a+b*b*b+c*c*c)
		cout<<n<<'\t';
		else
		continue;
	}
    cin.ignore();
    cin.get();
    return 0;	
}
		
