#include<iostream>

void copy_doubles(double *old_array,double *new_array,int length){
		double*p1=old_array;
	double *p2=new_array;
	for(int i=0;i<length;i++){
		*(p2+i)=*(p1+i);
		
	}
	
}