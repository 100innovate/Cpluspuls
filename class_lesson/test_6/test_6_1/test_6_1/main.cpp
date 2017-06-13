#include<iostream>
#include<cmath>
#include<fstream>
#include<iomanip>
using namespace std;
int main() {
	ofstream ofile;
	ofile.open("myfile.txt");
	ofile << "Ë®ÏÉ»¨Êý"<<'\t';
	int m;
	for (int n(100); n < 1000; n++) {
		m = n;
		for (int x(0); m != 0; m = m / 10) {
			x = pow(m % 10, 3) + x;
			if (x == n) {
				ofile << '\n' << setw(6) << n;
			}
		}
	}
	ofile.close();
	return 0;
}