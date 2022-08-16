#include<iostream>

extern void copy_integers(int old_array[],int new_array[],int length);

int main(){
	int a[5]={1,2,3,4,5};
	int b[5];
	copy_integers(a,b,5);
}