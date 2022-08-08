#include<iostream>
#include<string>
void print_binary_str(std::string decimal_number){
	int number=stoi(decimal_number);
	int i,j=0;
	int a[8];
	i=number;
	while(i)
	{
		a[j]=i%2;
		i/=2;
		j++;
	}
	for(i=j-1;i>=0;i--){
		std::cout<<a[i];
		
	}
	std::cout<<std::endl;
}