#include <iostream>
#include <Windows.h>
#include <locale>
using namespace std;
int main()
{
    setlocale(LC_ALL, "RUS");
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    srand(time(0));
    int marksArray[5][4], winnerNumber, winnerMark = 0;
    //заполнение массива
    for (int i = 0; i < 5; i++) {
        wcout << L"Оценки участника №" << i + 1 << "\n\t";
        for (int j = 0; j < 4; j++) {
            marksArray[i][j] = rand() % 101;
            cout << marksArray[i][j] << " ";
        }
        cout << "\n";
    }
    //поиск победителя
    for (int i = 0; i < 5; i++) {
        double middleMark = 0;
        for (int j = 0; j < 5; j++) {
            middleMark += marksArray[i][j];
        }
        middleMark = middleMark / 5;
        if (middleMark > winnerMark) {
            winnerMark = middleMark;
            winnerNumber = i + 1;
        }
    }
    wcout << L"\nПобеждает участник под номером " << winnerNumber << L", средний балл которого "<< winnerMark << endl;
    return 0;
}