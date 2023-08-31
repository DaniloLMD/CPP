#ifndef VEICULO_H
#define VEICULO_H

class Veiculo{
    public:
        int vel;
        int tipo;

        //metodos
        Veiculo(int tipo);
        int get_velMax(void);
        bool get_ligado(void);
        void set_ligado(bool l);
        std::string get_nome(void);
        
    private:
        std::string nome;
        int velMax;
        bool ligado;

        //metodos
        void set_velMax(int new_velMax);
};

#define carro 1
#define aviao 2
#define navio 3

Veiculo::Veiculo(int tp){
    tipo=tp;
    if(tipo == carro){
        nome = "Carro";
        //velMax = 200; ou
        set_velMax(200);
    }else if(tipo == aviao){
        nome = "Aviao";
        //velMax = 800; ou
        set_velMax(800);
    }else if(tipo == navio){
        nome = "Navio";
        //velMax = 120; ou
        set_velMax(120);
    }

    set_ligado(false);
}

int Veiculo::get_velMax(void){ return velMax; }

void Veiculo::set_velMax(int new_velMax){ velMax = new_velMax; }

bool Veiculo::get_ligado(void){ return ligado; }

void Veiculo::set_ligado(bool l){ ligado = l; }

std::string Veiculo::get_nome(void) { return nome; }

#endif //VEICULO_H