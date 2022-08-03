#include<iostream>

int array_min(int integers[], int length){
	int a=integers[0];
	for(int i=0;i<length;i++){
		if(a>integers[i]){
			a=integers[i];
		}
	}
	return a;
}

int array_max(int integers[], int length){
	int b=integers[0];
	for(int i=0;i<length;i++){
		if(b<integers[i]){
			b=integers[i];
		}
	}
	return b;
}

int sum_min_max(int integers[], int length){
	int sum=0;
	int a=array_min(integers,length);
	int b=array_max(integers,length);
	sum=a+b;
	return sum;
}