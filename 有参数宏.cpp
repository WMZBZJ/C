#include<iostream>
using namespace std;     //�궨��ͨ����һ���ڶ����꣬���Ի��з��������������������ͬ�б�д
                         //��һ���궨�����һ��ʱ������ʹ��ת�����\�������ڻ���ǰ������һ����\��
#define V(a,b) a*b       //������ĺ겻���ֲ������ͣ����Ҳ��Բ������м���
#define W(a,b) a*'b'     //w��a,b��ת��Ϊa*98
int fun(int a, int b) {
	return (a * b);
}
int main() {
	int m=5, n=6;
	float x = 2.5, y = 4.5;
	cout << V(m, n) << '\t' << fun(m, n)<<'\n';
	cout << V(x, y) << '\t' << fun(x, y) << '\n';         //����������������֮ǰ�͸ı����βε�ֵ
	cout << V(m+1, n+1) << '\t' << fun(m+1, n+1) << '\n';//�������е�V��m+1,n+1��ת��Ϊm+1*n+1�ٽ��м���
	                                                     //�����Ƿ��в����궨�嶼����ת���ټ���
	cout << W(m, n) << '\t' << fun(m, n) << '\n';//'b'��ascll��ֵ��98
	cin.ignore();
	cin.get();
	return 0;
}