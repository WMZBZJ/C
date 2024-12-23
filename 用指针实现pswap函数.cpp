#include <iostream>
using namespace std;

void pswap(int* p, int* q);

int main()
{
    int a, b;
    cin >> a >> b;     // 输入两个整数
    pswap(&a, &b);     // 调用pswap函数，交换a、b的值
    cout << a << " " << b << endl;     // 输出a、b的值
    cin.ignore();
    cin.get();
    return 0;
}

//函数pswap：交换指针p和q指向的单元中的整数值
//参数：p,q-int类型指针，指向要交换的整数
void pswap(int* p, int* q){
    int t;
    t = *q;
    *q = *p;
    *p = t;
}