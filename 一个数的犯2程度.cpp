#include <iostream>
using namespace std;

// ����silly��������ֵ�ж��
// ������a-�洢��ֵ���ַ����飬��'\0'���������Բ���Ҫ��һ���������ߺ��������ж೤
// ����ֵ����ֵ�����ĳ̶�
double silly(char a[]);

int main()
{
    char s[102];     // ����洢��ֵ������
    cin >> s;     // ���벻����λ������
    double sy = silly(s);     // ���㷸���ĳ̶�
    cout << sy << endl;     // ��������ĳ̶�
    return 0;
}

double silly(char arr[]) {
    double result = 1.0;
    int i = 0, len = 0, minus = 0;
    if (arr[0] == '-') {
        minus = 1;
        result *= 1.5;
    }
    while (arr[len] != '\0') {
        if (arr[len] == '2')
            i++;
        len++;
    }
    if ((arr[len - minus] - '0') % 2 == 0|| (arr[len - minus] - '0') == 2 )
        result *= 2.0;
    result *= static_cast<double>(i) / (len - minus);
    return result;
}