/*Employees
Create a class called Employee whose objects are records for an employee. This class will be a derived class of the class Person which you will have to copy into a file of your own and compile. An employee record has an employee's name (inherited from the class Person), an annual salary represented as a single value of type double, a year the employee started work as a single value of type int and a national insurance number, which is a value of type String.
Your class should have a reasonable number of constructors and accessor methods. 
Write a main method to fully test your class definition.
*/
#include<iostream>
using namespace std;

class Person{
    protected:
        string name;
    public:
        void setName(string mName){
            name = mName;
        }
        void getName(){
            cout<<"name is: "<<name<<"\n";
        }
};
class Employee : public Person{
    private:
        double annualSalary;
        int startedYear;
        string insuranceNumber;
    public:
        Employee(double salary, int year, string insurance){
            annualSalary = salary;
            startedYear = year;
            insuranceNumber = insurance;
        }
        void getAnnualSalary(){
            cout << "Annual Salary of " <<name<< " is: "<<annualSalary<<"\n";
        }
        void getYear(){
            cout<<"Started year of "<< name<< " is: "<<startedYear<<"\n";
        }
        void getInsurance(){
            cout<<"national insurance number of "<< name<< " is: "<<insuranceNumber<<"\n";
        }
        void getAllDetails(){
            getName();
            getAnnualSalary();
            getYear();
            getInsurance();
        }
};
int main(){
    Employee emp(9000000000, 2020, "SHA23032002");
    emp.setName("SreeHaran");
    emp.getAllDetails();
    return 0;
}