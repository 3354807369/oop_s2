#include <iostream>
#include <string>

using namespace std;
int* readNumbers() {
  //int array[10] = {0};
  int* array = new int[9];
  for (int i = 0; i < 9; i++) {
    cin >> *(array+i);
  }
  return array;
}
void printNumbers(int* numbers, int length) {
  for (int i = 0; i < length; i++) {
    cout << i << " " << *(numbers+i) << "\n";
  }
}