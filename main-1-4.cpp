#include<iostream>
using namespace std;
extern void copy_doubles(double *old_array,double *new_array,int length);

int main(){
	double a[5]={1,2,3,4,5};
	double b[5];
	copy_doubles(a,b,5);
	for(int i=0;i<5;i++){
	
		cout<<b[i];
	
	}
	cout<<endl;
}