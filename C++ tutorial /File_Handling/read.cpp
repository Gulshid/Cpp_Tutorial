#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main() {
    ifstream file("info.txt"); // Open file for reading

    if (!file) {
        cout << "File not found!" << endl;
        return 1;
    }

    string line;
    cout << "File Content:\n";

    while (getline(file, line)) {
        cout << line << endl;
    }

    file.close();
    return 0;
}
