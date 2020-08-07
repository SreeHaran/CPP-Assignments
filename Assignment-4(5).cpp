/*Write a program that will output the sum of two
quadratic polynomials. Your program must do the
following:
i) Define an user defined datatype, Poly with three
private data members a, b and c(type double)to
represent the coefficients of a quadratic polynomial
in the form:
ax2 + bx + c

ii) Include a constructor in the Poly class to initialize
all private data members with caller-supplied values
(in addition to the default constructor!)
iii) Overload the addition operator to return the sum of
two Poly objects.
iv) Overload the << (output) operator to output Poly
objects in the following format, e.g.,: ax2 + bx + c

Where a, b and c are the coefficients of the Poly object.
Do not display the a or b terms if they have zero
coefficients. Moreover, if any coefficient is negative it
should be precede by a minus sign, and not a plus sign.
v) In your main() function, declare and initialize two
Poly objects, q1 and q2, to represent the following
polynomials: 3x2 + 4x – 2 and -4x + 10 . Also declare a
third, un-initialized Poly object named sum.
vi) Output the sum of the two polynomials to the console
using the following C++ code exactly as it appears:
sum = q1 + q2;
cout << q1 << " : q1\n";
cout << q2 << " : q2\n";
cout << sum << " : q1+q2\n";*/

#include <iostream>
using namespace std;
class poly{
	private:
		double a,b,c;
	public:
		poly(){}
		poly(double x, double y, double z){
			a = x;
			b = y;
			c = z;
		}
		poly operator +(poly &obj){
			poly obj2;
			obj2.a = a + obj.a;
			obj2.b = b + obj.b;
			obj2.c = c + obj.c;
			return obj2;
		}
		friend std::ostream &operator <<(std::ostream &cout ,poly &obj){
			if(obj.a!=0){
				cout << obj.a <<"x2";
			}
			if(obj.b>0){
				cout<<"+"<< obj.b <<"x";
			}
			else if(obj.b<0){
				cout<< obj.b <<"x";
			}else{
				cout<<"";
			}
			if(obj.c>0){
				cout<<"+"<< obj.c;
			}
			else if(obj.c<0){
				cout<< obj.c;
			}else{
				cout<< "";
			}
		}
};
int main(){
	poly q1(3,4,-2),q2(0,-4,10);
	poly sum = q1 + q2;
	cout<< q1 <<" :q1\n";
	cout<< q2 <<" :q2\n";
	cout<< sum <<" :q1+q2\n";
	return 0;
}