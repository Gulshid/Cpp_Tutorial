#include <iostream>
#include <fstream>
using namespace std;

int main() {
    ofstream file("info.txt", ios::app); // Open file in append mode

    if (!file) {
        cout << "Error opening file!" << endl;
        return 1;
    }

    string data;
    cout << "Enter data to append: ";
    cin.ignore();
    getline(cin, data);

    file << data << endl;

    file.close();
    cout << "Data appended successfully!" << endl;

    return 0;
}
