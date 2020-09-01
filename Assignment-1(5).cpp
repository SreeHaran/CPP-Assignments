/*Write a c++ program to check armstrong number.

Input: 371
Output: armstrong

Input: 342
Output: not armstrong*/

#include <iostream>
using namespace std;

int main(){
	int a, temp, i=0;
	cout << "Enter a Number: ";
	cin >> a;
	temp = a;
	while(temp>0){
		i = i + ((temp%10)*(temp%10)*(temp%10));
		temp /=10;
	}
	if(i==a){
		cout << "The Number is an armstrong";
	}else{
		cout << "The Number is not an armstrong";
	}
	return 0;
}