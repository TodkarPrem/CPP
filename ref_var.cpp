#include <iostream>

using namespace std;

int main()
{
	int x = 100;
	int &var_x = x;

	cout << "x: " << x << endl;
	cout << "var_x: " << var_x << endl;
	cout << "&x: " << &x << endl;
	cout << "&var_x: " << &var_x << endl;

	return 0;
}

