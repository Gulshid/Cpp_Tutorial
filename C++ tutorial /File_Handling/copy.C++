        /*
        Copy Operation / Method in File handling
        
        1 .Source  File --->           COPY           ----> 2. Destination File 
        
        */

#include<iostream>
#include<fstream> // File Handling --> file stream
using namespace std;

int main()
{
    // Read the File 1 
    ifstream SourceFile("Source.txt");


    // Create a File 2 ---> Write File 1
    ofstream DesFile("Destination.txt");

    // logic if both of these were not present 
    if(!SourceFile || !DesFile)
    {
        cout<<"File Not Found --->"<<endl;
    }


    string line;

    while(getline(SourceFile, line))
    {
        DesFile << line <<endl;
    }

    cout<<"Successfully Copied File 1 in File 2 --->"<<endl;

    SourceFile.close();
    DesFile.close();
}
