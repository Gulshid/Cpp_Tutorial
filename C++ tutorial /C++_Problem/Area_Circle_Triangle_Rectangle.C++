#include <iostream>
using namespace std;

int main() {

    // --- Circle ---
    cout << "   ***   \n";
    cout << " *     * \n";
    cout << "*       *\n";
    cout << "*       *\n";
    cout << " *     * \n";
    cout << "   ***   \n";

    cout<<"******* The Area of Circle  **********"<<endl;
    float area_circle;
    float radius;

    cout<<"Enter the Radius :";
    cin>>radius;

    // calculate the area of circle
    area_circle  = 3.14159 * radius * radius;

    cout<<"The Area of Circle is :"<<area_circle<<endl;




    cout<<"******* End of Circle Program **********"<<endl;




    // --- Triangle ---
    cout << "\n   /\\   \n";
    cout << "  /  \\  \n";
    cout << " /____\\ \n";
    cout<<"******** The Area of Triangle *********"<<endl;
    float base;
    float height;
    float area_triangle;

    cout<<"Enter the value for base:";
    cin>>base;

    cout<<"Enter the value for height:";
    cin>>height;

    //Calculate the area of triangle
    area_triangle = 0.5 * base * height;
    cout<<"The Area of Triangle is :"<<area_triangle<<endl;



    cout<<"******* End of Triangle Program**********"<<endl;




    // --- Rectangle ---
    cout << "\n ___________\n";
    cout << "|           |\n";
    cout << "|           |\n";
    cout << "|___________|\n";

    cout<<"******** The Area of Rectangle *********"<<endl;
    float lenght;
    float width;
    float area_Rectangle;

    cout<<"Enter the value for lenght:";
    cin>>lenght;

    cout<<"Enter the value for width:";
    cin>>width;

    //Calculate the Area of Rectangle
    area_Rectangle = lenght * width;
    cout<<"The Area of Rectangle is :"<<area_Rectangle<<endl;





    cout<<"******* End of Rectangle Program**********"<<endl;


}
