#include <iostream>
using namespace std;

int str_len(char *str);

int main() {
	char *str = new char[100];
	cin >> str;
	cout << str_len(str);
	delete str;
	return 0;
}

int str_len(char *str) {
	//�������������ĺ���
	int sum(0);
	while (str[sum]!='\0') {
		sum += 1;
	}
	return sum;
}