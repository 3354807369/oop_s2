#include<iostream>
using namespace std;
void transform(int number){
	int i,j=0;
	int a[1000];
	i=number;
	while(i)
	{
		a[j]=i%2;
		i/=2;
		j++;
	}
	for(i=j-1;i>=0;i--){
		cout<<a[i];
		
	}
	cout<<endl;
}
int main(){
	int number=75;
	transform(number);
}