#ifndef AIRPLANE_H
#define AIRPLANE_H
class Airplane{
   Airplane();                       
Airplane(int w, int p);           // Create Airplane with weight w and passengers p

int numPassengers;               // number of passengers on the Airplane

void reducePassengers(int x);     // reduce passenger list by x
int get_numPassengers();  
};
#endif