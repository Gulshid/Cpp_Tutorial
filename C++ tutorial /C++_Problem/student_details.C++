#include<iostream>
using namespace std;


class Student
{
    private :
    string name, depart;
    int marks, roll_no, semester;
    float cgpa;


    public:
    // Input from Student at RUntime
    Student()
    {
        cout<<"Enter Your Name :";
        getline(cin, name);

        cout<<"Enter Your Department:";
        getline(cin, depart);

        cout<<"ENter Your roll No :";
        cin>>roll_no;

        cout<<"ENter Your Semester :";
        cin>>semester;

        cout<<"Enter Your MArks :";
        cin>>marks;

        cout<<"ENter your CGPA :";
        cin>>cgpa;

    }


    // Output 

    void display()
    {
        cout<<"*** STUDENT DETAILS ***"<<endl;

        cout<<"Name is :"<<name<<endl;
        cout<<"Department is :"<<depart<<endl;
        cout<<"Roll No  is :"<<roll_no<<endl;
        cout<<"Semester is :"<<semester<<endl;
        cout<<"MArks is :"<<marks<<endl;
        cout<<"CGPA  is :"<<cgpa<<endl;
        
    }




};

int main()
{
    Student s3;
    s3.display();
    
}