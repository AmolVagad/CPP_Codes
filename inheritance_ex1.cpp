// CPP code to implement inheritance 
// Using a vehicle class as parent and bus, car and truck as child classes

#include<stdio.h>
#include<iostream>
#include<string>
using namespace std;

//1st Base Class
class Vehicle 
{
	public:
		Vehicle()
		{
			cout<<"This is a vehicle class "<<endl;
		
			
		}
};

//2nd Base class 
class FourWheeler
{

	public:
		FourWheeler()
		{
			cout<<"This is a four wheeler vehicle"<<endl;
		}
};


//3rd Sub class 

class TwoWheeler
{

	public: 
		TwoWheeler()
		{
			cout<<"This is a two wheeler vehicle"<<endl;
		}
};



// Subclass inheriting from the parent class
class Car : public Vehicle , public FourWheeler
		
{
	public:
		int car_value = 20000;
		int car_distance = 3000;
		int car_fuel = 370;
};

class Ford : public Car
{

public:
	string  Model = "Fusion";
};



class Truck : public Vehicle , public FourWheeler
{
};


class Bike : public Vehicle, public TwoWheeler
{

};

// Main function

int main()
{
	Car car_obj;
	Truck truck_obj;
	Bike bike_obj;
	Ford ford_obj;
	// Object of child class has all data members and member function of parent

	//car_obj.car_value;
	//car_obj.car_distance;
	cout<<"Car value="<<car_obj.car_value<<endl;
	cout<<"car distance = "<<car_obj.car_distance<<endl;
	cout<<"Ford model is "<<ford_obj.Model<<endl;
	return 0;
}


