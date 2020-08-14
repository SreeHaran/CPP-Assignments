/*We want to store the information of different vehicles. Create a class named Vehicle with two data member named mileage and price. Create its two subclasses
*Car with data members to store ownership cost, warranty (by years), seating capacity and fuel type (diesel or petrol).
*Bike with data members to store the number of cylinders, number of gears, cooling type(air, liquid or oil), wheel type(alloys or spokes) and fuel tank size(in inches)
Make another two subclasses Audi and Ford of Car, each having a data member to store the model type. Next, make two subclasses Bajaj and TVS, each having a data
member to store the make-type. 
Now, store and print the information of an Audi and a Ford car (i.e. model type, ownership cost, warranty, seating capacity, fuel type, mileage and price.) Do the same for a Bajaj and a TVS bike. */
#include <iostream>
using namespace std;

class Vehicle{
    public:
        int mileage, price;
    protected:
        void printVehicle(){
            cout << "mileage is: "<< mileage << "Km/L\n";
            cout << "price is: " << price << "rupees\n";
        }
};
class Car : public Vehicle{
    public: 
        int ownershipCost, warranty, seatingCapacity;
        string fuelType;
    protected:
        void printCar(){
            cout<<"Ownership Cost is: "<< ownershipCost<<"rupees\n";
            cout<<"warranty of the car is :"<<warranty<<"years\n";
            cout<<"Seating capacity of the car is: "<< seatingCapacity << "seats\n";
            cout<<"fuel type of the car is: "<<fuelType<<"\n";
        }
};
class Audi : public Car{
    private: 
        string modelType = "AU45651";
    public:
        void setAudi(){
            mileage = 25;
            price = 2500000;
            ownershipCost = 7000;
            warranty = 9;
            seatingCapacity = 6;
            fuelType = "petrol";
        }
        void printAudi(){
            printVehicle();
            printCar();
            cout<<"Model type is: "<<modelType <<"\n";
        }
};
class Ford : public Car{
    private: 
        string modelType = "FD15543";
    public:
         void setFord(){
            mileage = 20;
            price = 1200000;
            ownershipCost = 4000;
            warranty = 5;
            seatingCapacity = 6;
            fuelType = "diesel";
        }
        void printFord(){
            printVehicle();
            printCar();
            cout<<"Model type is: "<<modelType <<"\n";
        }
};
class Bike : public Vehicle{
    public:
        int cylinders, gears;
        string coolingType, wheelType;
        float tankSize;
    protected:
        void printBike(){
            cout<<"the number of cylinders: "<< cylinders<<"cylinders\n";
            cout<<"number of gears: "<<gears<<"gears\n";
            cout<<"cooling type: "<< coolingType << "\n";
            cout<<"wheel type: "<<wheelType<<"\n";
            cout<<"fuel tank size: "<<tankSize<<"inches\n";
        }
};
class Bajaj : public Bike{
    private:
        string makeType = "Iron";
    public:
        void setBajaj(){
            mileage = 50;
            price = 120000;
            cylinders = 3;
            gears = 2;
            coolingType = "liquid";
            wheelType = "alloys";
            tankSize = 42.5;
        }
        void printBajaj(){
            printVehicle();
            printBike();
            cout<<"Make-type of the bike is: "<<makeType<<"\n";
        }
};
class Tvs : public Bike{
    private:
        string makeType = "Aluminium";
    public:
        void setTvs(){
            mileage = 65;
            price = 70000;
            cylinders = 2;
            gears = 1;
            coolingType = "oil";
            wheelType = "spokes";
            tankSize = 35.7;
        }
        void printTvs(){
            printVehicle();
            printBike();
            cout<<"Make-type of the bike is: "<<makeType<<"\n";
        }
};
int main(){
    Audi audi;
    audi.setAudi();
    cout<<"AUDI:-"<<endl;
    audi.printAudi();
    cout <<"\n";
    Ford ford;
    ford.setFord();
    cout<<"FORD:-"<<endl;
    ford.printFord();
    cout <<"\n";
    Bajaj bajaj;
    bajaj.setBajaj();
    cout<<"BAJAJ:-"<<endl;
    bajaj.printBajaj();
    cout <<"\n";
    Tvs tvs;
    tvs.setTvs();
    cout<<"TVS:-"<<endl;
    tvs.printTvs();
    return 0;
}