#include <iostream>
#include <time.h>
#include <stdlib.h>

int main(){
	
	int number,random,trys = 0;
	
	srand(time(NULL));
	random = 0 + rand()%(10);
	
	do{
		
		if (number == NULL){
		std::cout<<"i need a number"<<std::endl;
		std::cin>>number;
		}
		
		if (number!=random){
			std::cout<<"other number"<<std::endl;
			std::cin>>number;
		}
		
	}while(number!=random);
	
	std::cout<<"you've won"<<std::endl;
	

	system("pause");
	return 0;
}




