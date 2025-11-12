#include <iostream>
#include <fstream>
using namespace std;

int main() {
    ofstream file("students.txt", ios::app); // Append new student records

    if (!file) {
        cout << "Error creating file!" << endl;
        return 1;
    }

    int n;
    cout << "Enter number of students: ";
    cin >> n;
    cin.ignore();

    for (int i = 0; i < n; i++) {
        string name;
        int roll;
        float marks;

        cout << "\nEnter name: ";
        getline(cin, name);
        cout << "Enter roll no: ";
        cin >> roll;
        cout << "Enter marks: ";
        cin >> marks;
        cin.ignore();

        file << "Name: " << name << ", Roll No: " << roll << ", Marks: " << marks << endl;
    }

    file.close();
    cout << "\nStudent records saved successfully to students.txt" << endl;

    return 0;
}
