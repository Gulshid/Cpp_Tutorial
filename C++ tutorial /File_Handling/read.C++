#include<iostream>
#include<fstream>
using namespace std;

int main()
{
    // Read Operation Use 
    ifstream file("Write.txt");

    if(!file)
    {
        cout<<"File not found"<<endl;
    }

    string line;
    while(getline(file, line))
    {
        cout<<line<<endl;
    }

    file.close();

}