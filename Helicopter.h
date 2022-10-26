#ifndef HELICOPTER_H
#define HELICOPTER_H
#include<iostream>
#include "AirCraft.h"
using namespace std;
class Helicopter:public AirCraft{
Helicopter(int w, string n);     // creates a Helicopter with weight w and name n

string name;                    // name of the Helicopter
int craftID;
static int heliID;

};
#endif