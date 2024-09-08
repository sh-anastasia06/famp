#include <iostream>
using namespace std;
// Вариант 4
int main()
{
	int n = 6;
	cout << "The multiplication table by " << n << endl;
	for (int i = 1; i <= 10; i++) {
		cout << i << " * " << n << " = " << i*n << endl;
	}
	return 0;
}

