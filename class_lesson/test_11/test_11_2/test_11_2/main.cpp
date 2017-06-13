#include<iostream>
using namespace std;
int a[] = { 2,4,6,8,10 };
int &index(int i);
int main() {

	index(3) = 16;
	for (int i = 0; i < 5; i++)cout << index(i) << ' ';
	cout << endl;
	return 0;
}
int &index(int i) {
	return a[i];
}