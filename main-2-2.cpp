#include"Airplane.h"
#include<iostream>
#include<string>
using namespace std;
int main(){
    Person a1(500,"abc");
    Person b1(300,"bcd");
    Person c1(400,"cde");
    Airplane p("Ab",a1,b1);
    p.printDetails();
    return 0;
}