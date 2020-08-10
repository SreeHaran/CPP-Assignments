/*Create two classes named Mammals and MarineAnimals. Create another class named BlueWhale which inherits both the above classes. Now, create a function in each of these classes which prints “I am mammal” “I am a marine animal” and “I belong to both the categories: Mammals as well as Marine Animals” respectively. Now, create an object for each of the above class and try calling
1 - function of Mammals by the object of Mammal
2 - function of MarineAnimal by the object of MarineAnimal
3 - function of BlueWhale by the object of BlueWhale
4 - function of each of its parent by the object of BlueWhale*/
#include <iostream>
using namespace std;

class Mammals{
	public:
		void Mammal(){
			cout<<"I am mammal\n";
		}
};
class MarineAnimals{
	public:
		void MarineAnimal(){
			cout<<"I am a marine animal\n";
		}
};
class BlueWhales : public Mammals, public MarineAnimals{
	public:
		void BlueWhale(){
			cout << "I belong to both the categories: Mammals as well as Marine Animals\n";
		}
		void characters(){
			Mammal();
			MarineAnimal();
		}
};
int main(){
	Mammals animal1;
	MarineAnimals animal2;
	BlueWhales animal3;
	animal1.Mammal();
	animal2.MarineAnimal();
	animal3.BlueWhale();
	animal3.characters();
	return 0;
}