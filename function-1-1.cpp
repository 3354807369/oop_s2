#include<iostream>

 int *left_shift(int *vals, int len, int amount){
    int* array=new int[6];
	int j=amount;
    for(int i=0;i<len;i++){
	if(i>=amount){
			array[i]=vals[j];
			array[j]=0;
	}
	}
	return array;
 }