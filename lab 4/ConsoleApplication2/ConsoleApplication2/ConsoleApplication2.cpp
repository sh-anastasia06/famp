#include <iostream>
using namespace std;
int main()
{
    int a, b;
    cout << "Input a: ";
    cin >> a;
    cout << "Input b: ";
    cin >> b;
    if (a > b) {
        int tmp = a;
        a = b;
        b = tmp;
    }
    for (int i = a; i <= b; i += 2) {
        cout << i << "  ";
    }
    return 0;
}
