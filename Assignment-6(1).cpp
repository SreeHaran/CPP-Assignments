/*Create a simple “shape” hierarchy: a base class called Shape and derived classes called Circle, Square, and Triangle. 
In the base class, make a virtual function called draw( ), and override this in the derived classes.
Make an array of pointers to Shape objects that you create on the heap (and thus perform upcasting of the pointers), and call draw( ) through the base-class pointers, to verify the behaviour of the virtual function.*/
#include<iostream>
using namespace std;
class Shape{
     public:
          virtual void draw(){
	std::cout<<"This is a shape\n";
          }
};
class Circle: public Shape{
     public:
          void draw(){
	std::cout<<"This is a Circle\n";
          }
};
class Square : public Shape{
     public:
          void draw(){
	std::cout<<"This is a Square\n";
          }
};
class Triangle: public Shape{
     public:
          void draw(){
	std::cout<<"This is a Triangle\n";
          }
};
int main(){
     Shape *shape;
     Circle c;
     shape = &c;
     shape->draw();
     Square s;
     shape = &s;
     shape->draw();
     Triangle t;
     shape = &t;
     shape->draw();
     return 0;
}
