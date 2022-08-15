#include<iostream>

float add_op(float left, float right){
	float a=left+right;
	return a;
}

float subtract_op(float left, float right){
	float a=left-right;
	return a;
}
float arithmetic_ops(float left, float right, std::string op){
	float a=0;
	if(op=="+"){
		 a=add_op(left,right);
	}else if(op=="-"){
		 a=subtract_op(left,right);
	}
	return a;
}