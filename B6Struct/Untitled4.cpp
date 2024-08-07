#include<iostream>

using namespace std;

struct Person{
	char name[20];
	int age;
}
Person1 = {"Raul",20},
Person2 = {"Matias",15};



int main(){
	cout<<Person1.age<<endl;
	cout<<Person2.name<<endl;
	
	return 0;
}
