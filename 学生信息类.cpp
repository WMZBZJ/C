#include <iostream>
#include <string>
using namespace std;

class StInfo {
    int SID;
    string Name, Class, Phone;
public:
    StInfo(int id, string name, string classInfo, string phone) : SID(id), Name(name), Class(classInfo), Phone(phone) {}
    void print() {
        cout << "ѧ�ţ�" << SID << '\n' << "������" << Name << '\n' << "�༶��" << Class << '\n' << "�ֻ��ţ�" << Phone << '\n';
    }
};

int main() {
    int a;
    string Name, Class, Phone;
    cin >> a >> Name >> Class >> Phone;
    StInfo a1(a, Name, Class, Phone);
    a1.print();
    return 0;
}