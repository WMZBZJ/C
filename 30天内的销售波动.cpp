#include <stdio.h>
#include <iostream>
using namespace std;

int main()
{
    int n, a[30], i;     // ������������飬n-���۶������a-���۶�
    cout << "�������۶�������n <= 30"<<'\n';
    cin >> n;     // �������۶�������n <= 30
    // ����n�����۶�ֱ����a[0]��a[n-1]
    cout << "����n�����۶�" << '\n';
    for (i = 0; i < n; i++)
        cin >> a[i];
    // ���ڴ���Ӵ��룬���㲢������۶�Ĳ������
    for (i = 0; i < n-1; i++) {
        cout << a[i + 1] - a[i];
    }
    return 0;
}