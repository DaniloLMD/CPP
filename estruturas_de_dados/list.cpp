#include <iostream>
#include <list>

int main(){
    int tamanho;

    std::list<int> lista;
    std::list<int>::iterator it;

    lista.push_back(1);
    lista.push_back(2);
    lista.push_back(3);
    //a lista agora e: 1 , 2 , 3

    it = lista.begin(); //inicia o iterator na posicao 0
    advance(it, 2); //avanca o iterator em 2 posicoes (agora esta na posicao 2)
    lista.insert(it, 87); //insere o valor 87 na lista na posicao do iterador (2);
    //ou seja: a lista agora e: 1, 2, 87, 3


    it = lista.begin(); //seta o iterator no indice 0 novamente
    advance(it, 1); //avanca o iterator em 1 posicao (agora esta na posicao 1)
    lista.erase(it);//apaga o elemento na posicao do iterator(1) na lista
    //agora a lista e: 1, 87, 3

    //printando a lista final
    tamanho = lista.size();
    for(int i = 0; i < tamanho; i++){
        std::cout << "Elemento " << i << ": " << lista.front() << "\n";
        lista.pop_front();
    }


    //merge
    /*int tamanho;

    std::list<int> lista, outra;

    lista.push_back(1);
    lista.push_back(2);
    lista.push_back(3);
    
    outra.push_back(100);
    outra.push_back(101);
    outra.push_back(102);

    lista.merge(outra);


    //printando a lista final
    tamanho = lista.size();
    for(int i = 0; i < tamanho; i++){
        std::cout << "Elemento " << i << ": " << lista.front() << "\n";
        lista.pop_front();
    }*/

    return 0;
}