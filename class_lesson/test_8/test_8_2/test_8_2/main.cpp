#include"headfile.h"
double px(int n, double x);

int main() {
	int n;
	double x;
	cin >> n >> x;
	cout<< px(n, x);
	return 0;
}

double px(int n,double x) {
	if (n == 0)return 1;
	else if (n == 1)return x;
	if (n >= 2)return ((2 * n - 1)*x*px(n - 1, x)-(n-1)*px(n - 2, x))/ n;

}