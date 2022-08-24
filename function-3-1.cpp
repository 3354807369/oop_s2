#include<iostream>

int integers_in_range(int vals[], int length, int bottom, int top){
	int res=0;
	for(int i=0;i<length;i++){
		if(i>=bottom-1&&i<=top-1){
			res++;
		}
	}
	return res;	  
	}
	
