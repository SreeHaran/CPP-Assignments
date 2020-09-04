/*Write a c++ program to print sum of digits.

Input: 23
Output: 5

Input: 624
Output: 12*/

#include <iostream>
using namespace std;
int main(){
	int a, temp, i=0;
	cout << "Enter a Number: ";
	cin >> a;
	temp = a;
	while(temp>0){
		i = i + (temp%10);
		temp /= 10;
	}
	cout<< "Sum of Digits: " << i ;
	return 0;
}