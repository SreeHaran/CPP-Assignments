/*Write a c++ program to reverse given number.
Input: 234
Output: 432*/

#include <iostream>
using namespace std;
int main(){
	int a, temp, i, total = 0 ;
	cout << "Enter a Number: ";
	cin >> a;
	temp = a;
	while(temp>0){
		i = temp % 10;
		total = (total*10) + i;
		temp /= 10;
	}
	cout<< "Reversed Digit: " << total ;
	return 0;
}