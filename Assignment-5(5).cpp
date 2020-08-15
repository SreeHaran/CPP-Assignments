/*Create a class named Shape with a function that prints "This is a shape". 
Create another class named Polygon inheriting the Shape class with the same function that prints "Polygon is a shape". 
Create two other classes named Rectangle and Triangle having the same function which prints "Rectangle is a polygon" and "Triangle is a polygon" respectively. 
Again, make another class named Square having the same function which prints "Square is a rectangle". 
Now, try calling the function by the object of each of these classes.*/
#include<iostream>
using namespace std;

class Shape{
    public:
        Shape(){
            cout<<"This is a shape"<<endl;
        }
};
class Polygon: public Shape{
    public:
        Polygon(){
            cout<<"Polygon is a shape"<<endl;
        }
};
class Rectangle{
    public:
        Rectangle(){
            cout<<"Rectangle is a polygon"<<endl;
        }
};
class Triangle{
    public:
        Triangle(){
            cout<<"Triangle is a polygon"<<endl;
        }
};
class Square{
    public:
        Square(){
            cout<<"Square is a rectangle"<<endl;
        }
};
int main(){
    Shape shape;
    Polygon poly;
    Rectangle rect;
    Triangle tri;
    Square sq;
    return 0;
}