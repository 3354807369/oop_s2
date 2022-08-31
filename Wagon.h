#ifndef WAGON_H
#define WAGON_H
using namespace std;
#include"Capybara.h"
#include<iostream>

class Wagon:public Capybara{
    
    public:
  Wagon();                               // create an empty wagonobject
bool addCapybara(Capybara newCapy);    // adds a Capybara to the wagon, returns false if full
void emptyWagon();                     // remove all Capybaras from the wagon
void printCapybaras();                 // print the name, a space, the age, then a new line
protected:
Capybara animal[4];
int a;
};
#endif