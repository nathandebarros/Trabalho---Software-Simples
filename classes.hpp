#ifndef CLASSES_HPP
#define CLASSES_HPP

#include <vector>

class BirthDate{
    protected:
        int dia;
        int mes;
        int ano;
};

class Client {
    private:
        int id;
        std::vector<int> cpf;
        std::string nome;
        std::string sexo;
        std::vector<int> telefone;
        BirthDate dataNascimento;

    public:
        void setCpf(std::vector<int>);
        std::vector<int> getCpf() const;
        void setNome(std::string);
        std::string getNome() const;
};

class Product {
    private:
        int id;
        std::string descricao;
        float preco;
        int quant;
        float peso;
};

class Software {
    private:
        std::vector<Client> clientes;
        std::vector<Product> produtos;

    public: 
        void cadastrar(Client cliente);
        void cadastrar(Product produto);
};

#endif