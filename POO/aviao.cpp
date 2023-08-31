#include <iostream>
#include "aviao.h"

int main(){

    aviao* av1 = new aviao(jato);
    aviao* av2 = new aviao(monomotor);
    aviao* av3 = new aviao(planador);

    av1-> imprimir();
    av2-> imprimir();
    av3-> imprimir();

    return 0;
}