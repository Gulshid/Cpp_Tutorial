#include<iostream>
#include<fstream>
#include<string>
using namespace std;

int main()
{
    // Create a File with name Student_info
    ofstream Student_info("student.txt", ios:: app);

    // logic for if file were prsent / exist in directory / folder
    if(!Student_info)
    {
        cout<<"File Not Found / exist in directory / folder"<<endl;
    }

    // Present 

    // how may student information you want 
    int n;
    cout<<"Enter the value that how may student information you want :";
    cin>>n;

    cin.ignore();  // space ignore / remove 

    for(int i = 0; i < n; i++)
    {
        string name;
        int roll_no, marks;

        cout<<"ENter your Name :";
        getline(cin, name);

        cout<<"ENter Your Roll No :";
        cin>>roll_no;

        cout<<"ENter Your Marks :";
        cin>>marks;


        cin.ignore();

        Student_info <<"Name :"<<name<<  " Roll No :"<<roll_no<<" Marks : "<<marks<<endl;

        cout<<"Successfully Writted in File Student"<<endl;

    
    }

    Student_info.close();


    // Read file / display 
    ifstream read_info("student.txt");


    // logic if the file were not present 
    if(!read_info)
    {
        cout<<"File Not Found in Directory--->"<<endl;
    }

    // Present 
    string line;
    while(getline(read_info, line ))
    {
        cout<<line<<endl;
    }

    cout<<"Successfuly Readed the STudent File --->"<<endl;

    read_info.close();





}