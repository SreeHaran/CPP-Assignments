//C++ program using inline functions for finding min and max of two elements.

#include<iostream>
using namespace std;
inline int max(int a, int b)
{
   if(a>b)
   return(a);
   else
   return(b);
}
inline int min(int a,int b)
{
  if(b>a)
  return(a);
  else
  return(b);
}
int main()
{
    int a,b;
    cout<<"enter first number:";
    cin>>a;
    cout<<"enter second number:";
    cin>>b;
    cout<<"max number is:"<<max(a,b)<<endl;
    cout<<"min number is:"<<min(a,b)<<endl;
}