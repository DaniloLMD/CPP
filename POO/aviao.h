#ifndef AVIAO_H
#define AVIAO_H

class aviao{
    public:
        int vel=0;
        int velMax;
        std::string tipo;
        aviao(int tp);
        void imprimir(void);
    private:

};

#define jato 1
#define monomotor 2
#define planador 3
aviao::aviao(int tp){
    if(tp == jato){
        tipo = "Jato";
        velMax = 800;
    }
    else if(tp == monomotor){
        tipo = "Monomotor";
        velMax = 350;
    }
    else if(tp == planador){
        tipo = "Planador";
        velMax = 180;
    }
}

void aviao::imprimir(void){
    std::cout << "Tipo.............: " << tipo << "\n";
    std::cout << "Velocidade maxima: " << velMax << "\n";
    std::cout << "Velocidade atual.: " << vel << "\n";
    std::cout << "\n";
}

#endif //AVIAO_H