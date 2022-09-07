#include"Musician.h"
#include<iostream>
using namespace std;
int main(){
    Musician *a=new Musician("aa",30);
    cout<<a->get_instrument()<<" ";
    cout<<a->get_experience()<<endl;
    
}