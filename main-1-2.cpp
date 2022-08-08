#include<iostream>
#include<string>
extern  void print_class(std::string courses[4], std::string students[], int report_card[][4], int nstudents);

int main(){
	std::string courses[4]={"math","chinese","english","PE"};
	std::string students[5]={"A","B","C","D","E"};
	int report_card[5][4]={{50,78,66,75},{90,98,95,97},{56,32,43,53},{12,32,24,21},{0,0,0,0}};
	int n=5;
	print_class(courses,students,report_card,n);
}