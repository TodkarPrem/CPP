#include <iostream>
#define R 10
#define C 20

using namespace std;

int main()
{
	int (*p)[R][C];
	cout << "sizeof(*p): " << sizeof(*p) << ", sizeof(p): " << sizeof(p) << endl;
	return 0;
}
