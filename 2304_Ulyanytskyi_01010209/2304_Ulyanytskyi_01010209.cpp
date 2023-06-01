#include <iostream>
#include <cmath>
#include <Windows.h>

using namespace std;

int main()
{
	SetConsoleOutputCP(1251);
	int value = NULL;
	int result = NULL;

	cout << "¬вед≥ть агрумент формули: ";
	cin >> value;

	result = 3*pow(value, 3) - 2*pow(value, 2) + 3*value - 1;

	cout << result;
}