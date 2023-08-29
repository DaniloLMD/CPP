#include <iostream>
#include <queue>

int main(){

    std::queue <std::string> fila;

    fila.push("Jose");
    fila.push("Joao");
    fila.push("Maria");

    std::cout << "A fila tem " << fila.size() << " pessoas.\n";
    std::cout << "A ultima pessoa da fila: " << fila.back() << "\n";

    std::cout << "\nComecando o atendimento\n";
    while(!fila.empty()){
        std::cout << "Primeiro da fila: " << fila.front() << "\n";
        if(fila.size    () > 1) std::cout << "Andando com a fila...\n";
        fila.pop();
    }
    std::cout << "Nao tem mais ninguem na fila!\n";
    

    return 0;
}