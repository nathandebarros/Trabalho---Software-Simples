#include "classes.hpp"
#include <iostream>
#include <string>

void Client::setCpf(std::vector<int>)


void Software::cadastrar(Client cliente){
    std::cout << "Nome completo: " << std::endl;
    std::getline(std::cin, cliente.nome) << std::endl;
}