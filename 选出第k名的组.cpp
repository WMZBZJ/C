#include<iostream>
#include<vector>//���������Ŀ�
#include<algorithm>//����sort�Ŀ�
using namespace std;
bool compare(int a, int b) {
	return a > b;
}         
int rank1(int a, int b, int c) {
	int s[3] = { a,b,c };
	int i,j,t;
	for(i=0;i<2;i++)
		for (j = i; j < 3; j++)
			if (s[i] < s[j]) {
				t = s[i];
				s[i] = s[j];
				s[j] = t;
			}
	/*cout << s[0] << s[1] << s[2];*/
	return s[0]*3+s[1]*2+s[2];
}
int main(){
	int a, b, c,n,m,i;
	cin >> n>>m;
	vector<int>vec;//�����Ƕ�����һ��������vector���Զ������úͽṹ������<>�д������ͣ�������Ǳ�����
	while (n--) {
		cin >> a >> b >> c;
		vec.push_back(rank1(a, b, c));
	}                                     //sort����Ĭ����������������������
	sort(vec.begin(), vec.end(), compare);//sort������������Ҫ�м��Ǽӡ�������compare�ǲ�������
	cout << vec[m - 1];                   //returnһ���ж�ʽ�ӣ����շ���ture��false��ʵ�ֽ�����������
	return 0;
}