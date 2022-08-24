#include<iostream>

 int *left_shift(int *vals, int len, int amount){
    for(int i=0;i<len;i++){
		if(*(vals+i)==amount){
			for(int j=1;j<len-i;j++){
			*(vals+j-1)=*(vals+i+j);
		    *(vals+i+j)=0;
			}
		}
	}
	return vals;
 }