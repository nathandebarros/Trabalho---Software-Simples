#include "classes.hpp"
#include <iostream>

int main(){
    std::string cpf;
    std::string nome;
    std::string sex;
    std::string tel;
    int d, m, a;

    std::cout << "--------------Cadastrar Cliente----------------" << std::endl;
    std::cout << "Nome: ";
    std::cin >> nome;
    std::cout << "CPF: ";
    std::cin >> cpf;
    std::cout << "Sexo: ";
    std::cin >> sex;
    std::cout << "Telefone: ";
    std::cin >> tel;
    std::cout << "Data: ";
    std::cin >> d >> m >> a;
    return 0;
}