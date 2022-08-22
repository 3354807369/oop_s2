#include<iostream>

int max_sub_sum(int *nums,int length){
	int a=0;
	int max=0;
	for(int i=0;i<length;i++){
		if(*(nums+i)>=0){
			a++;
		}
	}
	if(a>0){
	int sum=0;
	
	for(int i=0;i<length;i++){
		
		if(sum<=0){
			sum=*(nums+i);
		}else{
			sum+=*(nums+i);
		}
		if(sum>max){
		max=sum;
	}
	
	}
	}
	if(a==0){
		return 0;
	}
	
	return max;
}