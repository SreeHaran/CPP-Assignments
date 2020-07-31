//C++ program using parameterized constructor for finding whether a number is prime number or not.

#include<iostream>
using namespace std;
class Number 
{
  private:
    int number;
  public:
    Number(int n) {
        number = n;
    }
    void isPrime(){
        if(number < 2){
            cout << "It is not a prime number" << endl;
        }
        for(int i = 2; i <= number/2; i++){
            if(number%i == 0) {
                 cout << "It is not a prime number" << endl;
            }
        }
        cout << "It is a prime number" << endl;
    }
};
int main()
{
  int a;
  cout << "Enter a number: ";
  cin >> a;
  Number num(a);
  num.isPrime();
  return 0;
}