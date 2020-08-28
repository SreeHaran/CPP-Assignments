/*Write a c++ program to check palindrome number.
Input: 121
Output: palindrome number
Input: 113
Output: not a palindrome number*/

#include<iostream>
using namespace std;
int main(){
	int a, temp, rem, final = 0;
	cout << "Enter a Number: ";
	cin >> a;
	temp = a;
	while(temp > 0){
		rem = temp % 10;
		final = (final*10)+rem;
		temp /= 10;
	}
	if(a == final){
		cout<< "It's a Plaindrome";
	} else{
		cout << "It's not a Palindrome";
	}
	return 0;
}