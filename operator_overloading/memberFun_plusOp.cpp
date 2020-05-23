#include <iostream>

using namespace std;

class complex {
	int real, imag;
	public:
		complex() {}
		complex(int a, int b): real(a), imag(b) { }

		complex operator +(complex &obj)
		{
			cout << "Operator(+) overload function." << endl;
			complex res;
			res.real = real + obj.real;
			res.imag = imag + obj.imag;

			return res;
		}

		void print()
		{
			cout << "Real: " << real << " " << "Imag: " << imag << endl;
		}
};

int main()
{
	complex obj(3, 7), obj1(10, 20), obj2(15, 25), obj3;
	obj.print();
	obj1.print();
	obj2.print();
	obj3 = obj + obj1 + obj2;
	obj3.print();
}
