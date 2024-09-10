#include <iostream>
#include <Windows.h>
#include <locale>
using namespace std;
int main()
{
    setlocale(LC_ALL, "RUS");
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    int matrix[3][3];
    wcout << L"Введите элементы матрицы";
    for (int i = 0; i < 3; i++) {
        wcout << "\n" << i + 1 << L" строка: ";
        for (int j = 0; j < 3; j++) {
            cin >> matrix[i][j];
        }
    }
    int k, counter = 0, summ = 0;
    wcout << L"Введите число K > ";
    cin >> k;
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            if (i + 1 + j + 1 == k) {
                summ += matrix[i][j];
                counter++;
            }
        }
    }
    if (counter == 0) {
        wcout << L"Подходящих элементов не нашлось";
    }
    else {
        wcout << L"Сумма элементов матрицы с суммой индексов равной K " << summ << endl ;
    }
    return 0;
}
