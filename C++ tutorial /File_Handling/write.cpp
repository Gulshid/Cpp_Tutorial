#include <iostream>
#include <fstream>
using namespace std;

int main() {
    ofstream file("info.txt"); // Create and open file

    if (!file) {
        cout << "Error creating file!" << endl;
        return 1;
    }

    string name;
    int age;

    cout << "Enter your name: ";
    getline(cin, name);
    cout << "Enter your age: ";
    cin >> age;

    file << "Name: " << name << endl;
    file << "Age: " << age << endl;

    file.close();
    cout << "Data written successfully to info.txt" << endl;

    return 0;
}
