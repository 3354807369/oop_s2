#ifndef CAPYBARA_H
#define CAPYBARA_H
#include<iostream>

using namespace std;

class Capybara{
    public:
    string name;
    int age;
    Capybara();                     // no name or age is required to create a Capybara
    void setName(string capyName);   // change the capybara's name
    string getName();
    void setAge(int capyAge);        // change the capybara's age
    int getAge();

};
#endif