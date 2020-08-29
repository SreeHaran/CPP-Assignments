/*Write a c++ program to print factorial of a number.
Input: 5
Output: 120

Input: 6
Output: 720*/

#include<iostream>
using namespace std;
int main(){
	int a, factorial = 1, i;
	cout << "Enter a Number: ";
	cin >> a;
	for(i=1;i<=a;i++){
		factorial *= i;
	}
	cout << factorial;
	return 0;
}