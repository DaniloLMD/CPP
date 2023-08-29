#include <iostream>

int main(){
	
	//sem inicializar os valores
	enum lanche{pao, cafe, bolacha};
	lanche escolha_usuario;
	escolha_usuario = pao;
	std::cout << escolha_usuario << "\n"; //printa o valor 0, pois é o indice que se encontra "pao" na variavel "lanche"


	//inicializando os valores
	enum cardapio{miojo = 2, marmita = 15, tapioca};
	cardapio val = miojo;
	std::cout << val << "\n"; //printa o valor 2, pois é o valor atribuido a "miojo" dentro de "cardapio"

	val = marmita;
	std::cout << val << "\n"; //printa o valor 15, pois é o valor atribuido a "marmita" dentro de "cardapio"

	val = tapioca;
	std::cout << val << "\n"; //printa o valor 16, pois o ENUM segue uma ordem sequencial. Como o ultimo termo, "marmita", vale 15, tapioca vale 16.



	return 0;
}
