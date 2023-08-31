#include <iostream>
#include "veiculo.h"

int main(){

    Veiculo *v1 = new Veiculo(carro);
    Veiculo *v2 = new Veiculo(aviao);
    Veiculo *v3 = new Veiculo(navio);


    v1->set_ligado(true);
    v3->set_ligado(true);

    std::cout << "V1: " << v1->get_nome() << "\n";
    std::cout << "STATUS: ";
    v1->get_ligado()? std::cout << "LIGADO" : std::cout << "DESLIGADO";
    std::cout << "\n\n";

    std::cout << "V2: " << v2->get_nome() << "\n";
    std::cout << "STATUS: ";
    v2->get_ligado()? std::cout << "LIGADO" : std::cout << "DESLIGADO";
    std::cout << "\n\n";

    std::cout << "V3: " << v3->get_nome() << "\n";
    std::cout << "STATUS: ";
    v3->get_ligado()? std::cout << "LIGADO" : std::cout << "DESLIGADO";
    std::cout << "\n\n";



    return 0;
}