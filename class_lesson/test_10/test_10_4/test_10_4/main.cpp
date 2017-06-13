#include"headfile.h"
int Fraction::ms_x = 0;
int main() {
	vector<Fraction> a(10);

	loadData(a);

	cout << "录入的分数如下:" << endl;
	for (auto &i : a) {
		cout << i << endl;
	}

	cout << "返回的数组最大值是" << max_element(a) << endl;

	normalize(a);
	cout << "归一化后的分数如下:" << endl;
	for (auto &i : a) {
		cout << i << endl;
	}

	system("pause");
	return 0;
}