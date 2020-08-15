#include <iostream>

using namespace std;

class A {
	int x, y;
	public:
		A(int a, int b)
	       	{
			cout << "Paramterised Contructor.\n";
			x = a, y = b;
		}
		A(A &obj)
		{
			cout << "Copy contructor.\n";
			x = obj.x, y = obj.y;
		}
		void print()
		{
			cout << "x-" << x << " y-" << y << endl;
		}
		~A()
		{
			cout << "Destructor called.\n";
		}
};

int main()
{
	A obj1(10, 20);
	obj1.print();
	A obj2(obj1);
	obj2.print();

	return 0;
}
