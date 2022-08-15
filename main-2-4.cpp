#include<iostream>
using namespace std;
float multiply_op(float, float);
extern float arithmetic_ops(float left, float right, float (*op)(float,float));
int main(){
	float (*op)(float,float);
	float left=2;
	float right=3;
	op=multiply_op;
	cout<<arithmetic_ops(left,right,op)<<endl;
}