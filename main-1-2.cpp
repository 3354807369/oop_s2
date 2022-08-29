#include<iostream>
#include"Person.h"
using namespace std;
int main(){
    Person *r=new Person(100,"abc");
    r->setName("efg");
    cout<<r->getName();
    r->setSalary(10000);
    cout<<r->getSalary()<<endl;
}