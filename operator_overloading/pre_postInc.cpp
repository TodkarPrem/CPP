#include <iostream>

using namespace std;

class base {
	int x, y;
	public:
		base() { }
		base(int a, int b):x(a), y(b) {}

		base operator ++(int num)
		{
			cout << "Post-increment operator overloaded.\n";
			base res;
			res.x = x, res.y = y;
			x = x+1, y = y+1;
			return res;
		}

		base operator ++()
		{
			cout << "Pre-increment operator overloaded.\n";
			base res;
			x = x+1, y = y+1;
			res.x = x, res.y = y;
			return res;
		}

		void print()
		{
			cout << "x: " << x << ", y: " << y << endl;
		}
};


int main()
{
	base obj1, obj2, obj3(10, 20);
	cout << "Passed data: ";
	obj3.print();

	obj1 = obj3++;
	obj1.print();

	obj2 = ++obj3;
	obj2.print();

	cout << "Original data after all operations: ";
	obj3.print();

	return 0;
}
