/*Write a class template that to implement the operations of the stack data structure*/

#include <iostream>
using namespace std;

template<typename T>
class Stack{
	private:
		T a;
	public:
		Stack(){}
		void push(){
			cout<<"Data is pushed\n";
		}
		void pop(){
			cout<<"data is poped\n";
		}
};

int main(){
	Stack<int> obj;
	obj.push();
	obj.pop();
	return 0;
}
