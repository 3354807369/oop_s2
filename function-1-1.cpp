#include<iostream>
extern int* left_shift(int* vals, int len, int amount);
using namespace std;

int* left_shift(int* vals, int len, int amount) {
 int* array = new int[6];
 for (int i = 0, j = amount; j < len; i++, j++) {
  array[i] = vals[j];
  array[j] = 0;
 }