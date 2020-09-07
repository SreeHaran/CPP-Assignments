/*Write a c++ program to swap two numbers without using third variable.

Input: a=5 b=10
Output: a=10 b=5*/

#include <iostream>
using namespace std;
int main(){
	int a,b;
	cout << "Enter the value of a: ";
	cin >> a;
	cout << "Enter the value of b: ";
	cin >> b;
	cout << "Before Swapping: a = "<<a <<"; b = " << b<<endl;
	a = a+b;
	b = a-b;
	a = a-b;
	cout << "After swapping: a = "<<a<<"; b = "<< b<<endl;
	return 0;
}