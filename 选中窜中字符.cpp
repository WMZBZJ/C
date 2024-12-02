#include <iostream>
using namespace std;

void extractNum(char* str);

int main()
{
    char s[1024];
    cin.getline(s, 1024);     // 输入一行字符
    extractNum(s);     // 调用extractNum函数，选出数字
    cout << s << endl;     // 输出选出的数字
    return 0;
}

// 函数extractNum：选出str指向的字符串中的数字，并写回str
// 参数：str-指向字符串
void extractNum(char* str)
{
    // 请在此添加代码，实现函数extractNum
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