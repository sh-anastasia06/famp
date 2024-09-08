#include <iostream>
using namespace std;
int main()
{
    int userYear, userMonth, userDay, daysInMonth;
    cout << "Your birth date info";
    do {
        cout << "\n\tInput year: ";
        cin >> userYear;
    } while (userYear <= 1924 || userYear > 2024);
    do {
        cout << "\tInput month: ";
        cin >> userMonth;
    } while (userMonth < 1 || userMonth > 12);
    switch (userMonth)
    {case 1: case 3: case 5: case 7: case 8: case 10: case 12:
        daysInMonth = 31;
        break;
    case 2:
        if (userYear % 4 == 0) {
            daysInMonth = 29;
        }
        else {
            daysInMonth = 28;
        }
        break;
    default:
        daysInMonth = 30;
        break;
    }
    do {
        cout << "\tInput day: ";
        cin >> userDay;
    } while (userDay < 1 || userDay > daysInMonth);
    cout << "\nYour date of birth:\t" << userDay << "." << userMonth << "." << userYear << endl;
    return 0;
}

