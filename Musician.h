#ifndef MUSICIAN_H
#define MUSICIAN_H
#include<iostream>
using namespace std;
class Musician{
    public:
    Musician();                  // a default constructor 
    // a constructor that takes the instrument played and the years of experience
    Musician(string instrument, int experience);      
    string get_instrument();    // returns the instrument played
    int get_experience();       // returns the number of years experience
    private:
    int ex;
    string ins;
};
#endif