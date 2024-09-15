#include <iostream>
#include <string>
#include <fstream>
using namespace std;
struct STUDENT {
    string name;
    int group;
    string phone;
    int marks[5];
};
void readStudentFile(STUDENT student, string fileName);
void consoleStudentFile(string fileName);
void changeStudentFile(string fileName, string newName);
void writeStudentFile(STUDENT student, string fileName);
int main()
{
    STUDENT student1 = { "Alex", 12, "80295456698", {10, 9, 10, 8, 5} };
    writeStudentFile(student1, "student");
    string fileName;
    cout << "Input file name > ";
    cin >> fileName;
    readStudentFile(student1, fileName);
    consoleStudentFile(fileName);
    changeStudentFile(fileName, "Mary");
    consoleStudentFile(fileName);
    writeStudentFile(student1, fileName);
    return 0;
}
void readStudentFile(STUDENT student, string fileName) {
    ifstream file(fileName + ".txt");
    if (!file.is_open()) {
        cout << "Something went wrong, file cannot be opened:(";
        return;
    }
    getline(file, student.name);
    student.group;
    file >> student.group;
    file.ignore();
    getline(file, student.phone);
    for (int i = 0; i < 5; i++) {
        file >> student.marks[i];
    }
    file.close();
}
void consoleStudentFile(string fileName) {
    ifstream file(fileName + ".txt");
    if (!file.is_open()) {
        cout << "Something went wrong, file cannot be opened:(";
        return;
    }
    STUDENT student;
    readStudentFile(student, fileName);
    getline(file, student.name);
    file >> student.group;
    file.ignore();
    getline(file, student.phone);
    for (int i = 0; i < 5; i++) {
        file >> student.marks[i];
    }
    
    cout << "Name: " << student.name << endl;
    cout << "Group: " << student.group << endl;
    cout << "Phone: " << student.phone << endl;
    cout << "Marks: ";
    for (int i = 0; i < 5; i++) {
        cout << student.marks[i] << " ";
    }
    file.close();
    cout << endl;
}
void changeStudentFile(string fileName, string newName) {
    STUDENT student;
    readStudentFile(student, fileName);
    ifstream file(fileName + ".txt");
    if (!file.is_open()) {
        cout << "Something went wrong, file cannot be opened:(";
        return;
    }
    readStudentFile(student, fileName);
    getline(file, student.name);
    file >> student.group;
    file.ignore();
    getline(file, student.phone);
    for (int i = 0; i < 5; i++) {
        file >> student.marks[i];
    }
    student.name = newName;
    writeStudentFile(student, fileName);
}
void writeStudentFile(STUDENT student, string fileName) {
    ofstream file(fileName + ".txt");
    if (!file) {
        cout << "Something went wrong, file cannot be opened:(";
        return;
    }
    file << student.name << endl;
    file << student.group << endl;
    file << student.phone << endl;
    for (int i = 0; i < 5; i++) {
        file << student.marks[i] << " ";
    }
    file.close();
}