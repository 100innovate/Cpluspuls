#include"Myvector.h"
#include"Fraction.h"
#include"Circle.h"

//#define CRTDBG_MAP_ALLOC    
//#include <stdlib.h>    
//#include <crtdbg.h>  

template<typename Vector,typename DataType>
void test(Vector&v, const DataType&val) {
	v.show();
	cout << v.at(0) << endl;
	v.push_back(val); v.show();
	v.sort(); v.show();
	v.binarySearch(val);
	v.erase(v.begin()); v.show();
	v.insert(v.begin(), val); v.show();
}

int main() {
	Myvector<int>vi(5,1);
	vi[0] = -1;	vi[1] = 3;	vi[2] = 9;	vi[3] = -5;
	vi.binarySearch(3);
	Myvector<string>vs(5, "c");
	vs[0] = "java"; vs[1] = "Lisp"; vs[2] = "C#"; vs[3] = "Objet-c";
	Myvector<Fraction> vf(5, Fraction(1, 2));
	vf[1] = Fraction(2, 3); vf[1] = Fraction(2, 5); vf[3] = Fraction(4, 7);
	Myvector<Circle> vc(5, Circle(Point(), 1.0));
	vc[0] = Circle(Point(), 2.0); vc[1] = Circle(Point(), 0.5); vc[2] = Circle(Point(), 5.0); vc[3] = Circle(Point(), 0.1);

	test<Myvector<int>, int>(vi, 10);
	test<Myvector<string>, string>(vs, "c++");
	test<Myvector<Fraction>, Fraction>(vf, Fraction(7, 10));
	test<Myvector<Circle>, Circle>(vc, Circle(Point(), 3.0));

	return 0;
}