#include"ApartmentBuilding.h"
#include<iostream>
using namespace std;
int main(){
     ApartmentBuilding *b=new ApartmentBuilding(5);
    Unit t1(1000,2,30);
    Unit t2(2000,3,50);
    Unit t3(4000,2,50);
    Unit t4(5000,3,80);
    Unit t5(3000,1,50);
    Unit t6(2000,1,30);
    ApartmentBuilding(5);
     b->get_capacity();
    b->add_unit(t1);
    b->add_unit(t2);
    b->add_unit(t3);
    b->add_unit(t4);
    b->add_unit(t5);
    b->add_unit(t6);
    b->get_contents();
    b->get_current_number_of_units();
    
}