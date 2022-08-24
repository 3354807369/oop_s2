#include<iostream>

int integers_in_range(int vals[], int length, int bottom, int top){
	int a=0;
	for(int i=0;i<length;i++){
		if(i==bottom-1){
			for(int j=i;j<top;j++){
				a++;
			}
		}
	}
	return a;	  
	}
	
