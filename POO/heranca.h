#ifndef HERANCA_H
#define HERANCA_H

class pai{
    public:
        std::string nome;

    private:

};

class vo{
    public:
        std::string sobrenome;
};

class filho:public pai, public vo{
    public:
        void print_nome_completo(void);
};

void filho::print_nome_completo(void){
    std::cout << nome << " " << sobrenome << "\n";
}

#endif //HERANCA_H