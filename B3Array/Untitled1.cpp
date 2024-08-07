#include <iostream>
#include <conio.h>

int main(){
	
	int numbers[] = {1,2,3,4,5};
	int plus;
	
	
	for(int i = 0;i<5;i++){
		
		plus += numbers[i];
		
	}
		
	std::cout<<plus;
	

	getch();
	return 0;
}
