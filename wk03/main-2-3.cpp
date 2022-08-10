#include<iostream>

using namespace std;
int main(){
	int a;
	int *num1;
	a=42;
	num1=&a;
	
	cout<<*num1+5<<endl;
	cout<<*num1+5-2<<endl;
	return 0;
}