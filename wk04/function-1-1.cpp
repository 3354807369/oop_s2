#include<iostream>

int size_of_variable_star_t() {
	
  int *t = new int;
  
  
  delete [] t;
  
  return sizeof(t);
}