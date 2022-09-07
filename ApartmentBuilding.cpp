#include"ApartmentBuilding.h"
#include<iostream>
using namespace std;
ApartmentBuilding::ApartmentBuilding(){

}
ApartmentBuilding::ApartmentBuilding(int capacity){
    cap=capacity;
}
int ApartmentBuilding::get_capacity(){
    return cap;
}
int ApartmentBuilding::get_current_number_of_units(){
    return a;
}
Unit * ApartmentBuilding::get_contents(){
     return array;
    
}
bool ApartmentBuilding::add_unit(Unit unit){
    a=0;
    
    if(a<cap){
        array[a]=unit;
        a++;
       
        return true;
    }
    
    
    return false;
    
     
} 
ApartmentBuilding::~ApartmentBuilding(){

}