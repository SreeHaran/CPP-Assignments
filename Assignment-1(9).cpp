/*Write a c++ program to print multiplication of 2 matrices.
Input:
first matrix elements:
1 2 3
1 2 3
1 2 3
second matrix elements
1 1 1
2 1 2
3 2 1
Output:
multiplication of the matrix:
14 9 8
14 9 8
14 9 8*/

# include <iostream>
using namespace std;
int main(){
	int a[3][3], b[3][3], mul[3][3], i,j,k;
	cout<<"enter the elements of first 3X3 matrix: \n";
	for(i=0;i<3;i++){
		for(j=0; j<3; j++){
			cin >> a[i][j];
		}
		cout<<"\n";
	}
	cout<<"enter the elements of second 3X3 matrix: \n";
	for(i=0;i<3;i++){
		for(j=0; j<3; j++){
			cin >> b[i][j];
		}
		cout<<"\n";
	}
	cout<<"multiply of the matrix= \n";
	for(i=0;i<3;i++){
		for(j=0; j<3; j++){
			mul[i][j] = 0;
			for(k=0; k<=3; k++){
				mul[i][j] += a[i][k]*b[k][j];
			}
			cout << mul[i][j]<<" ";
		}
		cout <<"\n";
	}
	return 0;
}