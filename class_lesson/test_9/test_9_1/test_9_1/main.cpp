#include"headfile.h"

int main() {
	cout << "area is" << area(1) << endl;//	若将计算矩形面积的函数原型改为 double area(double a=0, double b=0)；会出现多个重载函数可以匹配调用。 编译器会提示调用不明确
	cout << "area is" << area(1, 2) << endl;
	cout << "area is" << area(1, 3, 2) << endl;//double area(double a, double b，double c=0，int); 必须将double c=0放在形参末尾
	cout << "area is" << area(1, 2, 5, 0) << endl;
	return 0;
}

