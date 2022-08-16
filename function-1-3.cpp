#include<iostream>
using namespace std;
void copy_integers(int old_array[],int new_array[],int length){
	int *p1;
	int *p2;
	for(int i=0;i<length;i++){
		
		p1=old_array;
		p2=new_array;
		*p1=*p2;
		*p1++;
		*p2++;
	}
	*p1='\0';
	
}