#include <iostream>
using namespace std;

void extractNum(char* str);

int main()
{
    char s[1024];
    cin.getline(s, 1024);     // ����һ���ַ�
    extractNum(s);     // ����extractNum������ѡ������
    cout << s << endl;     // ���ѡ��������
    return 0;
}

// ����extractNum��ѡ��strָ����ַ����е����֣���д��str
// ������str-ָ���ַ���
void extractNum(char* str)
{
    // ���ڴ���Ӵ��룬ʵ�ֺ���extractNum
    /********** Begin *********/
    char* p1,*p2;
    int i=0,j=0;
    p1 = p2 = str;
    while ( str[i] != '\0') {
        if (str[i] >= '0' && str[i] <= '9')
            break;
        i++;
        cout << i<<'\n';
    }
    while (j < i) {
        if (str[j] == '-') {
            str[0] = '-';
            break;
        }
        j++;
    }
    if (str[0] == '-')
        p2++;
    while (*p1) {
        while (*p1 <= '9' && *p1 >= '0') {
            *p2 = *p1;
            cout << p1 << '\t' << p2;
            cin.get();
            p2++;
            p1++;
            continue;
        }
        p1++;
    }
    ++ * p2 = '\0';
    /********** End **********/
}