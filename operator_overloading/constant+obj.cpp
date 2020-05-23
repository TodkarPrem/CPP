#include <iostream>

using namespace std;

class complex {
	int real, imag;
	public:
		complex() {}
		complex(int a, int b): real(a), imag(b) { }

		complex operator +(int val)
		{
			cout << "Operator(+) overload function." << endl;
			complex res;
			res.real = real + val;
			res.imag = imag + val;

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
	obj3 = obj + 10;
	obj3.print();
	obj3 = obj1 + 50;
	obj3.print();
	obj3 = obj2 + 100;
	obj3.print();
}
