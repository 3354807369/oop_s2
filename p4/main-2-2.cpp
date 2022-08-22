#include<iostream>
using namespace std;
extern int max_sub_sum(int *nums,int length) ;

int main(){
	int a[10]={-31,-41,-59,-26,-53,-58,-97,1,-23,-84};
	cout<<max_sub_sum(a,10)<<endl;
}