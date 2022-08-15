#include<iostream>
#include<math.h>
using namespace std;
int bin_to_int(int binary_digits[], int number_of_digits){
	int a=0;
	int j=0;
	for(int i=number_of_digits-1;i>=0;i--){
		
		a=a+binary_digits[j]*pow(2,i);
		j++;
	    
	}
	
	return a;
}