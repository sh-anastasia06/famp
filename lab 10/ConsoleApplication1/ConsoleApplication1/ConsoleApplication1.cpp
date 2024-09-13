#include <iostream>
#include <math.h>
using namespace std;
int getMaxNumber(int a, int b, int c); // прототип функции
int main()
{
    int a, b, c;
    cout << "Input 3 numbers\n";
    cout << "> ";
    cin >> a;
    cout << "> ";
    cin >> b;
    cout << "> ";
    cin >> c;
    cout << "\nMax number is " << getMaxNumber(a, b, c) << endl;
    return 0;
}
int getMaxNumber(int a, int b, int c) {
    int maxNumber = max(a, b);
    maxNumber = max(maxNumber, c);
    return maxNumber;
}
