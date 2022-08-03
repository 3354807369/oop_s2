#include<iostream>
extern int sum_min_max(int integers[], int length);
extern int array_min(int integers[], int length);
extern int array_max(int integers[], int length);
using namespace std;
int main(){
	int array[3]={2,1,3};
	cout<<sum_min_max(array,3)<<endl;
	
}