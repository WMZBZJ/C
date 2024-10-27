#include<iostream>
using namespace std;
int main() {
    int x, y, z;
    for (x = 0; x <= 100 / 5; x++) {
        for (y = 0; y <= 100 / 3; y++) {
            for (z = 0; z <= 100; z++) {
                if (x + y + z == 100 && 15 * x + 9 * y + z== 300)
                    cout << "¼¦ÎÌ" << x << '\t' << "¼¦Ä¸" << y << '\t' << "¼¦³û" << z << '\n';
                else
                    continue;
            }
        }
    }
    cin.ignore();
    cin.get();
    return 0;
}

