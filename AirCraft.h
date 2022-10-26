
#pragma once
#include<string>
using namespace std;
class AirCraft
{
public:
	AirCraft(int w); 
	virtual void fly(int headwind, int minutes)=0;
	void set_weight(int w);
	int get_weight();
	void set_fuel(float f);
	float get_fuel();
	void set_numberOfFlights(int n);
	int get_numberOfFlights();
	int weight;                 
	float fuel=100;                  
	int numberOfFlights = 0;;
	void refuel();
    
};

