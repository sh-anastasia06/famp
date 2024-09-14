#include <iostream>
using namespace std;
int factorial(int n);
void main()
{
    int number;
    cout << "Input number > ";
    cin >> number;
    cout << factorial(number);
}
int factorial(int n) {
    if (n == 1) {
        cout << n << " = ";
        return n;
    }
    cout << n << " * ";
    return n * factorial(n - 1);
}
