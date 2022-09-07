#ifndef UNIT_H
#define UNIT_H
#include<iostream>
using namespace std;
class Unit{
    public:
    Unit();                                               // a default constructor 
                                                  // a default constructor 
    Unit(int unit_val, int num_beds, double unit_size);   // a constructor that takes: the value in dollars,
                                  // returns the number of square meters in the unit);   // a constructor that takes: the value in dollars,
                                                      // number of bedrooms, and number of square meters as parameters

    int get_num_bedrooms();                               // returns the number of bedrooms for the unit
    int get_value();                                      // returns the value in dollars of the Unit
    double get_area();                                    // returns the number of square meters in the unit
    private:
    int num;
    int val;
    double size;
};
#endif