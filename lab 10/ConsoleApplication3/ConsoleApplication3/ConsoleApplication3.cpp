#include <iostream>
using namespace std;
int getStarsAmount() {
    int amount;
    cout << "Input amount of stars\n> ";
    cin >> amount;
    return amount;
}
void consoleStars(int amount) {
    string str = "";
    for (int i = 0; i < amount; i++) {
        str.append("*");
    }
    cout << str << endl;
}
int main()
{
    consoleStars(getStarsAmount());
    return 0;
}

