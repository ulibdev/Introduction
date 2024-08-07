#include <iostream>
#include <math.h>

using namespace std;

int main(){
	
	float a,b,c,plus,less;
	
	cout<<"A:";cin>>a;
	cout<<"B:";cin>>b;
	cout<<"C:";cin>>c;
	
	plus = (-b + sqrt(pow(b,2)+4*a*c))/(2*a);
	less = (-b - sqrt(pow(b,2)+4*a*c))/(2*a);
	
	cout<<"Plus:"<<plus<<endl;
	cout<<"Less:"<<less;
	
	return 0;
}






