#include<iostream>
#include<math.h>
int binary_to_int(int binary_digits[], int number_of_digits){
	int sum=0;
	int j=0;
	int a=number_of_digits;
	for(int i=a-1;i>=0;i--){
		
		sum=binary_digits[j]*(pow(2,i))+sum;
		j++;
	}
	return sum;
}