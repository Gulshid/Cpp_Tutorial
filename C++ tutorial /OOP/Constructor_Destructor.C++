/*🧱 Constructor:
                A constructor is a special function in a class that automatically runs when an object is created to initialize the object.
💣 Destructor:

                A destructor is a special function in a class that automatically runs when an object is destroyed to free resources or perform cleanup.
*/ 

#include <iostream>
using namespace std;


// Class Area
class Student
{
    private:
    string name;

    public:
    Student(string n) // COnstructor Created
    {
        cout<<"Enter your Name :";
        getline(cin, name);

        cout<<"Constructor is Created--->"<<endl;
        cout<<"The Name of student :"<<name<<endl;

    }


    ~Student() // Destructor Created 
    {
        cout<<"Destructor is Created --->"<<endl;
        cout<<"The Name of STudent :"<<name<<" is Destroyed "<<endl;

    }


};


int main()
{
    // Object Area
    Student obj("");


    

}
