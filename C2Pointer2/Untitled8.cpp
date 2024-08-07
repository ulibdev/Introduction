#include <iostream>

using namespace std;

int main(){
	int num, *dir_num;
	
	cout<<"Number:";cin>>num;
	
	dir_num = &num;
	
	if(*dir_num%2==0){
		cout<<"the number is even";
	}else{
		cout<<"the number is odd";
	}
	
	
	return 0;
}
