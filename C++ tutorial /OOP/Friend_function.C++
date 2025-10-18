#include <iostream>
using namespace std;
// Classes Area
class Student
{

    private:
    string name;
    int age;

    public:

    //Constructor
    Student(string n, int a)
    {
        name = n;
        age = a;
    }

    //friend function decalring
    friend void showData(Student s);


};


// friend funciton
void showData(Student s)
{
    cout<<"Name :"<<s.name<<endl;
    cout<<"Age :"<<s.age<<endl;
}


int main()
{
    // Object Area
    Student s1("Gulshid Zada", 23);
    showData(s1);



}
