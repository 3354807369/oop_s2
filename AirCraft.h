#ifndef AIRCRAFT_H
#define AIRCRAFT_H

class AirCraft{
    public:
AirCraft(int w);
int weight;
float fuel;
int numberOfFlights;
void refuel();
void set_fuel(float f); 
float get_fuel();
virtual void fly(int headwind, int minutes) = 0 ;
float f;
};
#endif