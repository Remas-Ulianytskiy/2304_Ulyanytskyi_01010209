#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	double value, result;

	cout << "Enter the formula argument: ";
	cin >> value;

	result = 3*pow(value, 3) - 2*pow(value, 2) + 3*value - 1;

	cout << "Result: " << result;

	return 0;
}