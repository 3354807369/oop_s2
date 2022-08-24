#include<string>
#include<iostream>
extern int integers_in_range(int vals[], int length, int bottom, int top);
using namespace std;

int integers_in_range(int vals[], int length, int bottom, int top) {
 int index = 0;
 for (int i = 0; i < length; i++) {
  if (vals[i] >= bottom && vals[i] <= top) {
   index++;
  }
 }
 return index;
}