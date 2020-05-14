#include <iostream>

using namespace std;

void swap_num(int &var_x, int &var_y)
{
	// First Swap
	var_x = var_x + var_y;
	var_y = var_x - var_y;
	var_x = var_x - var_y;

	// Second Swap
	var_x = var_x + var_y - (var_y = var_x);

	// Third Swap
	var_x ^= var_y ^= var_x ^= var_y;
}

int main()
{
	int n1, n2;

	cout << "Enter num1: ";
	cin >> n1;
	cout << "Enter num2: ";
	cin >> n2;

	swap_num(n1, n2);
	cout << "Numbers after swapping, num1: " << n1 << ", num2: " << n2 << endl;

	return 0;
}
