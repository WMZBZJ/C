#include <iostream>
using namespace std;

// ����maxIncrease���������۶�����
// ������s-���۶����飬n-���۶����鳤�ȣ�n>1
// ����ֵ�����۶��������
int maxIncrease(int s[], int n);

int main()
{
    int n, a[30], i;     // ������������飬n-���۶������a-���۶�����
    cin >> n;      // �������۶�������n>1
    // ����n�����۶�ֱ����a[0]��a[n-1]
    for (i = 0; i < n; i++)
        cin >> a[i];
    i = maxIncrease(a, n);
    cout << "�����������Ϊ��" << i << endl;
    return 0;
}

int maxIncrease(int s[], int n){
    int i, j,max=0;
    for (i = 0; i < n; i++) {
        for (j = i + 1; j < n; j++)
            if (s[j] - s[i] > max)
                max = s[j] - s[i];
    }
    return max;
}