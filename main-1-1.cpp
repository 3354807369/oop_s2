#include<iostream>

extern void string_2d_copy(std::string first[][2], std::string second[][2], int n);

int main(){
    std::string b[3][2]={"ab","cd","ef"};
	std::string a[3][2];
	string_2d_copy(b,a,3);
}