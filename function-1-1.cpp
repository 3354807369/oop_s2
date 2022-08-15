#include<iostream>

int size_of_variable_star_t() {
  int *t = new int[3];
  delete [] t;
  return sizeof(t);
}