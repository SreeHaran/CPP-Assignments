/*Write a program with students as an abstract class and create derived classes Engineering, Medicine and Science from the base class Student. Create the objects of the derived classes and process them and access them using an array of pointer of type base class Student. */

#include<iostream>
using namespace std;
class Student{
    public:
        virtual void role() = 0;
};
class Engineering : public Student{
    public:
        void role(){
            cout<<"I am studying Engineering\n";
        }
};
class Medicine : public Student{
    public:
        void role(){
            cout<<"I am studying Medicine \n";
        }
};
class Science : public Student{
    public:
        void role(){
            cout<<"I am studying Science\n ";
        }
};
int main(){
    int i;
    Student* arr[3] = {new Engineering(), new Medicine(), new Science()};
    for( i=0 ; i<3 ; i++ ){
        arr[i]->role();
    }
    return 0;
}