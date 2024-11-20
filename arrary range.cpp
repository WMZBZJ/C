#include<iostream>
using namespace std;
int main() {
	int arr[10] = { 0 };
	int i,j,t;
	for (i = 0; i < 10; i++)
		cin >> arr[i];
	for(i=0;i<10;i++)
		for (j=1; j < 10; j++) {
			if (arr[i] > arr[j]) {
				t = arr[j];
				arr[j] = arr[i];
				arr[i] = t;
			}
		}
	for (i = 0; i < 10; i++)
		cout << arr[i]<<'\t';
	return 0;
}