/*Write a c++ program to print fibonacci series without using recursion.
Input: 10
Output: 0 1 1 2 3 5 8 13 21 34*/

#include<iostream>
using namespace std;
int main(){
	int a = 0, i , first = 0, second = 1, till;
	cout << "Enter till which the series needs to be continued" << endl;
	cin >> till;
	cout << first << " " << second << " ";
	for(i = 2; i<till; ++i){
		a = first;
		first = second;
		second = a + second; 
		cout << second << " ";
	}
	return 0;
}