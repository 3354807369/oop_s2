#include<iostream>

bool is_array_palindrome(int integers[], int length){
	if(length<1){
		return false;
	}
	int j=0;
	for(int i=length-1;i>length/2;i--){
		if(integers[j]!=integers[i]){
			return false;
		}
		j++;
	}
	return true;
}

int sum_integers(int integers[], int length){
	if(length<1){
		return -1;
	}
	int a=0;
	for(int i=0;i<length;i++){
         	a=a+integers[i];
	}
	return a;
}

int palindrome_sum(int integers[], int length){
	if(length<1){
		return -1;
	}
	int a=0;
	int b=0;
	a=is_array_palindrome(integers,length);
	if(a==0){
		return -2;
	}
	
	if(a==1){
		b=sum_integers(integers,length);
		
	}
	return b;
}