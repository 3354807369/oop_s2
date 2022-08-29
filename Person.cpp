#include<iostream>
#include"Person.h"
using namespace std;
Person::Person(int mySalary,string myName){
   a=mySalary;
   b=myName;
}
void Person::setName(string c){
    b=c;
}
string Person::getName(){
    return b;
}
void Person::setSalary(int d){
     a=d;
}
int Person::getSalary(){
    return a;
}
