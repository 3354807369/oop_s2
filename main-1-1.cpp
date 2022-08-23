#include<iostream>
extern void printNumbers(int *numbers,int length) ;
extern int *readNumbers() ;
using namespace std;
int main(){
	int *p=readNumbers();
	
		
	printNumbers(p,10);
	return 0;
}