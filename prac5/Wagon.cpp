#include<iostream>
#include"Wagon.h"
#include<string>
using namespace std;
Wagon::Wagon(){
    a=0;
}
bool Wagon::addCapybara(Capybara newCapy){
if(a>=4){
    return false;
    
}
   animal[a]=newCapy;
   a++;
   return true;
    
 
}
void Wagon::emptyWagon(){
     a=0;
}
void Wagon::printCapybaras(){
    for(int i=0;i<a;i++){
        cout<<animal[i].getName()<<" "<<animal[i].getAge()<<endl;
    }
    
}