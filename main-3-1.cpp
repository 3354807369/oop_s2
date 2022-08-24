#include<iostream>
using namespace std;
extern int integers_in_range(int vals[], int length, int bottom, int top);

int main(){
	int vals1[]={1,7,3,4,6,5,2};
	int res=integers_in_range(vals1,7,1,7);


    int vals2[]={1,7,3,5};
	 res=integers_in_range(vals2,4,1,3);



}