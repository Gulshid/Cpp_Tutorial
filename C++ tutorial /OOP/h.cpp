// #include<iostream>
// using namespace std;

// // Encapsulation
// // class A
// // {
// //     private :
// //     int x; // Encapsulation

// //     public:
// //     A()
// //     {
// //         cout<<"Enter the value for x :";
// //         cin>>x;


// //         cout<<"The value for x is :"<<x<<endl;
// //     }

// // };






// // Abstraction
// // class A
// // {
// //     private :
// //     int x; 

// //     public:
// //     A(int y , int z) // only use this function and its paramter not their inner infromation
// //     {
// //         cout<<"Enter the value for x :";
// //         cin>>x;




// //         cout<<"The value for x is :"<<x<<endl;
// //         cout<<"The value for y is :"<<y<<endl;
// //         cout<<"The value for z is :"<<z<<endl;
// //     }


// // };


// // inheritence
// // class A
// // {
// //     private :
// //     int x; 

// //     public:
// //     A()
// //     {
// //         cout<<"Enter the value for x :";
// //         cin>>x;


// //         cout<<"The value for x is :"<<x<<endl;
// //     }

// // };


// // class B : public A
// // {
// //     private :
// //     int y; 

// //     public:
// //     B()
// //     {
// //         cout<<"Enter the value for y :";
// //         cin>>y;


// //         cout<<"The value for y is :"<<y<<endl;
// //     }

// // };



// // Polymorphism
// class A
// {
//     private :
//     int x; 

//     public:
//     A()
//     {
//         cout<<"Enter the value for x :";
//         cin>>x;


//         cout<<"The value for x is :"<<x<<endl;
//     }

// };


// class B : public A
// {
//     private :
//     int y; 

//     public:
//     A()
//     {
//         cout<<"Enter the value for y :";
//         cin>>y;


//         cout<<"The value for y is :"<<y<<endl;
//     }

// };





// int main()
// {
//     // int y,z;
//     // cout<<"Enter the value for y :";
//     // cin>>y;

//     // cout<<"Enter the value for z :";
//     // cin>>z;
//     // A a1(y,z);


//     B b;

// }
#include <iostream>
using namespace std;

// Base class
class Animal {
public:
    virtual void sound() {  // virtual function
        cout << "Animal makes a sound" << endl;
    }
};

// Derived class 1
class Dog : public Animal {
public:
    void sound()  {  // override keyword (optional but good practice)
        cout << "Dog barks" << endl;
    }
};

// Derived class 2
class Cat : public Animal {
public:
    void sound()  {
        cout << "Cat meows" << endl;
    }
};

int main() {
    Animal* a; // Base class pointer

    Dog d;
    Cat c;

    a = &d;
    a->sound();  // Output: Dog barks

    a = &c;
    a->sound();  // Output: Cat meows

    return 0;
}
