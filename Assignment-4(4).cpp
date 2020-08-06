//C++ program to compare (< or >) two strings using Operator Overloading.

#include <iostream>
#include <string>
using namespace std;

class Compare{
	private:
		string a;
		int len;
	public:
		Compare(){}
		Compare(string &obj){
			a = obj;
			len = a.length();
		}
		bool operator < (Compare &obj){
			if(len < obj.len){
				return true;
			}else{
				return false;
			}
		}
		bool operator > (Compare &obj){
			if(len > obj.len){
				return true;
			}else{
				return false;
			}
		}
};
int main(){
	string str1, str2;
	cout<<"Enter the first string: ";
	cin>>str1;
	cout<<"Enter the second string: ";
	cin>>str2;
	Compare s1(str1), s2(str2);
	if(s1>s2){
		cout<<"The first string is longer";
	}else if(s1<s2){
		cout<<"The second string is longer";
	}else{
		cout<<"Both the strings are equal in length";
	}
	return 0;
}