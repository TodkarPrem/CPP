#include <iostream>

using namespace std;

class singleton {
	private:
		static bool instanceFlag;
		static singleton *ptr;
		singleton() {}		// Private constructor
	public:
		static singleton * getinstance();
		void method() {
			cout << "Singleton method function\n";
		}
		~singleton() {
			instanceFlag = false;
		}
};

bool singleton::instanceFlag = false;
singleton * singleton::ptr = NULL;
singleton * singleton::getinstance() {
	if (!instanceFlag) {
		ptr = new singleton();
		instanceFlag = true;
		return ptr;
	}
	else
		return ptr;
}

int main()
{
	singleton *obj1, *obj2;
	obj1 = singleton::getinstance();
	obj1->method();
	obj2 = singleton::getinstance();
	obj2->method();

	return 0;
}
