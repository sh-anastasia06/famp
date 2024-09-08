#include <iostream>
using namespace std;
int main()
{
    srand(time(0));
    int fromNum = 30, toNum = fromNum + 20, count = 1, userNumber;
    int randomNumber = rand() % (toNum - fromNum + 1) + fromNum;
    cout << "Try to guess number from " << fromNum << " to " << toNum << " : ";
    cin >> userNumber;
    while (userNumber != randomNumber) {
        count++;
        if (userNumber < randomNumber) {
            cout << "\nMy number is higher";
        }
        else {
            cout << "\nMy number is lower";
        }
        cout << "\nTry one more time: ";
        cin >> userNumber;
        if (userNumber == randomNumber) {
            break;
        }
    }

    cout << "\nYou won!!!";
    cout << "\nNumber of attempts: " << count << endl;
    return 0;
}
