#include<iostream>

#include<stdio.h>
using namespace std;

extern int *readNumbers();
extern int secondSmallestSum(int *numbers,int length);
int main(){
    int* a=readNumbers();
    cout<<secondSmallestSum(a,4)<<endl;
delete[]a;

}