#include<iostream>
#include"Unit.h"
using namespace std;
int main(){
    Unit *e=new Unit(1000,2,30);
    cout<<e->get_value()<<" ";
    cout<<e->get_num_bedrooms()<<" ";
    cout<<e->get_area()<<" ";
}