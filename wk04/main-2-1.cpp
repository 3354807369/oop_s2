#include<iostream>
extern float add_op(float left, float right);
extern float subtract_op(float left, float right);
extern float arithmetic_ops(float left, float right, std::string op);

int main(){
	float left=5.5;
	float right=4.3;
	std::string op="-";
	std::cout<<arithmetic_ops(left,right,op)<<std::endl;
}