#include"headfile.h"

int Rectangle::sum = 0;
int Rectangle::sum1 = 0;

int main() {
	Rectangle rect;
	rect.show();
	rect.assign(100, 200, 300, 400);
	rect.show();
	Rectangle rect1(0, 0, 200, 200);
	rect1.show();
	rect1.assign(100, 200, 300, 400);
	cout << rect.calArea() << "  " << rect.calPerimeter()<<endl;
	Rectangle rect2(rect1);
	cout << "由复制构造函数生成的rect2:" << endl;
	rect2.show();

	rect += rect1;
	cout << "这里进行了+=运算" << endl;
	rect.show();

	rect -= rect1;

	cout << "这里进行了-=运算" << endl;
	rect.show();

	rect2 = rect + rect1;
	cout << "这里进行了+运算" << endl;
	rect2.show();

	rect2 = rect - rect1;
	cout << "这里进行了-运算" << endl;
	rect2.show();


	return 0;
}