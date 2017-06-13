#include<iostream>
#include<fstream>
using namespace std;

int main() {
	char ch[256];
	ifstream ifile;
	ifile.open("myfile.txt");
	cout << "ÎÄ¼þÄÚÈÝ:" << endl;
	do {
		ifile.getline(ch, 255);
		cout << ch << endl;
	} while (ifile.eof() == 0);
	ifile.close();
	return 0;
}