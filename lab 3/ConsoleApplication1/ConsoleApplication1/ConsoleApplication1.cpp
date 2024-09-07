#include <iostream>
#include <math.h>
using namespace std;
// Вариант 15
int main()
{
    double x, y, result;

    cout <<  "Input x: ";
    cin >> x;
    cout << "Input y: ";
    cin >> y;

    if (y == 0) {
        cout << "\nWrong input:\n\ty cannot be 0\n";
        return 0;
    }

    if (x / y < 0) {
        result = pow((pow(x, 2) + y), 3);
    }
    else if (x / y > 0) {
        result = log(abs(x / y)) + (x / y);
    }
    else {
        result = pow((abs(sin(y))), 1 / 3);
    }

    cout << "\nResult is = " << result << endl;
    return 0;
}

