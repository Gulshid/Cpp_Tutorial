#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main() {
    ifstream file("info.txt");
    if (!file) {
        cout << "File not found!" << endl;
        return 1;
    }

    string word;
    int wordCount = 0, charCount = 0;

    while (file >> word) {
        wordCount++;
        charCount += word.length();
    }

    file.close();

    cout << "Total Words: " << wordCount << endl;
    cout << "Total Characters: " << charCount << endl;

    return 0;
}
