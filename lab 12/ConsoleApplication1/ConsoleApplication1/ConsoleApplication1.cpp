#include <iostream>
#include <iomanip>
#include <string>
using namespace std;
struct STUDENT {
    string fio;
    int group;
    string phoneNumber;
    string favSeason;
    int marks[5];
};
void printBestStudents(STUDENT studentsArr[], int amount);
void findByPhone(string searchStr, STUDENT studentsArr[], int amount);
void findByFavSeason(string searchStr, STUDENT studentsArr[], int amount);
int main()
{
    STUDENT studentsArr[5] = {};
    studentsArr[0] = { "Alex Lively", 14, "80298748764", "spring", {4, 10, 5, 8, 9} };
    studentsArr[1] = { "Emily Colins", 12, "80297775541", "fall", {9, 10, 9, 7, 6} };
    studentsArr[2] = { "Ryan Smith", 12, "80297718012", "spring", {7, 10, 5, 8, 10} };
    studentsArr[3] = { "Rosie Wellington", 19, "80444561244", "winter", {5, 6, 5, 8, 7} };
    cout << "Name > ";
    getline(cin, studentsArr[4].fio);
    cout << "Group > ";
    cin >> studentsArr[4].group;
    cout << "Phone > ";
    cin.ignore();
    getline(cin, studentsArr[4].phoneNumber);
    cout << "Favorite season > ";
    cin.ignore();
    getline(cin, studentsArr[4].favSeason);
    cout << "Marks\n";
    for (int i = 0; i < 5; i++) {
        int mark;
        cout << "> ";
        cin >> mark;
        studentsArr[4].marks[i] = mark;
    }
    printBestStudents(studentsArr, 5);
    string searchString;
    cout << "Input phone for searching: ";
    cin >> searchString;
    findByPhone(searchString, studentsArr, 5);
    cout << "Input season for searching: ";
    cin >> searchString;
    findByFavSeason(searchString, studentsArr, 5);
}
void printBestStudents(STUDENT studentsArr[], int amount) {
    cout << "Best students:\n";
    int count = 0;
    for (int i = 0; i < amount; i++) {
        double mediumMark = 0;
        for (int n = 0; n < 5; n++) {
            mediumMark += studentsArr[i].marks[n];
        }
        mediumMark = mediumMark / 5;
        if (mediumMark > 7.0) {
            cout << "FIO: " << studentsArr[i].fio << ". Group: " << studentsArr[i].group << endl;
            count++;
        }
    }
    if (count == 0) {
        cout << "No students with an average score above 7 were found" << endl;
    }
}
void findByPhone(string searchStr, STUDENT studentsArr[], int amount) {
    for (int i = 0; i < amount; i++) {
        if (studentsArr[i].phoneNumber.find(searchStr) != string::npos) {
            cout << studentsArr[i].fio << endl;
        }
    }
}
void findByFavSeason(string searchStr, STUDENT studentsArr[], int amount) {
    for (int i = 0; i < amount; i++) {
        if (studentsArr[i].favSeason.find(searchStr) != string::npos) {
            cout << studentsArr[i].fio << endl;
        }
    }
}