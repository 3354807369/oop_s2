#include<iostream>

void string_2d_copy(std::string first[][2], std::string second[][2], int n){
	for(int i=0;i<n;i++){
		for(int j=0;j<2;j++){
			second[i][j]=first[i][j];
		}
	}
	if(n%2==0){
	for(int i=0;i<n/2;i++){
		for(int j=0;j<2;j++){
			std::cout<<second[i][j];
			
		}
		
	}
	std::cout<<std::endl;
	}
	if(n%2!=0){
		for(int i=0;i<n/2+1;i++){
			if(i==n-2){
			for(int j=0;j<1;j++){
				
				std::cout<<second[i][j];
			}
			}else{
				for(int j=0;j<2;j++){
				
				std::cout<<second[i][j];
			}
			}
		}
		std::cout<<std::endl;
	}
	
	
}
