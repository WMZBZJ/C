#include<iostream>
#include<string>
using namespace std;

class Student {
	int SID;
	string Name;
public:
	Student(int a=0, string name="��С��") :SID(a) {
		Name = name;
	}
	~Student() {
		cout << SID << " " << Name << " " << "�˳�����" << endl;
	}
};

int main()
{
	int i, j, k;
	string name1, name2, name3;
	cin >> i >> name1 >> j >> name2 >> k >> name3;
	Student st1(i, name1);
	Student st2(j, name2);
	Student st3(k, name3);
	{
		Student st;
	}
	return 0;
}