#include<iostream>
using namespace std;
#define A 1+2;
#define CD 12;  //�궨����ָ��һ���ַ�ת��һ����ֵ�����ַ���
#define XY 1+CD;//�����Է���,�궨����ִ�е���һ���ͻ��ֹ����ʹ�������ٳ�����ʽҲ����������
#define BC "HELLO"//������������Ϊ�ں궨�������ˡ�;���������Ϊ���������źţ��궨�����Բ���';'
#define DQ 123
#define XYZ DQ+1
int main() {
	int a,AB=1,B=2;
	a = AB+B+A;
	cout << a<<'\n';
	a = AB + A +B ;
	cout << a << '\n';
	a =  XY;
	cout << a << '\n';
	cout << BC << '\n';
	a = DQ + XYZ;
	cout << a << '\n';
	return 0;
}