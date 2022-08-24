#include<iostream>
using namespace std;
extern int integers_in_range(int vals[], int length, int bottom, int top);

int main(){
	int vals[]={1,7,3,4,6,5,2};
	int res=integers_in_range(vals,7,2,6);
	cout<<res<<endl;
	int val[]={3,5,2,4,3};
	int ress=integers_in_range(vals,5,2,4);
	cout<<ress<<endl;
}