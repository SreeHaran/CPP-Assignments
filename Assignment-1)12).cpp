/*Write a c++ program to print number triangle.
Input: 7
Output:
enter the range= 6
     1
    121
   12321
  1234321
 123454321
12345654321
*/
#include <iostream>
using namespace std;

int main(){
	int i,j,k,m,n;
	cout<< "Enter the range: ";
	cin >> n;
	for(i=1;i<=n;i++){
		for(j=n;j>i;j--){
			cout<< " ";
		}
		for(k=1;k<=i;k++){
			cout<< k;
		}
		for(m=i-1; m>=1; --m){
			cout<<m;
		}
		cout<<"\n";
	}
	return 0;
}