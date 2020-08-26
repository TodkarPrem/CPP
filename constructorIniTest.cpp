#include <iostream>

using namespace std;

class Test {
	int x, y;
	public:
		Test():x(10), y(x+10){}
	        void print() {
			cout << x << ", " << y << endl;
		}
};

int main()
{
	Test *obj = new Test();
	obj->print();
	return 0;
}
