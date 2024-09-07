#include <iostream>
using namespace std;
int main()
{
    int k;
    cout << "Input k: ";
    cin >> k;
    if (k < 1 || k > 365) {
        cout << "\nWrong input:\n\tk must be higher than 1 and lower than 365" << endl;
        return 0;
    }
    k = k % 7;
    switch (k)
    {
    case 1:
        cout << "It's monday" << endl;
        break;
    case 2:
        cout << "It's tuesday" << endl;
        break;
    case 3:
        cout << "It's wednesday" << endl;
        break;
    case 4:
        cout << "It's thursday" << endl;
        break;
    case 5:
        cout << "It's friday" << endl;
        break;
    case 6:
        cout << "It's saturday" << endl;
        break;
    default:
        cout << "It's sunday" << endl;
        break;
    }
    return 0;
}

