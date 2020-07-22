//Question:- C++ program to create class to get and print details of a student:-
#include <iostream>
using namespace std;
class Student{
    private:
    string mName;
    int mRollNo;

    public:
    void setDetails(string, int);
    string getName(void);
    int getRollNo(void);
};
void Student:: setDetails(string name, int rollNo){
    mName = name;
    mRollNo = rollNo;
}
string Student:: getName(void){
    return mName;
}
int Student:: getRollNo(void){
    return mRollNo;
}
int main()
{
    string name;
    int rollNo;
    Student stud1;
    cin>> name; cin>> rollNo;
    stud1.setDetails(name, rollNo);
    cout << "Details:-\nName is: " << stud1.getName()<< endl << "Rollno. is: " << stud1.getRollNo();
    return 0;
}
