#include <iostream>


int main(){
	
	int a,b;
	
	std::cout<<"A:";std::cin>>a;
	std::cout<<"B:";std::cin>>b;
	
	
	if(a<b){
		std::cout<<"B win";
	}		
	else if(a==b){
		std::cout<<"No wins";
	}
	else{
	std::cout<<"A win";
	}
		
	
	return 0;
}

