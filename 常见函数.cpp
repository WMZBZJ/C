#include<iostream>
#include<cstring>
#include<cmath>
using namespace std;
int main() {
	string str1, str2;
	cin >> str1 >> str2;
	const char* cstr1 = str1.c_str();
	const char* cstr2 = str2.c_str();//c�����ַ����̶��������Կ��ַ���β\0����һ�㴢�����ַ�������
	int result = strcmp(cstr1, cstr2);//strcmpʹ��ʱ�뽫��ת��Ϊc�����ַ������䱾����������c���Ե�
	if (result == 0)                  //������Ҳ����һ��ʼ�Ͷ���'const char*'����һ���ַ���
		cout << cstr1 << ' ' << cstr2 << ' ' << "�ַ����������\n";//const char* a �Ƕ���һ�������ַ����������޷����޸�
	if(result<0)
		cout<<"�ַ�������"<<cstr1<<"С��"<<cstr2<<'\n'<<result;
	if (result  > 0)
		cout << "�ַ�������" << cstr1 << "����" << cstr2 << '\n';
	string str3, str4;
	cin >> str1 >> str2;
	int result1 = str3.compare(str4);//c++��Ҳ����ʹ��compare�Ƚϣ���Ȼ�䱾��Ҳ���Խ��д�С�Ƚ�
	if (result == 0)                 //ֻ��compare������strcmp����һ��ֵ������С�Ƚ�
		cout << cstr1 << ' ' << cstr2 << ' ' << "�ַ����������\n";
	if (result < 0)
		cout << "�ַ�������" << cstr1 << "С��" << cstr2 << '\n' << result;
	if (result > 0)
		cout << "�ַ�������" << cstr1 << "����" << cstr2 << '\n';
	char str5[] = "HELLO";
	int len = strlen(str5)+1;
	char str6[7];//���鲻��ʼ����Ҫ��ǰ�޶����ȣ�
	strcpy_s(str6,len,str5);//strcpy_sֻҪ��ǰ�����2��������У�������Ƶ�һ����С��������
	cout << str6<<'\n';        //VSò�Ʋ�֧���������ж��峤��ֱ����strlen��������������ǰ��һ���������棬����strcpy_s�м����
	strncpy_s(str6, str5,3);//strncpy_s��������ֻ��������賤�ȵ��ַ���strncpy_s�������(�����ñ���)
	cout << str6<<'\n';
	char str7[16] = "HELLO";
	char str8[]=" World";
	strcat_s(str7, str8);//strcat�ǽ�2���ַ�ƴ�ӵĺ�������ǰ��Ӧ�����㹻�Ŀռ䱣������ַ�
	cout << str7<<'\n';        //ͬ������strncat_s������������ַ�
	string str9="HELLO", str10=" World";
	str9.append(str10);
	cout << str9<<'\n';//��Ȼ��c++�в�����ô�鷳������append������+=���У�ǰ������Ϊstring���͵�
	str9 += str10;
	cout << str9<<'\n';
	cin.ignore();
	cin.get();
	return 0;
}