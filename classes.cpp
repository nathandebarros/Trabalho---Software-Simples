#include "classes.hpp"
#include <iostream>

void BirthDate::setDia(int d){
    dia = d;
}

void BirthDate::setMes(int m){
    mes = m;
}

void BirthDate::setAno(int a){
    ano = a;
}

void Client::setCpf(std::string number) {
    cpf = number;
}

std::string Client::getCpf(void) const {
    return cpf;
}

void Client::setNome(std::string n){
    nome = n;
}

std::string Client::getNome(void) const {
    return nome;
}

void Client::setSexo(std::string sex) {
    sexo = sex;
}

std::string Client::getSexo(void) const{
    return sexo;
}

void Client::setTelefone(std::string tel) {
    telefone = tel;
}

std::string Client::getTelefone(void) const {
    return telefone;
}

void Client::setDtNascimento(int d, int m, int a){
    setDia(int d);
}

void Software::cadastrar(Client cliente){
    std::cout << "Nome completo: " << std::endl;
    std::getline(std::cin, cliente.nome) << std::endl;
}