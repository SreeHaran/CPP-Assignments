//C++ program to create a simple calculator.

#include <iostream>
using namespace std;
class Calculator{
    public:
    int a,b;
    void results();
};
void Calculator:: results(){
    cout<<"Results are:-"<<endl;
    cout<<"Addition: "<< a+b << endl
    <<"Subtraction: "<< a-b << endl
    <<"Multiplication: "<< a*b << endl
    <<"Division(Quotient): "<< a/b << endl
    <<"Division(Remainder): "<< a%b << endl;
}
int main()
{
    Calculator cal;
    cout<<"Enter the first digit: "; 
    cin>>cal.a;
    cout<<"Enter the second digit: "; 
    cin>>cal.b;
    cal.results();
    return 0;
}
