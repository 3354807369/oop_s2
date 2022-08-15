#include<iostream>
int size_of_array_arr() {
    int *arr = new int[3];
    delete [] arr;
    return *arr;
}