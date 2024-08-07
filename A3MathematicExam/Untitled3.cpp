#include <iostream>

int main(){
	
	int a,b,c,res;
	 
	
	std::cout << "A:"; std::cin >> a;
	std::cout << "B:"; std::cin >> b;
	std::cout << "C:"; std::cin >> c;
	
	res = (a+b+c)/3;
	
	std::cout<<"Your calification in the exam is " << res;
	
	return 0;	
}
