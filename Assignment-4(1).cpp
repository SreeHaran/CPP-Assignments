//C++ program to find area of square, rectangle, circle and triangle by using function overloading

#include <iostream>
using namespace std;
void area(int a){
    cout <<"The area of the square is: "<< a*a;
    return;
}
void area(int a, int b){
    cout <<"The area of the rectangle is: "<< a*b;
    return;
}
void area(float a){
    cout <<"The area of the circle is: "<< 3.14*a*a;
    return;
}
void area(float a, float b){
    cout <<"The area of the triangle is: "<< 0.5*a*b;
    return;
}
int main()
{
    int shape, side, length, breadth;
    float radius, height, base;
    cout << "Enter the shape : "<< endl << 
    "1 - square\n2 - rectangle\n3 - circle\n4 - triangle"<< endl;
    enter:
    cout<<"The number(shape) is: ";
    cin >> shape;
    switch(shape){
        case 1:
        cout <<"enter the side of the square: ";
        cin >> side;
        area(side);
        break;
        
        case 2:
        cout <<"enter the length of the rectangle: ";
        cin >>length;
        cout <<"enter the breadth of the rectangle: ";
        cin >>breadth;
        area(length, breadth);
        break;
        
        case 3:
        cout <<"enter the radius of the circle: ";
        cin >> radius;
        area(radius);
        break;
        
        case 4:
        cout <<"enter the height of the triangle: ";
        cin >>height;
        cout <<"enter the base of the triangle: ";
        cin >>base;
        area(height, base);
        break;
        
        default:
        cout <<"enter a valid character\n";
        goto enter;
    }
    return 0;
}
