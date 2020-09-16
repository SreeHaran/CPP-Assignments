/*Write a function template that takes a single type parameter (T) and accepts four function arguments: an array of T, a start index, a Stop index (inclusive), and an optional initial value. The function returns the sum of all array elements in specified range and the initial value. Use the default constructor of T for the default initial value. */

#include <iostream>
using namespace std;

template<typename T>
T function(T arr[], int start, int stop, int initial){
	int i = 0;
	T sum = 0;
	for(i = start; i != stop; i++){
		sum += arr[i];
	}
	return sum;
}

int main(){
	int arr[5] = {23,03,2002,5,32};
	cout<< "Sum of the array: " << function(arr, 0, 5, 1);
	return 0;
}