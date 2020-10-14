/*
Write a c++ program to convert decimal number to binary.
Input: 9
Output: 1001

Input: 20
Output: 10100*/

#include<iostream>
using namespace std;

int main(){
	int a[16], b, i;
	cout << "Enter a number: ";
	cin>> b;
	for(i=0; b>0; i++){
		a[i] = b%2;
		b /= 2;
	}
	
	cout << "Binary of the given number: ";
	for(i= i-1; i>=0; i--){
		cout<< a[i];
	}
	cout << endl;
	return 0;
}