#include <iostream>

using namespace std;
int main(){
	
	int numbers[100][100],a,b;
	
	cout<<"A: ";cin>>a;
	cout<<"B: ";cin>>b;
	
	for (int i=0;i<a;i++){
		for(int j=0;j<b;j++){
			cout<<"number in position["<<i<<"]["<<j<<"]";
			cin>>numbers[i][j];	
		}
	}
	
	for (int i=0;i<a;i++){
		for(int j=0;j<b;j++){
			cout<<numbers[i][j];
		}
		cout<<endl;
	}
	
	
	return 0;
}
