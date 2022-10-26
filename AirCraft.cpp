#include"AirCraft.h"

AirCraft::AirCraft(int w){
   w=weight;
}
void AirCraft::refuel(){
   fuel=100;
}
void AirCraft::set_fuel(float f){
   f=fuel;
   
}
float AirCraft::get_fuel(){
   return f;
}
AirCraft::~AirCraft(){

}
