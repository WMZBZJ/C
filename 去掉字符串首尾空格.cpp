#include <iostream>
using namespace std;


char* trim(char* str);

int main()
{
    char s[1024];     // ����洢�ַ�����һά�ַ�����
    // ����һ���ַ������԰����ո�
    // ������ַ�������s�У�����ȡ���ַ��������Զ�����'\0'
    cin.getline(s, 1024);
    cout << trim(s) << endl;     // ���ȥ����β�ո����ַ���
    cout << s;
    cin.ignore();
    cin.get();
    return 0;
}

// ����trim��ȥ���ַ�����β�ո�
// ������str-�ַ�ָ�룬ָ��������ַ���
// ����ֵ���ַ�ָ�룬ָ��ȥ����β�ո����ַ������׵�ַ��
// ��ʾ������ֱ�����ַ���str�в���
char* trim(char* str){
    char *p1, *p2;
    p2 = p1 = str;
    while (*p1 == ' ') {
        while (*p1) {
            *p1 = *(p1 + 1);
            p1++;
        }
        p1 = str;
    }
    while (*p2++);
    p2 -= 2;
    while (*p2 == ' ') {
        *p2 = '\0';
        p2--;
    }
    p1 = str;
    return p1;
}