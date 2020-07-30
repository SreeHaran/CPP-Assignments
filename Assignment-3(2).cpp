//C++ program to create a class called Student. Create a friend function called display to display the student details.

#include<iostream>
using namespace std;

class Student {
    private:
        string name;
        int age;
    public:
        void setDetails(string s, int i) {
            name = s;
            age = i;
        }
        string getName() {
            return name;
        }
        int getAge(){
            return age;
        }
    friend void display(Student);
};
void display(Student h) {
    cout << "Name is : " << h.getName() << endl;
    cout << "Age is : " << h.getAge() << endl;
}
int main() {
    Student h1;
    h1.setDetails("Sree Haran", 17);
    display(h1);
    return 0;
}