#include<iostream>
extern float add_op(float left, float right);
extern float subtract_op(float left, float right);
extern float arithmetic_ops(float left, float right, std::string op);

int main(){
	int left=5;
	int right=4;
	std::string op="subtract";
	std::cout<<arithmetic_ops(left,right,op)<<std::endl;
}