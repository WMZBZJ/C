#include<iostream>
using namespace std;
void func(int* no, string* str) {
	cout << "����" << *no << "��,˵" << *str << '\n';
	*no = 8;
	*str = "����һֻСС��";
}
void func1(int no, string str) {
	no = 8;
	str = "����һֻСС��";
}
void maxandmin(int a, int b, int c, int* max, int* min) {
	*max = a > b ? a:b;
	*min = a < b ? a : b;
	*max = *max > c ? *max : c;
	*min = *min < c ? *min : c;
}
//ָ�뽻���������ǵ�ַ�������ַ���в��������޸Ķ�Ӧ�������ڴ棬ʵ�ָı�ʵ���е�ֵ������ͨ����
//ֻ��ʵ��ֵ���ݣ��޷��ı�ʵ�ε�ֵ�����ָ������ÿ��Խ�������޷�����2��ֵ��ڸ��
//ָ����Ϊ�βο�������һ��ָ��������������ã���Ҳ��������һ����ͨ�����ĵ�ַ
int main() {
	int bh=3;
	string message="����һֻɵɵ��";
	/*cout << "����" << bh << "��,˵" << message << '\n';*/
	func1(bh, message);
	cout << "������ͨ���������Ľ����δʵ��ʵ�εĸı�" << '\n';
	cout << "����" << bh << "��,˵" << message << '\n';
	func(&bh, &message);
	//int* no = &bh;                                     //������ʹ��ָ�����
	//string* str = &message;
	///*cout << "����" << *no << "��,˵" << *str << '\n';
	//*no = 8;
	//*str = "����һֻСС��";*/
	cout << "����" << bh << "��,˵" << message << '\n';
	int a = 155, b = 150, c = 175,max,min;
	maxandmin(a, b, c, &max, &min);
	cout <<"���ֵ" << max << '\t'<<"��Сֵ" << min;
	cin.ignore();
	cin.get();
	return 0;

}