#include<iostream>
using namespace std;
int main() {
	int head, foot, t, ji,tu;
	cin >> t;
	while (t != 0) {
		cin >> head >> foot;
		ji = (4 * head - foot) / 2;
		tu = (foot - 2 * head) / 2;
		if ((ji + tu) == head && (ji * 2 + tu * 4) == foot&&ji>0&&tu>0)
			cout << ji <<" "<< tu << '\n';
		else
			cout << -1;
		t--;
	}
	return 0;
}