#include <iostream>
using namespace std;
int main()
{
int a,i,n;
string candidateName[100];
int votes[100];
cout<<"Enter the number of candidates participated in election: ";
cin>> n;

for(i=1;i<=n;i++){
cout<<"\nEnter the candidate"<<i<<"'s name: ";
cin>>candidateName[i];
cout<<"Enter the received votes by candidate"<<i<<": ";
cin>>votes[i];
}
for (i = 1; i < n; ++i) {
if (votes[i-1] < votes[i]){
a = i;
}
}
cout<<"\nThe winner with highest number of votes is: "<<candidateName[a]<<endl;
return 0;
}