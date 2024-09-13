#include <iostream>
using namespace std;
int countMatches(int k, int array[5][5]) {
    int count = 0;
    for (int row = 0; row < 5; ++row) {
        for (int col = 0; col < 5; ++col) {
            if (array[row][col] == k) {
                count += 1;
            }
        }
    }
    return count;
}
int main()
{
    srand(time(0));
    int array[5][5], k;
    for (int row = 0; row < 5; row++) {
        for (int col = 0; col < 5; col++) {
            int num = rand() % 6;
            int sign = rand() % 2;
            if (sign == 0) {
                num = -num;
            }
            array[row][col] = num;
        }
    }
    cout << "Input number -5<=k<=5\n> ";
    cin >> k;
    cout << "Number " << k << " occurs " << countMatches(k, array) << " times" << endl;
    return 0;
}
