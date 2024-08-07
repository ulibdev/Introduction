#include <iostream>

using namespace std;

struct Node{
    int num;
    Node *next;
};

void addPila(Node *&pila, int n);
void quitPila(Node *&pila, int &n);

int main(){
    Node *pila = NULL;
    int n1, n2, aux;
    
    cout << "Ingrese un numero: ";
    cin >> n1;
    cout << "Ingrese un numero: ";
    cin >> n2;
    addPila(pila, n1);
    addPila(pila, n2);

    cout << "Elementos de la pila en el orden en que se sacaron: " << endl;
    while(pila != NULL){
        quitPila(pila, aux);
        cout << aux << endl;
    }

    return 0;
}

void addPila(Node *&pila, int n){
    Node *new_node = new Node();
    new_node -> num = n;
    new_node -> next = pila;
    pila = new_node;
}

void quitPila(Node *&pila, int &n){
    if(pila == NULL){
        cout << "Pila vacía" << endl;
        return;
    }

    n = pila -> num;
    Node *temp = pila;
    pila = pila -> next;
    delete temp;
}
