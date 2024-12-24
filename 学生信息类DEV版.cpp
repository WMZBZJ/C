#include <iostream>
#include<cstring>
using namespace std;
class StInfo {
	int SID;
	char* Name, * Class, * Phone;
public:
	StInfo(int a, char* name, char* classinto, char* phone) :SID(a){
		Name = new char[strlen(name) + 1];
		strcpy(Name, name);
		Class= new char[strlen(classinto) + 1];
		strcpy(Class, classinto);
		Phone = new char[strlen(phone) + 1];
		strcpy(Phone, phone);
	}
	StInfo() {};
	void print() {
		cout << "学号：" << SID << '\n' << "姓名：" << Name << '\n' << "班级：" << Class << '\n' << "手机号：" << Phone << '\n';
	}
	~StInfo() {
		delete[]Name;
		delete[]Class;
		delete[]Phone;
	}
};
int main() {
	int a;
	char name[100], classinto[100], phone[100];
	cin >> a >> name >> classinto >> phone;
	StInfo a1(a, name, classinto, phone);
	a1.print();
	return 0;
	}
