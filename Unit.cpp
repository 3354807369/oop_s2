#include"Unit.h"
#include<iostream>
using namespace std;
Unit::Unit(){
   val=0;
   num=0;
   size=0;
}
Unit::Unit(int unit_val, int num_beds, double unit_size){
    val=unit_val;
    num=num_beds;
    size=unit_size;
}
int Unit::get_num_bedrooms(){
    return num;
}
int Unit::get_value(){
    return val;
}
double Unit::get_area(){
    return size;
}