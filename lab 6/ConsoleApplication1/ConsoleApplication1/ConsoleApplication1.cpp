#include <iostream>
#include <locale>
#include <windows.h>
#include <ctime>
using namespace std;
int main()
{
	setlocale(LC_ALL, "RUS");
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	srand(time(0));
	int exNumber, arr2[5], arr3[5], arr4[5], randomArr[20], fromNumber, toNumber, numberCounter = 0, step = 2;
	int arr1[5] = { 1, 10, 22, 14, 16 };
	char lettersArray[11] = { 's', 'h', 'k', 'u', 'n', 'd', 'i', 'c', 'h', 'a', 'm' }, shifredArray[11], unshifredArray[11];
	do {
		wcout << L"\nВведите номер задания, которое нужно выполнить:\n1. Задание 1\n2. Задание 2\n3. Задание 3\nДля выхода введите любое другое число\n>  ";
		wcin >> exNumber;
		switch (exNumber)
		{
		case 1:
			wcout << L"\nЗадание 1\n";
			for (int i = 0; i < 5; i++) {
				wcout << L"Введите " << i + 1 << L" элемент массива: ";
				cin >> arr2[i];
			}
			for (int i = 0; i < 5; i++) {
				arr3[i] = 0 + rand() % 11;
			}
			for (int i = 0; i < 5; i++) {
				arr4[i] = arr1[i] + arr2[i] + arr3[i];
			}
			wcout << L"\n1 массив\t[";
			for (int i = 0; i < 5; i++) {
				cout << arr1[i] << "  ";
			}
			wcout << "]";
			wcout << L"\n2 массив\t[";
			for (int i = 0; i < 5; i++) {
				cout << arr2[i] << "  ";
			}
			wcout << "]";
			wcout << L"\n3 массив\t[";
			for (int i = 0; i < 5; i++) {
				cout << arr3[i] << "  ";
			}
			wcout << "]";
			wcout << L"\n4 массив\t[";
			for (int i = 0; i < 5; i++) {
				cout << arr4[i] << "  ";
			}
			wcout << "]\n";
			break;
		case 2:
			wcout << L"\nЗадание 2\n";
			for (int i = 0; i < 20; i++) {
				// от 0 до 100
				randomArr[i] = 0 + rand() % 101;
			}
			wcout << L"Введите число a: ";
			cin >> fromNumber;
			wcout << L"Введите число b: ";
			cin >> toNumber;
			for (int i = 0; i < 20; i++) {
				if ((randomArr[i] >= fromNumber && randomArr[i] <= toNumber) || (randomArr[i] <= fromNumber && randomArr[i] >= toNumber)){
					cout << randomArr[i] << " ";
					numberCounter += 1;
				}
			}
			if (numberCounter == 0) {
				wcout << L"Чисел в данном промежутке не нашлось :(";
			}
			cout << "\n";
			break;
		case 3:
			wcout << L"\nЗадание 3\n";
			wcout << L"Зашифрованный массив:\n\t";
			for (int i = 0; i < size(lettersArray); i++) {
				if (i < size(lettersArray) - step) {
					shifredArray[i] = lettersArray[i + step];
				}
				else {
					if (i == size(lettersArray) - 1) {
						shifredArray[i] = lettersArray[size(lettersArray) - i];
					}
					else {
						shifredArray[i] = lettersArray[size(lettersArray) - i - step];
					}
				}
				cout << shifredArray[i];
			}
			wcout << L"\nРасшифрованный массив:\n\t";
			for (int i = 0; i < size(shifredArray); i++) {
				if (i >= step) {
					unshifredArray[i] = shifredArray[i - step];
				}
				else {
					if (i == step) {
						unshifredArray[i] = shifredArray[size(shifredArray) - i];
					}
					else {
						unshifredArray[i] = shifredArray[size(shifredArray) - step + i];
					}
				}
				cout << unshifredArray[i];
			}
			cout << "\n";
			break;
		default:
			wcout << L"\nВыход..." << endl;
			break;
		}
	} while (exNumber == 1 || exNumber == 2 || exNumber == 3);
	return 0;
}
