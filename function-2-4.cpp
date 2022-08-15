#include<iostream>
float add_op(float left, float right){
	float a=left+right;
	return a;
}

float subtract_op(float left, float right){
	float a=left-right;
	return a;
}
float multiply_op(float left, float right){
	float a=left*right;
	return a;
}

float arithmetic_ops(float left, float right, float (*op)(float,float))
{
	
    return (*op)(left, right);
}