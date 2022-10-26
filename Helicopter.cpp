#include"Helicopter.h"
#include"AirCraft.h"
#include<iostream>
using namespace std;
Helicopter::Helicopter(int w,string n){
     w=weight;
     heliID++;
}
void AirCraft::fly(int h,int min){
     int a=weight/5670;
     int b=0;
     for(int i=0;i<a;i++){
          b++;
     }
     if(h>=40){
          
     fuel=fuel-(0.2-(h/100)-(b*0.01))*min;
     }
     if(h<40){
          fuel=fuel-(0.2-(b*0.01))*min;
     }
}
