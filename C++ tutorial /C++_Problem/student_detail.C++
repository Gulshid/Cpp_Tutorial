#include<iostream>
using namespace std;
// Problem No 44 : STUDENT DETAILS SYSTEM
// input : Name, Roll No , Semester, MArks, depart, CGPA

// output : Name, Roll No , Semester, Depart, MArks, CGPA

class STUDENT
{
    private:
    string name, depart;
    int roll_no, marks, Semester;
    float  CGPA;

    public:

    // function : Student information  -->  input 
    void input_student()
    {
        cout<<"Enter Your Name :";
        getline(cin, name);

        cout<<"Enter Your Department :";
        getline(cin, depart);

        cout<<"Enter Your Roll No :";
        cin>>roll_no;

        cout<<"Enter Your Semester:";
        cin>>Semester;

        cout<<"ENter Your MArks:";
        cin>>marks;


        cout<<"ENter Your CGPA:";
        cin>>CGPA;

    }


    // functionn: STudent Information ---> display / output
    
    void display_student()
    {
        cout<<"NAme :"<<name<<endl;
        cout<<"Department :"<<depart<<endl;
        cout<<"Roll No :"<<roll_no<<endl;
        cout<<"Semester :"<<Semester<<endl;
        cout<<"Marks :"<<marks<<endl;
        cout<<"CGPA :"<<CGPA<<endl;

        
    }
};






int main()
{
    STUDENT student;
    student.input_student();
    student.display_student();



}