#include <iostream>
#include <math.h>

// Вариант 30
using namespace std;
int main() {
	double x, y, z, result;
	cout << "Input x: ";
	cin >> x;
	cout << "Input y: ";
	cin >> y;
	cout << "Input z: ";
	cin >> z;
	result = log(pow(y, -sqrt(abs(x)))) * (x - (y / 2)) * (1 + (pow(z, 2) / (3 - (pow(z, 2) / 5))));
	cout << "Result is: " << result;
	return 0;
}