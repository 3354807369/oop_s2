#include"Orchestra.h"
#include<iostream>
using namespace std;
Orchestra::Orchestra() {
}
Orchestra::Orchestra(int size) {
 a = size;
}
int Orchestra::get_current_number_of_members() {
 return b;
}
bool Orchestra::has_instrument(std::string instrument){
 for (int i = 0; i < a; i++) {
    
  if (people[i].get_instrument() == instrument)
   return true;
 }
 return false;
}
Musician* Orchestra::get_members() {
 return people;
}
bool Orchestra::add_musician(Musician new_musician) {
 if (b < a) {
  people[b] = new_musician;
  b++;
  return true;
 }
 else {
  return false;
 }

}
Orchestra::~Orchestra() {
}