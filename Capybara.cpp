#include "Capybara.h"
#include<iostream>
using namespace std;
Capybara::Capybara(){
    
}
void Capybara::setName(string capyName){
     name=capyName;
}
string Capybara::getName(){
    return name;
}
void Capybara::setAge(int capyAge){
    age=capyAge;
}
int Capybara::getAge(){
    return age;
}