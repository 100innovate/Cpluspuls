#include"headfile.h"

int main() {

	Rectangle rect;
	rect.show();
	rect.assign(100, 200, 300, 400);
	rect.show();
	Rectangle rect1(0, 0, 200, 200);
	rect1.show();
	rect1.assign(100, 200, 300, 400);
	cout << rect.calArea() << "  " << rect.calPerimeter();
	return 0;
}