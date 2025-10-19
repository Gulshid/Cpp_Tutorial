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
// #include<iostream>
// using namespace std;

// class Animal {
// public:
//     virtual void sound() {
//         cout << "Animal sound" << endl;
//     }
// };

// class Dog : public Animal {
// public:
//     void sound() {
//         cout << "Dog barks" << endl;
//     }
// };

// int main() {
//     Animal a;   // normal object
//     Dog d;      // derived
    
//     Animal *ptr;

//     ptr = &a;
//     ptr->sound();   // Animal sound

//     ptr = &d;
//     ptr->sound();   // Dog barks
// }

