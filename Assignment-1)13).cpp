/*
Write a c++ program to generate fibonacci triangle.
Input: 5
Output:
1
1 1
1 1 2
1 1 2 3
1 1 2 3 5
*/
#include <iostream>
using namespace std;
int main(){
	int a=0, b=1,i,c,n,j;
	cout<<"Enter the limit: ";
	cin>> n;
	for(i=1; i<=n; i++){
		a =0;
		b=1;
		cout<<b<<" ";
		for(j=1;j<i;j++){
			c=a+b;
			cout<<c<<" ";
			a=b;
			b=c;
		}
	cout<< "\n";
	}
	return 0;
}