/*
Write a c++ program to convert number in characters.
Input: 74254
Output:Seven Four Two Five Four
Input: 203
Output: two zero three
*/
#include<iostream>
using namespace std;

int main(){
	long int n, sum =0,r;
	cout<<"Enter the number: ";
	cin>>n;
	while (n>0){
		r = n %10;
		sum = sum*10+r;
		n/=10;
	}
	n = sum;
	while(n>0){
		r = n%10;
		switch(r){
			case 1:
			cout<<"one ";
			break;
			
			case 2:
			cout<<"two ";
			break;
			
			case 3:
			cout<<"three ";
			break;
			
			case 4:
			cout<<"four ";
			break;
			
			case 5:
			cout<<"five ";
			break;
			
			case 6:
			cout<<"six ";
			break;
			
			case 7:
			cout<<"seven ";
			break;
			
			case 8:
			cout<<"eight ";
			break;
			
			case 9:
			cout<<"nine ";
			break;
			
			case 0:
			cout<<"zero ";
			break;
			
			default:
			cout<<"error";
			break;
		}
		n/=10;
	}
	cout << endl;
}