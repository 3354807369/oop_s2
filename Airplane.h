#ifndef AIRPLANE_H
#define AIRPLANE_H
#include<iostream>
#include<string>
#include"Person.h"
using namespace std;
class Airplane{
    public:
    // a pilot and copilot must be provided when creating an airplane
     Airplane(string callsign, Person thePilot, Person theCoPilot);
     void setPilot(Person thePilot);      // change the pilot
     Person getPilot();
     void setCoPilot(Person theCoPilot);  // change the co-pilot
     Person getCoPilot();
     void printDetails();                 // print the callsign, a new line, the pilot name,
                                     // a new line, the co-pilot name and a final newline.
     protected:
     string thecallsign;
     Person pilot;
     Person copilot;
};
#endif