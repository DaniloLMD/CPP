#include <iostream>
#include <list>
#include <string.h>

//forma de printar os elementos de uma estrutura(List, Stack ou Queue) sem precisar dar pop toda vez

int main(){
	std::list <std::string> lista_compras;
	std::list<std::string>::iterator it;

	int int_temp;
	std::string str_temp;
	int c, c1 = 1;

	std::cout << "Quantidade de termos da lista: ";
	std::cin >> c;
	
	while(c--){
		std::cout << "Elemento " << c1++ << ": ";
		std::getline(std::cin >> std::ws, str_temp);
		lista_compras.push_back(str_temp);
	}
	
    //jeito 1
	c1 = 1;
	std::cout << "Sua lista final:\n";
	c = 0;
	while(c1++ <= lista_compras.size() ){
		it = lista_compras.begin();
		std::advance(it, c++);
		std::cout << c1 << ": " << *it << "\n";
	}


    //jeito 2
    c = 1;
	std::cout << "\nPRINTANDO COM FOR\n";
	for( std::string a : lista_compras){
		std::cout << "Elemento " << c++ << ": " << a << "\n";
	}
	
	
	return 0;
}
