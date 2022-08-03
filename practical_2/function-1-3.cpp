#include<iostream>
using namespace std;
void count_digits(int array[4][4]){
	for(int a=0;a<10;a++){
		int number=0;
		for(int i=0;i<4;i++){
			for(int j=0;j<4;j++){
				if(a==array[i][j])
					number++;
			}
		}
		cout<<a;
		cout<<':';
		cout<<number;
		cout<<';';
	}
	cout<<endl;
}