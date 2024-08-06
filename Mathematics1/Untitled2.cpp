#include <iostream>

int main(){
	
	float a = 1.0f, b = 2.0f, c = 24.0f , d = 10.0f, res;
	
	res = (a + b)/ (c+d);
	
	std::cout.precision(2);
	
	std::cout<<res;
	
	return 0;
}
