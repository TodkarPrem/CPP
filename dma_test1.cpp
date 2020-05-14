#include <iostream>
using namespace std;

int main()
{
	int *ptr;

	ptr = new int[5]{1,2,3,4,5};

	cout << "Array initialised with contructor notation: " << endl;

	for (int i = 0; i < 5; i++)
		cout << ptr[i] << endl;
	return 0;
}
