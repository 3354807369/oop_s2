#include<iostream>
#include<math.h>
using namespace std;
extern int binary_to_int(int binary_digits[], int number_of_digits);

int main(){
	int array[7]={1,0,0,1,0,1,1};
	cout<<binary_to_int(array,7)<<endl;
}