#include <iostream>
#include <Windows.h>
using namespace std;
int main()
{
    setlocale(LC_ALL, "RUS");
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    srand(time(0));
    int n;
    wcout << L"Введите длину массива > ";
    cin >> n;
    int* array = new int[n];
    int one_pos = rand() % n;
    // заполнение массива
    for (int p = 0; p < n; p++) {
        if (p != one_pos) {
            array[p] = 0;
        }
        else {
            array[p] = 1;
        }
    }
    int user_pos, count = 0;
    // угадывание позиции 1
    do {
        count++;
        wcout << L"Угадайте позицию единицы > ";
        cin >> user_pos;
        if (user_pos < 0 || user_pos >= n) {
            wcout << L"Такой позиции нет в массиве\n";
            continue;
        }
        if (user_pos > one_pos) {
            wcout << L"\n<<< Единица левее <<<\n";
        }
        else if (user_pos < one_pos) {
            wcout << L"\n>>> Единица правее >>>\n";
        }
    } while (user_pos != one_pos);
    wcout << L"Вы угадали с " << count << L" попытки";
    return 0;
}

