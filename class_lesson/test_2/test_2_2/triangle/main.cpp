//2016.10.18    2016.10.21
#include<iostream>
#include<cmath>
using namespace std;
int main() {
	double a, b, c, s, area;//换成int 提示可能会丢失数据
	cout << "请输入三角形的三边长a,b,c=";
	cin >> a >> b >> c;
	//下面使用两个if判断三角形是否成立 解决不合理信息的计算
	if (a <= 0 || b <= 0 || c <= 0) {
		cout << "请输入正数";
	}
	else if (a >= b + c||b >= a + c||c >= a + b) {
		cout << "该三角形不存在" << '\n';
	}
	else {
		s = (a + b + c) / 2.0;
		area = sqrt(s*(s - a)*(s - b)*(s - c));
		cout << "该三角形面积是" << area << endl;
	}
	return 0;
}
