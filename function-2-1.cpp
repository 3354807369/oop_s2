#include<iostream>

float add_op(float left, float right){
	int a=left+right;
	return a;
}

float subtract_op(float left, float right){
	int a=left-right;
	return a;
}
float arithmetic_ops(float left, float right, std::string op){
	int a=0;
	if(op=="add"){
		 a=add_op(left,right);
	}else if(op=="subtract"){
		 a=subtract_op(left,right);
	}
	return a;
}