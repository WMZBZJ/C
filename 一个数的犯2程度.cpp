#include <iostream>
using namespace std;

// 函数silly：计算数值有多二
// 参数：a-存储数值的字符数组，以'\0'结束，所以不需要另一个参数告诉函数数组有多长
// 返回值：数值犯二的程度
double silly(char a[]);

int main()
{
    char s[102];     // 定义存储数值的数组
    cin >> s;     // 输入不超过位的整数
    double sy = silly(s);     // 计算犯二的程度
    cout << sy << endl;     // 输出犯二的程度
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