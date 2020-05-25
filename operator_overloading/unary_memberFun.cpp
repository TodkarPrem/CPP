#include <iostream>

using namespace std;

class base {
	int x, y;
	public:
		base() {}
		base(int a, int b):x(a), y(b) {}

		base operator -()
		{
			base res;
			res.x = -x;
			res.y = -y;
			return res;
		}

		void print()
		{
			cout << "x: " << x << " y: " << y << endl;
		}
};

int main()
{
	base obj(10, -20);
	obj.print();
	cout << "Applying -ve operator on object.\n";
	obj = -obj;
	obj.print();
	return 0;
}
