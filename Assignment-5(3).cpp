/*We want to calculate the total marks of each students of a class in Physics, Chemistry and Mathematics and the average marks of the class. The number of students in the class are entered by the user. Create a class named Marks with data members for roll number, name and marks. Create three other classes inheriting the marks class, namely Physics, Chemistry and Mathematics, which are used to define marks in individual subject of each student. Roll number of each student will be generated automatically.*/

#include<iostream>
using namespace std;

class Marks{
	public:
		int rollNumber;
		string name;
};
class Physics : public Marks{
	public:
		int phyMark;
};
class Chemistry : public Marks{
	public:
		int chemMark;
};
class Mathematics : public Marks{
	public:
		int mathMark;
};
int main(){
	int students, i, a = 100, avgPhyMark = 0, avgChemMark = 0, avgMathMark = 0, avg;
	cout<<"Enter the number of students in the class: ";
	cin >> students;
	Marks marks[a];
	Physics phy[a];
	Chemistry chem[a];
	Mathematics math[a];
	for(i = 1; i<=students;i++){
		cout << "Enter the name of the student "<<i<<" :";
		cin >> marks[i].name;
		marks[i].rollNumber = i;
		cout << "Enter the physics marks: ";
		cin >> phy[i].phyMark;
		avgPhyMark += phy[i].phyMark;
		cout << "Enter the chemistry marks: ";
		cin >> chem[i].chemMark;
		avgChemMark += chem[i].chemMark;
		cout << "Enter the mathematics marks: ";
		cin >> math[i].mathMark;
		avgMathMark += math[i].mathMark;
		cout<<"\n";
	}
	avgPhyMark /= students;
	avgChemMark /= students;
	avgMathMark /= students; 
	avg = (avgPhyMark+avgChemMark+avgMathMark)/3;
	cout << " The average Physics mark of the class is: " << avgPhyMark << endl;
	cout << " The average Chemistry mark of the class is: " << avgChemMark << endl;
	cout << " The average Mathematics mark of the class is: " << avgMathMark << endl;
	cout << " The average mark of the class is: " << avg << endl;
	return 0;
}