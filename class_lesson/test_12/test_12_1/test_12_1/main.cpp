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
	cout << "�ɸ��ƹ��캯�����ɵ�rect2:" << endl;
	rect2.show();

	rect += rect1;
	cout << "���������+=����" << endl;
	rect.show();

	rect -= rect1;

	cout << "���������-=����" << endl;
	rect.show();

	rect2 = rect + rect1;
	cout << "���������+����" << endl;
	rect2.show();

	rect2 = rect - rect1;
	cout << "���������-����" << endl;
	rect2.show();


	return 0;
}