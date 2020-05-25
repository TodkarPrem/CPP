#include <iostream>

using namespace std;

class A
{
	int arr[5];
	public:
		void set_data()
		{
			cout << "Enter data: ";
			for (int i = 0; i < 5; i++)
				cin >> arr[i];
		}

		void operator ()(int a, int b, int c, int d, int e)
		{
			arr[0]=a, arr[1]=b, arr[2]=c, arr[3]=d, arr[4]=e;
		}

		int operator [](int index)
		{
			return arr[index];
		}
};


int main()
{
	A obj1, obj2;
	obj1(2, 4, 6, 8, 10);
	obj2.set_data();
	cout << "Output of operator () overloaded function:\n";
	for (int i=0; i<5; i++)
		cout << obj1[i] << " ";

	cout << "\nOutput of operator [] overloaded function:\n";
	for (int i=0; i<5; i++)
		cout << obj2[i] << " ";
	
	cout << endl;
	return 0;
}
