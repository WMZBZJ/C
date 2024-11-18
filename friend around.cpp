#include <iostream>
using namespace std;
int maxtips(int a[][10], int N) {
    int max = 0, num=0,i,j,I,J,maxtip=0,tip;
    for (i = 0; i < N; i++)
        for (j = 0; j < 10; j++) {
            tip = a[i][j];
            if (a[i][j] != 0) {
                for (I = 0; I < N; I++)
                    for (J = 0; J < 10; J++)
                        if (a[i][j] == a[I][J])
                            num++;
            }
            if (num > max) {
                max = num;
                maxtip = tip;
            }
            if (num == max && tip > maxtip)
                maxtip = tip;
            num = 0;
        }
    return maxtip;
}
int maxnum(int a[][10], int N) {
    int max = 0, num=0, i, j, I, J;
    for (i = 0; i < N; i++)
        for (j = 0; j < 10; j++) {
            if (a[i][j] != 0) {
                for (I = 0; I < N; I++)
                    for (J = 0; J < 10; J++)
                        if (a[i][j] == a[I][J])
                            num++;
            }
            cout << num<<' ';
            if (num > max)
                max = num;
            cout << max << '\n';
            num = 0;
        }
    return max;
}
int main() {
    int i, j, N,k,num,tip;
    int arr[100][10] = {};
    cin >> N;
    for (i = 0; i < N; i++) {
        cin >> k;
        for (j = 0; j < k; j++) 
            cin >> arr[i][j];
    }
    for (i = 0; i < N; i++) {
        for (j = 0; j < 10; j++)
            cout << arr[i][j] << ' ';
        cout << '\n';
    }
    num = maxnum(arr, N);
    tip = maxtips(arr, N);
    cout << tip << " " << num;
    return 0;
}
