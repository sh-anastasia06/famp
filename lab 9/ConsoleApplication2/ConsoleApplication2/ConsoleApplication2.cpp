#include <iostream>
#include <Windows.h>
#include <string>
using namespace std;
int main()
{
    setlocale(LC_ALL, "RUS");
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    int user_exercise, whitespace_index;
    string str1, str2, str3;
    do {
        wcout << L"Выберите номер задания\n1. Задание 1\n2. Задание 2\n3. Задание 3\nДля выхода введите любое другое число\n > ";
        cin >> user_exercise;
        switch (user_exercise)
        {
        case 1:
            wcout << L"Задание 1\n";
            wcout << L"Введите стоку > ";
            cin.ignore();
            getline(cin, str1);
            for (int i = 0; i < str1.length();) {
                if (isalpha(str1[i])) {
                    str1.erase(i, 1);
                }
                else {
                    ++i;
                }
            }
            cout << str1 << endl;
            break;
        case 2:
            wcout << L"Задание 2\n";
            wcout << L"Введите стоку > ";
            cin.ignore();
            getline(cin, str2);
            if (str2.substr(0, 3) == "Hel") {
                str2.append(":)");
            }
            else if (str2.substr(0, 3) == "Bye") {
                str2.append(":(");
            }
            cout << str2 << endl;
            break;
        case 3:
            wcout << L"Задание 3\n";
            wcout << L"Введите фамилию и имя через пробел > ";
            cin.ignore();
            getline(cin, str3);
            whitespace_index = str3.find(" ");
            str3.replace(0, whitespace_index, "Shkundich");
            cout << str3 << endl;
            break;
        default:
            wcout << L" Выход...";
            break;
        }
    } while (user_exercise <= 3 && user_exercise >= 1);
    return 0;
}

