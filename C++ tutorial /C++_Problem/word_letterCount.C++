#include<iostream>
#include<fstream>
#include<string>

using namespace std;

int main()
{
    // Read the File 
    ifstream file_read("demo.txt");

    // logic if file were not present in  directory / folder
    if(!file_read)
    {
        cout<<"File is not found / exist / Present"<<endl;
    }

    // present 
    string word;

    // wordcount and letter count
    int wordcount = 0, lettercount = 0;
    
    while(file_read >> word)
    {
        wordcount++;
        lettercount = lettercount + word.length();
    }

    cout<<"Successfully Readed --->"<<endl;

    cout<<"Total Number of Word :"<<wordcount<<endl;
    cout<<"Total Number of Letter :"<<lettercount<<endl;

}