//���û�������һ����������ôϵͳ�ͻ��Զ��ĸ�������������ַ������������ʹ����������ַ���������
//�����������������һ�������ĵ�ַ
#include<iostream>
using namespace std;
int main() {
	int a;
	char b;
	bool c;
	string d;
	cout << "����a�ĵ�ַ" << &a << '\n';
	cout << "����b�ĵ�ַ" << &b << '\n';//b�ĵ�ַ�޷����������cout���䵱���ַ���������Ҳ�����\0'�Ͳ���ͣ���Ӷ���������
	cout << "����c�ĵ�ַ" << &c << '\n';
	cout << "����d�ĵ�ַ" << &d << '\n';
	cout << "����a�ĵ�ַ" << (void*) & a << '\n';//���ã�viod*���������������ַ����Ϊ�����ַ�ǿ��ת�������b�ĵ�ַ
	cout << "����b�ĵ�ַ" << (void*)&b << '\n';
	cout << "����c�ĵ�ַ" << (void*)&c << '\n';
	cout << "����d�ĵ�ַ" << (void*)&d << '\n';
	cout << "����a�ĵ�ַ" << (long long) & a << '\n';//���ﲻ��ʹ��intת��������������������ֻ��ʹ��long long����
	cout << "����b�ĵ�ַ" << (long long) & b << '\n';
	cout << "����c�ĵ�ַ" << (long long) & c << '\n';
	cout << "����d�ĵ�ַ" << (long long) & d << '\n';
	//ָ����ר�����ڴ�ű������ڴ��е��׵�ַ
	cout << "������ʾָ��" << '\n';
	int* pa;//����ָ�����ģ�壬ָ��������������Ѿ����ڵı���ͬ����ʲô���͵�ָ���ָ��ʲô���͵ı���
	char* pb;//��������ϻᱨ��ĳЩ�������������û�ǿ��ת��������Ӷ�������
	bool* pc;
	string* pd;
	pa = &a;//����ָ�������ֵ��ָ��ͻ�������ĵ�ֵַ������������Ӧ����ͬ
	pb = &b;
	pc = &c;
	pd = &d;
	cout << "����a�ĵ�ַ" << (long long)&a << '\n';
	cout << "����b�ĵ�ַ" << (long long)&b << '\n';
	cout << "����c�ĵ�ַ" << (long long)&c << '\n';
	cout << "����d�ĵ�ַ" << (long long)&d << '\n';
	cout << "����a�ĵ�ַ" << (long long)pa << '\n';
	cout << "����b�ĵ�ַ" << (long long)pb << '\n';
	cout << "����c�ĵ�ַ" << (long long)pc << '\n';
	cout << "����d�ĵ�ַ" << (long long)pd << '\n';
	//������ʲô���͵ı�����ռ�����ڴ�ռ䣬64λ8���ֽڣ�32λ4���ֽڣ���sizeof���Լ���ռ���ڴ�ĳ���
	cout << "������������ַ����͵ı���ռ�õ��ڴ泤��\n";
	cout << sizeof(pa) << '\n';
	cout << sizeof(pb) << '\n';
	cout << sizeof(pc) << '\n';
	cout << sizeof(pd) << '\n';
	cout << sizeof(int*) << '\n';
	cout << sizeof(char*) << '\n';
	cout << sizeof(bool*) << '\n';
	cout << sizeof(string*) << '\n';
}