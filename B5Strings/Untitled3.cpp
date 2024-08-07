#include <iostream>
#include <string.h>

int main(){
	char name[10];
	
	std::cout<<"Name:";
	std::cin.getline(name,6,'\n');
	std::cout<<name<<std::endl;
	
	return 0;
}
