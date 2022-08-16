#include<iostream>
using namespace std;
void copy_integers(int old_array[],int new_array[],int length){
	int *p1;
	p1=&old_array[0];
	int *p2;
	p2=&new_array[0];
	for(int i=0;i<length;i++){
		*(p2+i)=*(p1+i);
		
	}
	
	
	
}