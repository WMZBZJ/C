#include<iostream>
using namespace std;
void f1(int a, int b = 5) {//��ʼ����ȱʡֻ�ܷ���û�г�ʼ���ı�����
	int c;
	c = a + b;
	cout << c<<'\n';
}
int main() {
	f1(10, 3);//������ȱʡ���Ǹ�һ���βγ�ʼ�����Ժ����Ĭ���Դ�ֵ���㣬
	f1(10);   //��ʹ��ʼ����Ҳ������������ֵ��������ֵ�������
	return 0;
}