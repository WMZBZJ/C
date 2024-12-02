#include<iostream>
#include<vector>//包含向量的库
#include<algorithm>//包含sort的库
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
	vector<int>vec;//这里是定义了一个向量，vector是自定义引用和结构体相似<>中代表类型，后面就是变量名
	while (n--) {
		cin >> a >> b >> c;
		vec.push_back(rank1(a, b, c));
	}                                     //sort函数默认升序排列向量或者数组
	sort(vec.begin(), vec.end(), compare);//sort函数的引用需要中间是加‘·’号compare是布尔函数
	cout << vec[m - 1];                   //return一个判断式子，最终返回ture和false，实现降序排列向量
	return 0;
}