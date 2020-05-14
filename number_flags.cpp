#include <iostream>

using namespace std;

int main()
{
	int num;
	float num1;
	cout << "Enter decimal number: ";
	cin >> num;
	cout << "Enter float number: ";
	cin >> num1;

	cout << "Decimal value: " << num << endl;
	cout << "Octal Value: " << oct << num << endl;
	cout << "Hexadecimal Value: " << hex << num << endl;
	
	cout << "showing number with base: " << dec << showbase << endl;
	cout << "Decimal value: " << num << endl;
	cout << "Octal Value: " << oct << num << endl;
	cout << "Hexadecimal Value: " << hex << num << endl;

	cout << "Float number in decimal format: " << num1 << endl;
	cout << "Float number in fixed format: " << fixed << num1 << endl;
	cout << "Float number in scientific format: " << scientific << num1 << endl;

	return 0;
}
