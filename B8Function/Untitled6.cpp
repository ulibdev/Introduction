#include <iostream>

using namespace std;

int plusing(int x, int y);


int main(){
	
	int number = plusing(2,3);
	cout<<number;
	
	return 0;
}

int plusing(int x, int y){
	
	int res = x + y;
	
	return res;
}
