#include <iostream>

struct pessoa{
    std::string nome;
    int idade;

    void cadastrar(std::string nome_novo, int idade_nova){
        nome = nome_novo;
        idade = idade_nova;
    }

    void exibir(void){
        std::cout << "Nome: " << nome << "\n";
        std::cout << "Idade: " << idade << "\n";
    }
};

int main(){

    pessoa *pessoas = new pessoa[3];
    pessoa p1;

    //cadastrando pelo metodo da struct
    pessoas[0].cadastrar("Danilo", 18);
    pessoas[0].exibir();

    //fazendo manualmente
    pessoas[1].nome = "Maria";
    pessoas[1].idade = 20;
    pessoas[1].exibir();

    //jogando uma struct na outra
    p1.nome = "Joao";
    p1.idade = 15;
    pessoas[2] = p1;
    pessoas[2].exibir();
    

    return 0;  
}