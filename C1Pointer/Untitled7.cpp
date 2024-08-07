#include <iostream>

using namespace std;

void pointer(int a);

int main(){
	
	int num = 10;
	
	pointer(num);
	
	
	
	return 0;
}

void pointer(int a){
	cout<<&a<<endl;
}
