#include <iostream>
#include <vector>

int main(){
    std::vector<int> v;

    v.push_back(1);
    v.push_back(2);
    v.push_back(3);

    std::cout << "Primeiro elemento: " << v[0] << "\n";

    v.insert(v.begin(), 0);

    std::cout << "Novo primeiro elemento: " << v[0] << "\n";

    std::cout << "Tamanho do vector: " << v.size() << "\n";
    std::cout << "Vector antes das mudancas: ";
    for(int i = 0; i < v.size(); i++){
        std::cout << v[i] << " ";
    }
    std::cout << std::endl;

    v.erase(v.end()-1);

    v.pop_back();

    v[0] = 2;

    std::cout << "Tamanho do vector: " << v.size() << "\n";
    std::cout << "Vector apos as mudancas: ";
    for(int i = 1; i <= v.size(); i++){
        std::cout << v[i] << " ";
    }
    std::cout << std::endl;

    return 0;
}