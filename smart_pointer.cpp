#include <iostream>

using namespace std;

class smartPtr {
	int *ptr;
	public:
		smartPtr() {};
		smartPtr(int *p) {
			ptr = p;
			cout << ptr << " : Allocated\n";
		}
		~smartPtr() {
			cout << ptr << " : Destroyed\n";
			delete ptr;
		}
		int & operator *() {
			return *ptr;
		}
};

int main()
{
	{
		smartPtr obj1(new int);
		*obj1 = 20;
		cout << "obj: " << *obj1 << endl;
	}
	{
		smartPtr obj2(new int);
		*obj2 = 30;
		cout << "obj: " << *obj2 << endl;
	}
	{
		smartPtr obj3(new int);
		*obj3 = 40;
		cout << "obj: " << *obj3 << endl;
	}

	return 0;
}
