#include<iostream>
using namespace std;
int main() {
	char a;
	cout << "输入任意字符串，其中所有小写字母将被转化为大写，当输入数字0时退出:"<<endl;

	while (cin.get(a)){
		if (a >= 'a' && a<='z') a = a - 32;
		if (a == '0')break;
		cout << a;
	} 
	return 0;
}