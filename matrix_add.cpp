#include <iostream>
using namespace std;

int main()
{
	int **m1, **m2, **resM, row, col;

	cout << "Enter number of rows & columns for matrices: ";
	cin >> row >> col;

	// Memory allocation for matrix1
	m1 = new int*[row];
	for (int i = 0; i < row; i++)
		m1[i] = new int[col];

	// Memory allocation for matrix2
	m2 = new int*[row];
	for (int i = 0; i < row; i++)
		m2[i] = new int[col];

	// Memory allocation for resulting matrix
	resM = new int*[row];
	for (int i = 0; i < row; i++)
		resM[i] = new int[col];

	// Getting Values from user for matrix1
	cout << "Enter values for matrix1:" << endl;
	for (int i = 0; i < row; i++)
		for (int j = 0; j < col; j++)
			cin >> m1[i][j];
	
	// Getting Values from user for matrix2
	cout << "Enter values for matrix2:" << endl;
	for (int i = 0; i < row; i++)
		for (int j = 0; j < col; j++)
			cin >> m2[i][j];
	
	// Printing both matrix values
	cout << endl << "Entered values for matrix1:" << endl;
	for (int i = 0; i < row; i++) {
		for (int j = 0; j < col; j++)
			cout << m1[i][j] << " ";
		cout << endl;
	}

	cout << endl << "Entered values for matrix2:" << endl;
	for (int i = 0; i < row; i++) {
		for (int j = 0; j < col; j++)
			cout << m2[i][j] << " ";
		cout << endl;
	}

	// Matrix Addition
	for (int i = 0; i < row; i++)
		for (int j = 0; j < col; j++)
			resM[i][j] = m1[i][j] + m2[i][j];

	cout << endl << "Matrix Addition result is:" << endl;
	for (int i = 0; i < row; i++) {
		for (int j = 0; j < col; j++)
			cout << resM[i][j] << " ";
		cout << endl;
	}

	// Freeing allocated memory
	for (int i = 0; i < row; i++) {
		delete []m1[i];
		delete []m2[i];
		delete []resM[i];
	}

	delete []m1;
	delete []m2;
	delete []resM;

	return 0;
}
