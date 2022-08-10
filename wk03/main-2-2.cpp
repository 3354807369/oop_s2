#include<iostream>

using namespace std;
int main(){
	int a;
	int *num1;
	a=5;
	num1=&a;
	cout<<num1<<endl;
	cout<<*num1<<endl;
	return 0;
}