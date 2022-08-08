#include<iostream>
#include<math.h>
using namespace std;
void add(int array_a,int array_b){
	int num=0;
	for(int i=0;array_a!=0;++i)
	{    
        int d=0;
		d=array_a%10;
		num=(d)*(pow(2,i))+num;
		array_a=array_a/10;
	}
		int num2=0;
	for(int i=0;array_b!=0;++i)
	{    
        int a=0;
		a=array_b%10;
		num2=(a)*(pow(2,i))+num2;
		array_b=array_b/10;
	}
        
		int number=0;
	number=num+num2;
	int b,c=0;
	int f[1000];
	b=number;
	while(b)
	{
		f[c]=b%2;
		b/=2;
		c++;
	}
	for(b=c-1;b>=0;b--){
		cout<<f[b];
		
	}
}
int main(){
	int a=1001011;
	int b=1001011;
	add(a,b);
	cout<<endl;
}