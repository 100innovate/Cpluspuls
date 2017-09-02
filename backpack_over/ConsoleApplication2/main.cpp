#include<iostream>
#include<vector>

using namespace std;


int main() {
	int a, b;
	while (cin >> a >> b) {
 		vector<int> x(a);
		vector<int> y(b);
		for (int k(0); k < a; k++)
			cin >> x[k];
		for (int k(0); k < b; k++)
			cin >> y[k];

		vector<int> z(1000000);
		vector<bool> l(1000000, 0);
		vector<bool> p(1000000, 0);

		vector<int>out(b);
		bool k = 0;
		bool kk = 0;
		for (int i(0); i < a; i++) {
			if (l[x[i]])p[x[i]] = 1;
			z[x[i]] = i;
			l[x[i]] = 1;
		}

		for (int i(0); i < b; i++) {
			if (!l[y[i]]) {
				cout << "Impossible" << endl;
				kk = 1;
				break;
			}
			else if (p[y[i]])k = 1;
			else out[i] = z[y[i]];
		}

		if (k & !kk)cout << "Ambiguity" << endl;

		else if(!kk){
			cout << "Possible" << endl;
			for (int i(0); i < b; i++)
				cout << out[i]+1 << ' ';
			cout << endl;
		}
	}
	return 0;
}