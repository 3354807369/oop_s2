#ifndef APARTMENTBUILDING_H
#define APARTMENTBUILDING_H
#include"Unit.h"
class ApartmentBuilding{
    public:
    ApartmentBuilding();  // default constructor allocates capacity for 10 units
ApartmentBuilding(int capacity);  // constructor for ApartmentBuilding with given num units
int get_capacity();  // returns the  number of units allowed

// returns the current number of units in the apartment building
int get_current_number_of_units(); 

// returns a dynamic array of the units in the apartment building
Unit * get_contents();

// returns true and adds unit to the condo if there is sufficient space
// otherwise returns false
bool add_unit(Unit unit);

// destructor
~ApartmentBuilding();
private:
int cap;
int number;
Unit array[1000];
int a;
};
#endif