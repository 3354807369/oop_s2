#include<iostream>
using namespace std;
extern void multiples_of_seven(int *nums,int length);
int main(){
    int a[3]={1,7,14};
	multiples_of_seven(a,3);
}