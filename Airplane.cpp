#include<iostream>
#include "Airplane.h"
#include<string>
using namespace std;

Airplane::Airplane(string callsign, Person thePilot, Person theCoPilot){
    thePilot = Person(0,"a");
    theCoPilot = Person(0,"aa");
    thecallsign=callsign;
    pilot=thePilot;
    copilot=theCoPilot;
}
void Airplane::setPilot(Person thePilot){
    pilot=thePilot;
}
Person Airplane::getPilot(){
    return pilot;
}
void Airplane::setCoPilot(Person theCopilot){
    copilot=theCopilot;
}  
Person Airplane::getCoPilot(){
    return copilot;
}
void Airplane::printDetails(){
    cout<<thecallsign<<" ";
    cout<<pilot.getName()<<"  ";
    cout<<copilot.getName()<<endl;
}