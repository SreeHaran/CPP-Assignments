//C++ program to create the bank transactions using copy constructor.

#include<iostream>
using namespace std;
class Transactions 
{
  private:
      string sender, receiver;
      double money;
  public:
    Transactions(string s1, string s2, double d) {
      sender = s1;
      receiver = s2;
      money = d;
    }
    Transactions(const Transactions &t) {
      sender = t.receiver;
      receiver = t.sender;
      money = t.money;
    }
    void printAll() {
        cout << "Sender is: " << sender << endl;
        cout << "Receiver is: " << receiver << endl;
        cout << "Transferred amount : " << money << endl;
    }
};
int main(){
  string sender, receiver;
  double money;
  char choice;
  cout << "Enter the sender name: ";
  cin >> sender;
  cout << "Enter the receiver name: ";
  cin >> receiver;
  cout << "Enter the amount to send: ";
  cin >> money;
  Transactions t1(sender, receiver, money);
  t1.printAll();
  cout << "Do you want to refund the amount? y/n ";
  cin >> choice;
  if(choice == 'y'){
    Transactions t2 = t1;
    t2.printAll();
  }
return 0;
}