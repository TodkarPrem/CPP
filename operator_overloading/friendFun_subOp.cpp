#include <iostream>

using namespace std;

class complex {
	int real, imag;
	public:
		complex() {}
		complex(int a, int b): real(a), imag(b) { }

		void print()
		{
			cout << "Real: " << real << " " << "Imag: " << imag << endl;
		}

		friend complex operator -(complex &obj1, complex &obj2);
};

complex operator -(complex &obj1, complex &obj2)
{
	cout << "Operator(-) overload function." << endl;
	complex res;
	res.real = obj1.real - obj2.real;
	res.imag = obj1.imag - obj2.imag;

	return res;
}

int main()
{
	complex obj1(10, 20), obj2(15, 25), obj3;
	obj1.print();
	obj2.print();
	obj3 = obj1 - obj2;
	obj3.print();
}
