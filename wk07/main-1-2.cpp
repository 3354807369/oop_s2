#include"Orchestra.h"
#include<iostream>
using namespace std;
int main() {
 Musician t1("jnn", 123);
 Musician t2("jnne", 122);
 Musician t3("jnne", 123);
 Musician t4("jnnd", 122);
 Musician t5("jnns", 124);
 Orchestra* i = new Orchestra(5);
 Orchestra(5);
 i->add_musician(t1);
 i->add_musician(t2);
 i->add_musician(t3);
 i->add_musician(t4);
 i->add_musician(t5);
 i->has_instrument("jnne");
 
}