/* Write a function template for swapping two generic data.*/

#include <iostream>
using namespace std;
template<typename T>
void swap(T x, T y){
	cout << "Before Swapping: x= "<<x<<"; y= "<< y<< endl;
	T z;
	z = x;
	x = y;
	y = z;
	cout << "After Swapping: x= "<<x<<"; y= "<< y<< endl;
}
int main(){
	cout<< "Float: \n";
	swap(5.6f, 2.3f);
	cout << "Integer: \n";
	swap(23, 3);
	return 0;
}