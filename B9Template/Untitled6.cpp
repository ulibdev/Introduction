#include <iostream>

using namespace std;

template <class Element>
double absoluting(Element x);


int main(){
	
	int numberi = absoluting(-2);
	double numberd = absoluting(-2.363);
	float numberf = absoluting(-2.214);
	
	cout<<numberi<<endl;
	cout<<numberd<<endl;
	cout<<numberf<<endl;
	
	return 0;
}

template <class Element>
double absoluting(Element x){
	if (x < 0){
		x *= -1;
	}
	return x;
}
