#include<iostream>
#include<stdio.h>
using namespace std;
int* readNumbers() {
	int* a = new int[4];
	for (int i = 0; i < 4; i++) {
		cin >> *(a+i);
	}
	return a;
}
int secondSmallestSum(int *numbers, int length) {
    int *sums=new int[1000];
    int m=0;
    for (int i=0;i<length;i++) {
        int sum=0;
        for (int j=0;j<length-i;j++) {
            sum=sum+*(numbers+(i+j));
            *(sums+(m++))=sum;
        }
    }
  int min1;
  int min2;
  int a=0;
  for(int i=1;i<=length;i++){
     a+=i;
  }
    if(*(sums+0)<*(sums+1)){
        min1=*(sums+0);
        min2=*(sums+1);
    }else{
        min1=*(sums+1);
        min2=*(sums+0);
    }
    for(int i=2;i<a;i++){
        if(min1>*(sums+i)){
            min2=min1;
            min1=*(sums+i);
        }else if(*(sums+i)<min2){
            min2=*(sums+i);
        }

    }
  
    return min2;
}