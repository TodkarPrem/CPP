#include <iostream>

using namespace std;

class base {
	int x, y;
	public:
		void print()
		{
			cout << "x: " << x << ", y: " << y << endl;
		}

		friend istream & operator >> (istream &, base &);
		friend ostream & operator << (ostream &, base &);
};


istream & operator >> (istream &in, base &obj)
{
	in >> obj.x;
	in >> obj.y;
	cout << "Extraction >> operator overloaded.\n";

	return in;
}


ostream & operator << (ostream &out, base &obj)
{
	out << "Insertion << operator overloaded.\n";
	out << "x: " << obj.x << ", y: " << obj.y << endl;
	return out;
}


int main()
{
	base obj;
	cout << "Enter x & y: ";
	cin >> obj;
	cout << obj;

	return 0;
}
