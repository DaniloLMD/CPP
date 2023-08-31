#include <iostream>
#include "heranca.h"

int main(){

    filho* p1 = new filho();
    p1 -> nome = "Danilo";
    p1 -> sobrenome = "Lourenco";
    p1 -> print_nome_completo();

    return 0;
}