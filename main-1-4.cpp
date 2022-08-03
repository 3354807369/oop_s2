#include<iostream>

extern void print_scaled(int array[3][3],int scale);

int main(){
	int array[3][3]={{1,2,3},{3,4,5},{4,5,6}};
	int number=3;
	print_scaled(array,number);
}