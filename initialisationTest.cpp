#include <iostream>

using namespace std;

class Test {
	public:
		Test() {
			cout << "Test Constructor\n";
		}
} obj;

int main()
{
	cout << "In Main\n";
	return 0;
}
