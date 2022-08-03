#include<iostream>

extern void print_scaled(int array[3][3],int scale);

int main(){
	int array[3][3]={1,0,0,0,1,0,0,93,0};
	int number=7;
	print_scaled(array,number);
}