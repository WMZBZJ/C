#include<iostream>
using namespace std;
//函数不能改变形参为普通变量的，因为其只是值传递，数组传递的是数组名，给了函数它的首地址
//给了地址，函数就能通过地址改变用户的数据了
void fun(int arr[],int n) {        //数组的形参不用给出数组有多少元素，只要类型就好了
	int i,j,t;
	for (i = 0; i < n-1; i++) {      
		for (j = i + 1; j < n; j++) {
			if (arr[i] > arr[j]) {
				t= arr[i];
				arr[i] = arr[j];
				arr[j] =t ;
			}
		}                 
	}
}
void print(int arr[],int n) {      //一般一维数组用另一个参数表示其需要的处理元素的个数提高其通用性
	int i;
	for (i = 0; i < n; i++) {
		cout << arr[i] << '\t';
	}
	cout << '\n';
}
int main() {
	int arr[5] = { 212,3342,463,512,521 }, arr1[8] = { 324,3213,4243,3533,123,35354,21 };
	fun(arr, 5);
	fun(arr1, 8);
	print(arr, 5);
	print(arr1, 8);
	cin.ignore();
	cin.get();
	return 0;
}