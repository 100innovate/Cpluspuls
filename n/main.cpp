#include<bits\stdc++.h>
#include"doublelink.h"

using namespace std;

void outofN(int n) {
	DoubleLink<int> x;
	x.push(1);
	for (int i(1); i <= n; i++) {
		for (auto j(x.GetTop()); j != nullptr; j = j->m_Llink) {
			j->m_info *= i;
		}
		for (auto j(x.GetBottom()); j != nullptr; j = j->m_Rlink) {
			if (j->m_info > 999) {
				int q = j->m_info / 1000;
				j->m_info = j->m_info % 1000;
				if (j->m_Rlink == nullptr)x.push(q);
				else j->m_Rlink->m_info += q;
			}
		}
	}

	for (auto j(x.GetTop()); j != nullptr; j = j->m_Llink) {
		if (j != x.GetTop()) {
			if (j->m_info < 10)cout << "00";
			else if (j->m_info < 100)cout << "0";
		}
		if (j->m_Llink != nullptr)
			cout << j->m_info << ',';
		else cout << j->m_info << endl;
	}
}

int main() {
	int n;
	while (cin >> n) {
		outofN(n);
	}
}

