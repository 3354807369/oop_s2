#include<iostream>
#include"Capybara.h"

using namespace std;
int main(){
    Capybara *e = new Capybara;
    e->setName("abc");
    cout<<e->getName()<<endl;
    e->setAge(5);
    cout<<e->getAge()<<endl;

           // change the capybara's age
    
}