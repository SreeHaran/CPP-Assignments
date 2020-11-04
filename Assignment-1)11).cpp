/*
Write a c++ program to print alphabet triangle.
Output:
    A
   ABA
  ABCBA
 ABCDCBA
ABCDEDCBA
*/
#include <iostream>
using namespace std;
int main(){
	char c = 'A';
	int i, j, k, m;
	for(i=1;i<5; i++){
		for(j=5;j>=i;j--){
			cout <<" ";
		}
		for(k=1;k<=i; k++){
			cout << c++;
		}
		c--;
		for(m = 1; m < i; m++){
			cout << --c;
		}
		cout << "\n";
		c = 'A';
	}
	return 0;
}