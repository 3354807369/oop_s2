#include<iostream>
using namespace std;
extern  int *left_shift(int *vals, int len, int amount);

int main(){
	int vals[6]={5,4,3,2,1,1};
	int *sv=left_shift(vals,6,3);
	for(int i=0;i<6;i++){
		cout<<*(sv+i);
	}
	cout<<endl;
}