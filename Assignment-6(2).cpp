/*Modify Exercise 1 so draw( ) is a pure virtual function. Try creating an object of type Shape. Try to call the pure virtual function inside the constructor and see what happens. Leaving it as a pure virtual, give draw( ) a definition.*/

#include<iostream>
using namespace std;
class Shape{
     public:
          virtual void draw()=0;
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