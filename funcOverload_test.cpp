#include <iostream>
using namespace std;

int sum(int n1, int n2)
{
	int sum = n1 + n2;
	return sum;
}

float sum(float n1, float n2)
{
	float sum = n1 + n2;
	return sum;
}

float sum(int n1, float n2)
{
	float sum = n1 + n2;
	return sum;
}

int main()
{
	int n1, n2, sum1;
	float num1, num2, sum2, sum3;

	cout << "Enter two integer numbers: ";
	cin >> n1 >> n2;
	cout << "Enter two float numbers: ";
	cin >> num1 >> num2;

	sum1 = sum(n1, n2);
	sum2 = sum(num1, num2);
	sum3 = sum(n1, num1);

	cout << "Sum of " << n1 << " & " << n2 << " is: " << sum1 << endl;
	cout << "Sum of " << num1 << " & " << num2 << " is: " << sum2 << endl;
	cout << "Sum of " << n1 << " & " << num1 << " is: " << sum3 << endl;

	return 0;
}
