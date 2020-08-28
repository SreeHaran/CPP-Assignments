/*Write a c++ program to check prime number.
Input: 17
Output: prime number
Input: 57
Output: not a prime number*/

#include<iostream>
using namespace std;
int main(){
	int a, i;
	bool prime = true; //flag
	cout << "Enter a Number: ";
	cin >> a;
	for(i=2; i<a; ++i){
		if(a%i == 0){
			cout << "Not a Prime Number";
			prime = false;
			break;
		}
	}
	if(prime){
		cout << "Prime Number";
	}
	return 0;
}