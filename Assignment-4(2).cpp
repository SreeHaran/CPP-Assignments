//C++ program to find the subtraction and multiplication of two complex numbers using operator overloading

#include <iostream>
using namespace std;

class Complex{
	private:
		int real, imag;
	public:
	Complex(){
	        real = 0;
	        imag = 0;
	}
	Complex(int mReal, int mImag){
		real = mReal;
		imag = mImag;
	}
	Complex operator - (Complex &obj1){
        	Complex obj2;
        	obj2.real = real - obj1.real;
        	obj2.imag = imag - obj1.imag;
        	return obj2;
        }
	Complex operator * (Complex &obj1){
		Complex obj2;
		obj2.real = (real * obj1.real) - (imag * obj1.imag);
		obj2.imag = (real * obj1.imag) + (imag * obj1.real); 
		return obj2;
	}
        void show();
};
void Complex:: show(){
	cout<<"The result is: " <<real<<" + "<<imag<<"i"<<endl;
	return;
}
int main(){
	Complex num1(5,9), num2(3,5);
	Complex num3 = num1 - num2;
	num3.show();
	num3 = num1 * num2;
	num3.show(); 
	return 0;	
}