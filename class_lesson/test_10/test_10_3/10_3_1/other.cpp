#include"headfile.h"

void in() {
	people a;
	a.input();
	a.putinfile();
}

void out() {
	ifstream ifile;
	ifile.open("myfile.txt");
	char ch;
	do {
		ifile.get(ch);
		cout << ch;
	} while (ifile.eof() == 0);
	ifile.close();
	system("pause");
}