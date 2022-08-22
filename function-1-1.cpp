#include<iostream>
using namespace std;
int *readNumbers(){
	static int a[10];
	for(int i=0;i<10;i++){
		cin>>a[i];
	}
	return a;
}

void printNumbers(int *numbers,int length){
	
	for(int i=0;i<10;i++){
		cout<<i<<" "<<*(numbers+i)<<endl;
	}
	
	
}