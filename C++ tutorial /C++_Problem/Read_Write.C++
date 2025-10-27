#include<iostream>
#include<fstream> // File Handling ---> file stream
using namespace std;

int main()
{
    // Read and Write / Create a file and and store the data and then access these data

    // Create a File 
    ofstream file("file.txt");

    // logic file exist 
    if(!file)
    {
        cout<<"File is Not found in directory or folder"<<endl;
    }

    // file present 
    // Data 

    // Multiplication  of two value
    int x, y;
    cout<<"Enter the value for x :";
    cin>>x;

    cout<<"Enter the value for y :";
    cin>>y;


    int mul = x * y;

    file <<" x :"<<x<<endl;
    file <<" y :"<<y<<endl;


    file <<" Multiplication of x and y :"<<mul<<endl;

    cout<<"Successfully Writed "<<endl;


    ifstream file_2("file.txt");

    // logic file exist 
    if(!file_2)
    {
        cout<<"File not found / exist "<<endl;
    }

    // Present file 

    string line;
    while(getline(file_2, line))
    {
        cout<<line<<endl;
    }

    cout<<"Successfully Read "<<endl;


    file.close();
    file_2.close();

    
}