#include <iostream>

class lampada{
    public:
        bool ligada = false;
        void ligar(void);
    private:
};

void lampada::ligar(void){
    this->ligada = true;
}

int main(){

    lampada* l1 = new lampada();
    lampada* l2 = new lampada();

    l1->ligar();
    std::cout << "A lampada 1 esta ";
    (l1->ligada) ? std::cout << "ligada" : std::cout << "desligada";
    std::cout << "\n";

    std::cout << "A lampada 2 esta ";
    (l2->ligada) ? std::cout << "ligada" : std::cout << "desligada";
    std::cout << "\n";

    return 0;
}