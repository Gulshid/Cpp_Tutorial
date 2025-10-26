#include<iostream>
#include<fstream>
using namespace std;


int main()
{
    // Write Operation use 
    ofstream file("Write.txt");

    // Student Basic Information
    string name;
    int age, roll_no, marks;

    cout<<"Enter Your Name :";
    getline(cin, name);

    cout<<"Enter Your Age :";
    cin>>age;

    cout<<"Enter Your Roll No :";
    cin>>roll_no;

    cout<<"Enter Your MArks :";
    cin>>marks;

    file <<" *** Student Information ***"<<endl;
    file <<"Name :"<<name<<endl;
    file <<"Age :"<<age<<endl;
    file <<"Roll No :"<<roll_no<<endl;
    file <<"Marks :"<<marks<<endl;

}