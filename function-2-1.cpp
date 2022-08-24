#include<iostream>
using namespace std;
int fishing_fine_lookup(int over){
	int a=0;
	if(over<=0){
		a=0;
	}
	if(over>0&&over<10){
		a=180;
	}
	if(over>=10&&over<20){
		a=406;
	}
	if(over>=20&&over<30){
		a=825;
	}
	if(over>=30&&over<45){
		a=1500;
	}
	if(over>=45){
		a=1690;
	}
	return a;
}