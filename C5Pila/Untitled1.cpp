#include <iostream>
#include <conio.h>
using namespace std;


struct Node{
	char letter;
	Node *next;
};

void addPila(Node *&pila,char);
void quitPila(Node *&pila,char &);


int main(){
	Node *pila = NULL;
	char a = 'a', b = 'b', c = 'c';
	addPila(pila,a);
	addPila(pila,c);
	addPila(pila,b);
	
	
	while(pila != NULL){
		quitPila(pila,a);
		if (pila != NULL){
			cout<<",";
		}else{
			cout<<".";
		}
	}
	
	getch();
	return 0;
}

void addPila(Node *&pila,char a){
	Node *new_node = new Node;
	new_node->letter = a;
	new_node->next = pila;
	pila = new_node;

}

void quitPila(Node *&pila,char &a){
	Node *aux = pila;
	a = aux->letter;
	pila = aux->next;
	delete aux;

}
