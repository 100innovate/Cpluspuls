#include"headfile.h"

double putin() {
	int a(0);
	while (1) {
		cin >> a;
		string l;
		if (!cin.fail()) {
			return a;
			break;
		}
		cin.clear();
		cout << "ÊäÈë´íÎóÇëÖØÊÔ"<<endl;
		if (a) cin >> l;

	}
}