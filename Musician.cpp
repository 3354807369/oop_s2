#include"Musician.h"
#include<iostream>
using namespace std;
Musician::Musician(string instrument, int experience){
    ins=instrument;
    ex=experience;
}
string Musician::get_instrument(){
    return ins;
}
int Musician::get_experience(){
    return ex;
}
