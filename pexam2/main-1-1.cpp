#include<iostream>
using namespace std;
extern  int *left_shift(int *vals, int len, int amount);

int main(){
	  int vals[]={1,2,3,4,5};
  int *sv=left_shift(vals,5,2);
	for(int i=0;i<5;i++){
		cout<<*(sv+i);
	}
	cout<<endl;
	int vals1[]={5,4,3,2,1,1};
    sv=left_shift(vals1,6,3);
	for(int i=0;i<6;i++){
		cout<<*(sv+i);
	}
	cout<<endl;
}