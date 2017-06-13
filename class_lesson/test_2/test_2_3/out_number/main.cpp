#include<iostream>
using namespace std;
int main() {
	int size[6];
	size[0] = sizeof(int);
	size[1] = sizeof(char);
	size[2] = sizeof(short);
	size[3] = sizeof(long);
	size[4] = sizeof(float);
	size[5] = sizeof(double);
	cout << "int" << "\t" << size[0] << endl;
	cout << "char" << "\t" << size[1] << endl;
	cout << "short" << "\t" << size[2] << endl;
	cout << "long" << "\t" << size[3] << endl;
	cout << "float" << "\t" << size[4] << endl;
	cout << "double" << "\t" << size[5] << endl;
	return 0;
}