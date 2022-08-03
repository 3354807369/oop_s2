#include<iostream>

bool is_palindrome(int integers[], int length){
	int j=0;
	for(int i=length-1;i>=length/2;i--){
		if(integers[i]!=integers[j]){
			return false;
		}
		      j++;   
	}
		return true;
}

int sum_array_elements(int integers[], int length){
	int sum=0;
	for(int i=0;i<length;i++){
		sum=integers[i]+sum;
	}
	return sum;
}

int sum_if_palindrome(int integers[], int length){
	int a=is_palindrome(integers,length);
	int sum=0;
	if(length<1)
		return 0;
	if(a==0)
		return -2;
	
	if(a==1)
		int sum=0;
	
		sum=sum_array_elements(integers,length);
		return sum;
	
}