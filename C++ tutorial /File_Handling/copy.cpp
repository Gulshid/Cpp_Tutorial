#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main() {
    ifstream source("info.txt");
    ofstream destination("copy.txt");

    if (!source || !destination) {
        cout << "Error opening files!" << endl;
        return 1;
    }

    string line;
    while (getline(source, line)) {
        destination << line << endl;
    }

    source.close();
    destination.close();

    cout << "File copied successfully to copy.txt" << endl;

    return 0;
}
