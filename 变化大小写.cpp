#include<iostream>
using namespace std;
void fun(char str[]);//����ԭ�Ϳ��������������嵫��û�����ȫ�ַ�Χ���壬���������Ϳ���������һ�����������
int main() {
	char str[30] = "WSNDHHHwsndhhh";
	cout << str << '\n';
	fun(str);
	cout << str << '\n';
	cin.ignore();
	cin.get();
	return 0;
}
void fun(char str[]) {
	int i;
	for (i = 0; str[i]; i++) {
		if (str[i] <= 'z' && str[i] >= 'a')
			str[i] = str[i] - 'a' + 'A';
		else if (str[i] <= 'Z' && str[i] >= 'A')//����ʹ��else if ����Ϊ��������ٴν���ת���Ĵ�д���Сд
			str[i] = str[i] + 'a' - 'A';        //if-else if-else��һ�����飬ֻ����һ��ѭ����ִ��һ������
	}
}