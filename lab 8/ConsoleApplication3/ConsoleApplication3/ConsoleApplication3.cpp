#include <iostream>
#include <Windows.h>
//Вариант 3
using namespace std;
int main()
{
    setlocale(LC_ALL, "RUS");
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    int n;
    wcout << L"Введите порядок матрицы > ";
    cin >> n;
    int** matrix = new int* [n]; // создание строк
    int positive_el_sum = 0;
    // заполнение матрицы
    for (int row = 0; row < n; row++) {
        matrix[row] = new int [n]; //создание столбцов
        wcout << L"Введите значения элементов " << row + 1 << L" колонки\n";
        for (int column = 0; column < n; column++) {
            int user_value;
            cin >> user_value;
            matrix[row][column] = user_value;
            if (row < column && matrix[row][column] > 0) {
                positive_el_sum += matrix[row][column];
            }
        }
    }
    wcout << L"Сумма положительных элементов расположенных ниже главной диагонали = " << positive_el_sum;
    delete [] matrix;
    return 0;
}

