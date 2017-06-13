#include<fstream>
#include<cmath>
#include<iostream>
#include<iomanip>
using namespace std;

int main() {
	int a, b, c;
	ofstream ofile;
	ofile.open("myfile.txt");

	for (a = 1; a <= 500; a++) {
		for (b = 1; b <=a; b++) {
			for (c = 1; c <= b; c++) {
				if (pow(a, 2) == (pow(b, 2) + pow(c, 2))) { ofile << a << '\t' << b << '\t' << c << endl; 
				break;
				}
			}
		}
	}
	ofile.close();

	int ch;
	ifstream ifile;
	ifile.open("myfile.txt");//分文件工程访问上级文件夹使用..//和..//..//
	cout << "从文件中读取的勾股数：" << endl;
	int i = 0;
	do {
		ifile>>ch;
		cout << ch<<setw(6);
		i += 1;
		if (i ==3) { cout << endl; i = 0; }
	} while (ifile.eof() == 0);
	ifile.close();
	system("pause");
	return 0;
}