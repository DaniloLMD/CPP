#include <iostream>
#include <stack>

int main(){

    std::stack <std::string> cartas;

    cartas.push("copas");
    cartas.push("espadas");
    cartas.push("ouros");
    cartas.push("paus");

    std::cout << "Tamanho da pilha: " << cartas.size() << "\n"; //printa 4
    std::cout << "Carta no topo: " << cartas.top() << "\n"; //printa "paus"
    cartas.pop();
    std::cout << "Nova carta do topo: " << cartas.top() << "\n"; //printa "ouros";

    //esvaziando a pilha
    while(!cartas.empty()) cartas.pop();
    //poderia ser tambem: while(cartas.size() > 0)

    return 0;   
}