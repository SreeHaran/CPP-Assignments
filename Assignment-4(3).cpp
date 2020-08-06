//C++ program to overload ‘+’ operator to concatenate two strings

#include <iostream>
using namespace std;

class Concatenate{
	private:
		string a;
	public:
	    Concatenate(){
	        a = " ";
	    }
	    Concatenate(string str){
	        a = str;
	    }
		string operator +(Concatenate &obj){
			string str;
			str = a + obj.a;
			return str;
		}
};
int main(){
	Concatenate str1("Sree "), str2("Haran");
	string str3 = str1 + str2;
	cout <<"Concatenated string is: "<< str3 << endl;
	return 0;
}