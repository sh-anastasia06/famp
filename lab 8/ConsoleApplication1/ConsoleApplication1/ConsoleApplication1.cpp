#include <iostream>
using namespace std;
int main()
{
	int a;
	cout << "Input a > ";
	cin >> a;
	int* ptr_a = &a;
	*ptr_a = 12;
	cout << "Variable adress " << ptr_a << endl;
	cout << "Variable value changed through the pointer " << a << endl;
	return 0;
}
