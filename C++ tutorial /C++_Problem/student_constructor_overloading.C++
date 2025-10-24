#include<iostream>
using namespace std;

// Constructor Overloading Example : ~ Student
class Student
{
    private:
    // Encapsulation
    string name;
    int age;

    public:
    // 1st Constructor 
    // default constructor
    Student()
    {
        name = "Unknown";
        age = 0;
    }


    // 2nd Constructor 
    // paramterized constructor --> 2
    Student(string n, int a)
    {
        // set
        name = n;
        age = a;
    }


    // 3rd paramterized Constructor  ---> 1
    Student(string n)
    {
        // set
        name = n;
        age = 0;
    }

    // function for display the STudent name and age 
    void display()
    {
        cout<<"Name :"<<name<<" Age :"<<age<<endl;
    }
};

int main()
{
    string name;
    int age;
    cout<<" *** Student Information ***"<<endl;

    cout<<"Enter the Student Name :";
    getline(cin, name);


    cout<<"Enter the STudent Age :";
    cin>>age;

    Student s1, s2(name, age), s3(name);

    // display these constructor function
    s1.display();
    s2.display();
    s3.display();

}