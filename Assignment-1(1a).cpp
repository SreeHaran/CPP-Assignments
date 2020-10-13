/*Write a c++ program to print fibonacci series using recursion.
Input: 10
Output: 0 1 1 2 3 5 8 13 21 34*/

#include<iostream>
using namespace std;

void fibonacci(int a, int b, int number, int iteration){
	if(iteration == number){
		return ;
	}
	cout << a+b<<" ";
	fibonacci(b, a+b, number, iteration+1);
}

int main(){
	int first = 0, second = 1, n;
	cout << "Enter till which the series needs to be continued: ";
	cin >> n;
	cout<< first << " "<< second<<" ";
	fibonacci(first, second, n-2, 0);
	cout << endl;
	return 0;
}