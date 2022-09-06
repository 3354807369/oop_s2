#include <iostream>
#include <string>

#include "Wagon.h"
using namespace std;

int main() {
  // 5 obejct of wagon
  Capybara c1;
  Capybara c2;
  Capybara c3;
  Capybara c4;
  Capybara c5;
  c1.setName("A");
  c1.setAge(1);
  c2.setName("B");
  c2.setAge(2);
  c3.setName("C");
  c3.setAge(3);
  c4.setName("D");
  c4.setAge(4);
  c5.setName("E");
  c5.setAge(5);
 

  Wagon c;
  c.addCapybara(c1);
  c.addCapybara(c2);
  c.addCapybara(c3);
  c.addCapybara(c4);
  c.addCapybara(c5);

  c.printCapybaras();

  //for (int i = 0; i <= 4; i++) {
    //if (c.addCapybara()) {
      //cout << "The capybara added successfully" << endl;
    //} else {
      //cout << "Capybara is full" << endl;
    //}
  //}
  
  return 0;
}