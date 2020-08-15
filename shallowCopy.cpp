#include <iostream>
#include <string.h>

using namespace std;

class A {
	char *p;
	public:
		A(const char *s)
	       	{
			cout << "Paramterised Contructor.\n";
			p = new char[strlen(s)+1];
			strcpy(p, s);
		}
		void modify()
		{
			p[0] = '#';
		}
		void print()
		{
			cout << "String: " << p << endl;
		}
		~A()
		{
			cout << "Destructor called.\n";
		}
};

int main()
{
	A obj1("vector");
	obj1.print();
	A obj2(obj1);
	obj2.print();
	obj1.modify();

	cout << "After modification...\n";
	obj1.print();
	obj2.print();

	return 0;
}
