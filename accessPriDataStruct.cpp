#include <iostream>
using namespace std;

struct student {
	private:
		char nm[20];
		int rn;
	public:
		void setData();
		void printData();
};

void student::setData()
{
	cout << "Enter name & roll number: ";
	cin >> nm >> rn;
}

void student::printData()
{
	cout << "Name: " << nm << endl;
	cout << "Roll np: " << rn << endl;
}


int main()
{
	struct student s;
	s.setData();
	s.printData();

	return 0;
}
