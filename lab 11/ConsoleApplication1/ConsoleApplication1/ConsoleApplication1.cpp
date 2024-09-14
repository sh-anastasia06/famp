#include <iostream>
using namespace std;
int countSum(int num);
void main()
{
    int number;
    cout << "Input number > ";
    cin >> number;
    cout << "Summ = " << countSum(number) << endl;
}
int countSum(int num) {
    if (num == 0) {
        return num;
    }
    if (num > 0) {
        return num + countSum(num - 1);
    }
    else {
        return num + countSum(num + 1);
    }
    
}