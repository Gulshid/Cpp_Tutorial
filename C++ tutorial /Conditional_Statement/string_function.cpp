#include <iostream>
#include <string>
using namespace std;

int main() {
    string str = "Hello";

    cout << "Length: " << str.length() << endl;
    cout << "Character at index 1: " << str.at(1) << endl;
    cout << "Front: " << str.front() << ", Back: " << str.back() << endl;

    str.append(" World");
    cout << "After append: " << str << endl;

    str.insert(5, ",");
    cout << "After insert: " << str << endl;

    cout << "Substring (0,5): " << str.substr(0, 5) << endl;

    str.replace(0, 5, "Hi");
    cout << "After replace: " << str << endl;

    str.pop_back();
    cout << "After pop_back: " << str << endl;

    cout << "Position of 'World': " << str.find("World") << endl;

    return 0;
}
