#include<iostream>

 int *left_shift(int *vals, int len, int amount){
    for(int i=0;i<len;i++){
		
			
			*(vals+i-amount)=*(vals+i);
		    *(vals+i)=0;
			
		
	}
	return vals;
 }