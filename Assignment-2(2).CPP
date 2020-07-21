#include <iostream>
using namespace std;
int main()
{
int i,j,n;
string studentName[100];
int studentRollNo[100];
cout<<"Enter the number of students: ";
cin>> n;
for(i=1;i<=n;i++){
cout<<"\nEnter the Student"<<i<<" name: ";
cin>>studentName[i];
cout<<"Enter the Student"<<i<<" rollNo: ";
cin>>studentRollNo[i];
}
cout<<"\nS.no"<<"\t"<<"Name"<<"\t"<<"RollNo"<<endl;

for(i=1;i<=n;i++){
cout<<i<<".\t"<<studentName[i]<<"\t"<<studentRollNo[i]<<endl;
}
return 0;
}