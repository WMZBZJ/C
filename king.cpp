#include<iostream>
using namespace std;
int king(int arr[], int except,int num );
int main() {
	int arr[1000]={0}, i, num,except;
	cout << "请输入猴子的数量以及每隔几只猴子便淘汰一只" << '\n';
	cin >> num>> except;
	for (i = 0; i < num; i++) {
		arr[i] =i+1;
	}

	cout<<king( arr,except,num);
	return 0;
}
int king(int arr[], int except,int num) {
	int i,j;
	int* p1 = arr,*p2;
	p2 = &arr[num-1];
	for (i = 1; i < num; i++) {
		j = 1;
		while (j < except) {
			if (*p1 != 0) {
				p1++;
				if (p1 > p2)
					p1 = arr;
				j++;
				/*cout << j<<'\t'<<*p1<<endl;*/
			}
		    if (j == except) {
				    while (*p1 == 0) {
					        p1++;
					        if (p1 > p2)
						    p1 = arr;
				    }
				    *p1 = 0;
				    p1++;
				    if (p1 > p2)
					    p1 = arr;
			}
			if(*p1==0){
				p1++;
				if (p1 > p2)
					p1 = arr;
			}
		}
		
	}
	for (p1 = arr; *p1 == 0; p1++);
	return *p1;
}
