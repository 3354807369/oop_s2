#include"Unit.h"
#include<iostream>
using namespace std;
Unit::Unit(){
   val=0;
   num=0;
   size=0;
}
Unit::Unit(int unit_val, int num_beds, double unit_size){
    if(unit_val<0){
        val=0;
    }
    if(num_beds<0){
        num=0;
    }
    if(unit_size){
        size=0;
    }
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