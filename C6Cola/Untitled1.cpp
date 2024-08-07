#include <queue>
#include <iostream>

int main() {
    std::queue<int> cola;


    cola.push(1);
    cola.push(3);
    cola.push(2);


    while (!cola.empty()) {
        int elemento = cola.front();
        cola.pop();
        std::cout << "Element: " << elemento << std::endl;
    }

    return 0;
}
