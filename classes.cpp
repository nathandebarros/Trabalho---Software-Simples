#include "classes.hpp"
#include <iostream>

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
        dataNascimento.dia = d;
        dataNascimento.mes = m;
        dataNascimento.ano = a;
}

Date Client::getDtNascimento(void) const{
    return dataNascimento;
}

Client::Client(std::string c_cpf, std::string c_nome, std::string c_sexo, std::string c_telefone, Date c_dtnas){
    setCpf(c_cpf);
    setNome(c_nome);
    setSexo(c_sexo);
    setTelefone(c_telefone);
    setDtNascimento(c_dtnas);
}



bool Software::cadastrar(Client cliente){
    for(int i = 0; i < clientes.size(); i++){
        if(cliente.getCpf() == clientes[i].getCpf()){
            std::cout << "-------------------Error---------------------" << std::endl;
            std::cout << "Não foi possível realizar o cadastro." << std::endl;
            std::cout << "CPF já cadastrado!!" << std::endl;
            std::cout << "---------------------------------------------"<< std::endl;
            return false;
        }
    }

    std::cout << "Cliente cadastrado com sucesso!!!" << std::endl; 
}