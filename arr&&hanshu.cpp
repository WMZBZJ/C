#include<iostream>
using namespace std;
//�������ܸı��β�Ϊ��ͨ�����ģ���Ϊ��ֻ��ֵ���ݣ����鴫�ݵ��������������˺��������׵�ַ
//���˵�ַ����������ͨ����ַ�ı��û���������
void fun(int arr[],int n) {        //������ββ��ø��������ж���Ԫ�أ�ֻҪ���;ͺ���
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
void print(int arr[],int n) {      //һ��һά��������һ��������ʾ����Ҫ�Ĵ���Ԫ�صĸ��������ͨ����
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