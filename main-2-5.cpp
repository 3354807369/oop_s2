#include<iostream>
using namespace std;
int main(){
	int array[2][5]={{1,2,3,4,5},{1,2,3,4,5}};
	int (*p)[5];
	p=array;
	for(int i=0;i<2;i++){
		for(int j=0;j<5;j++)
		cout<<*(*(p+i)+j)<<" ";
	  cout<<endl;
	}
      
}