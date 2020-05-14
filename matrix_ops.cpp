#include <iostream>
using namespace std;

int ** matrix_add(int **m1, int **m2, int row, int col)
{
	int **resM = new int*[row];
	for (int i = 0; i < row; i++)
		resM[i] = new int[col];

	// Matrix Addition
	for (int i = 0; i < row; i++)
		for (int j = 0; j < col; j++)
			resM[i][j] = m1[i][j] + m2[i][j];

	return resM;
}


int ** matrix_sub(int **m1, int **m2, int row, int col)
{
	int **resM = new int*[row];
	for (int i = 0; i < row; i++)
		resM[i] = new int[col];

	// Matrix Addition
	for (int i = 0; i < row; i++)
		for (int j = 0; j < col; j++)
			resM[i][j] = m1[i][j] - m2[i][j];

	return resM;
}


int ** matrix_mul(int **m1, int **m2, int row, int col)
{
	if (row != col) {
		cout << endl << "#ERROR : col1 & row2 must be same for matrix multiplication." << endl;
		return 0;
	}

	int **resM, sum;
	resM = new int*[row];
	for (int i = 0; i < row; i++)
		resM[i] = new int[col];

	// Matrix Multiplication
	for (int i = 0; i < row; i++)				// Row of 1st matrix
		for (int j = 0; j < col; j++) {			// Col of 1st matrix
			sum = 0;
			for (int k = 0; k < row; k++)		// Col of 2nd matrix
				sum = sum + m1[i][k] * m2[k][j];
			resM[i][j] = sum;
		}

	return resM;
}


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

	// Matrix Addition Result
	resM = matrix_add(m1, m2, row, col);
	cout << endl << "Matrix Addition result is:" << endl;
	for (int i = 0; i < row; i++) {
		for (int j = 0; j < col; j++)
			cout << resM[i][j] << " ";
		cout << endl;
	}

	// Matrix Substraction Result
	resM = matrix_sub(m1, m2, row, col);
	cout << endl << "Matrix Substraction result is:" << endl;
	for (int i = 0; i < row; i++) {
		for (int j = 0; j < col; j++)
			cout << resM[i][j] << " ";
		cout << endl;
	}

	// Matrix Multiplication Result
	resM = matrix_mul(m1, m2, row, col);
	if (resM != 0) {
		cout << endl << "Matrix Multiplication result is:" << endl;
		for (int i = 0; i < row; i++) {
			for (int j = 0; j < col; j++)
				cout << resM[i][j] << " ";
			cout << endl;
		}
	}

	// Freeing allocated memory
	for (int i = 0; i < row; i++) {
		delete []m1[i];
		delete []m2[i];
		if (resM != 0)
			delete []resM[i];
	}

	delete []m1;
	delete []m2;
	if (resM != 0)
		delete []resM;

	return 0;
}
