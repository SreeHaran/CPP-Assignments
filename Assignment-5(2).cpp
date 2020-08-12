/*Make a class named Fruit with a data member to calculate the number of fruits in a basket. 
Create two other class named Apples and Mangoes to calculate the number of apples and mangoes in the basket.
Print the number of fruits of each type and the total number of fruits in the basket.*/

#include <iostream>
using namespace std;

class Apples{
	public:
	    int apples;
		void NumberOfApples(){
			cout << "Enter the number of apples in the basket: ";
			cin >> apples;
		}
};
class Mangoes{
	public:
	    int mangoes;
		void NumberOfMangoes(){
			cout << "Enter the number of mangoes in the basket: ";
			cin >> mangoes;
		}
};
class Fruit{
	public:
		int total;
		void NumberOfFruits(int apples, int mangoes){
   			total = apples + mangoes;
			cout << "Total Number of fruits in the basket is: " << total;
		}
};
int main(){
	Apples apple;
	apple.NumberOfApples();
	Mangoes mango;
	mango.NumberOfMangoes();
	Fruit fruits;
	fruits.NumberOfFruits(apple.apples, mango.mangoes);
	return 0;
}
