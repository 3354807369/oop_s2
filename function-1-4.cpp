#include<iostream>

void copy_doubles(double *old_array,double *new_array,int length){
		double*p1;
	p1=&old_array[0];
	double *p2;
	p2=&new_array[0];
	for(int i=0;i<length;i++){
		*(p2+i)=*(p1+i);
		
	}
	
}