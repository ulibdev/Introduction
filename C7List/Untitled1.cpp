#include <list>
#include <iostream>

int main() {
    // Crear una lista vacía
    std::list<int> miLista;

    // Agregar elementos a la lista
    miLista.push_back(1);
    miLista.push_back(2);
    miLista.push_back(3);

    // Imprimir la lista
    for (std::list<int>::iterator it = miLista.begin(); it != miLista.end(); ++it) {
        std::cout << *it << " ";
    }

    return 0;
}
