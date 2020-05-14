#include <iostream>
using namespace std;

int main()
{
	int **ptr, row, col;

	cout << "Enter rows & columns for 2D Array: ";
	cin >> row >> col;

	ptr = new int*[row];
	for (int i = 0; i < row; i++)
		ptr[i] = new int[col];

	cout << "Enter values in 2D Array:" << endl;
	for (int i = 0; i < row; i++)
		for (int j = 0; j < col; j++)
			cin >> ptr[i][j];

	cout << "Entered 2D Array is:" << endl;
	for (int i = 0; i < row; i++) {
		for (int j = 0; j < col; j++)
			cout << ptr[i][j] << " ";
		cout << endl;
	}

	for (int i = 0; i < row; i++)
		delete []ptr[i];
	delete []ptr;

	return 0;
}
