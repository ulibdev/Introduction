#include <iostream>
#include <stdlib.h>

using namespace std;

void needNumbers();
void writeNumbers();

int num,*dNum;

int main(){
	
	needNumbers();
	writeNumbers();
	
	
	delete[] dNum;
	
	return 0;
}

void needNumbers(){
	cout<<"Numbers: ";
	cin>>num;
	
	dNum = new int[num];
	for(int i = 0;i<num;i++){
		cout << "Number " <<"("<< (i+1) <<"):";
		cin>>dNum[i];
	}
}
void writeNumbers(){
	cout<<"numbers:"<<endl;
	for(int i = 0;i<num;i++){
		cout<<dNum[i]<<endl;
	}
}

