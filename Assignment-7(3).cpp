/*Write a class template that implements the operations of a simple calculator*/

#include<iostream>
using namespace std;

template <typename T>
class Calculator{
	private:
		T a, b;
	public:
		Calculator(T x, T y){
			a = x ;
			b = y ;
		}
		void add(){
			cout<< "addition: "<< a+b<< endl;
		}
		void sub(){
			cout<< "subtraction: "<< a-b<< endl;
		}
		void mult(){
			cout<< "Multiplication: "<< a*b<< endl;
		}
		void div(){
			cout<< "Division: "<< a/b << endl;
		}
		void mod(){
			cout<< "Modulo: "<< a%b << endl;
		}
		void calculate(){
			add();
			sub();
			mult();
			div();
			mod();
		}
};
int main(){
	Calculator<int> obj(12, 6);
	obj.calculate();
	return 0;
}







