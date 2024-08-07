#include <iostream>
#include <conio.h>

using namespace std;

struct strA{
	char a[30];
	char b[30];
};

struct strB{
	char a[20];
	struct strA dstrA;
}spaces[2];

int main(){
	
	for(int i=0;i<2;i++){
		fflush(stdin);
		cin.getline(spaces[i].a,30,'\n');
		cin.getline(spaces[i].dstrA.a,30,'\n');
		cin.getline(spaces[i].dstrA.b,30,'\n');
	}
	
	for(int i=0;i<2;i++){
		cout<<spaces[i].a<<endl;
		cout<<spaces[i].dstrA.a<<endl;
		cout<<spaces[i].dstrA.b<<endl;
	}
	
}
