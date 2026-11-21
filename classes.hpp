#ifndef CLASSES_HPP
#define CLASSES_HPP

#include <vector>
#include <string>


class BirthDate{
    protected:
        int dia;
        int mes;
        int ano;

    public:
        void setDia(int d);
        void setMes(int m);
        void setAno(int a);

};

class Client {
    private:
        int id;
        std::string cpf;
        std::string nome;
        std::string sexo;
        std::string telefone;
        BirthDate dataNascimento;

    public:
        void setCpf(std::string numero);
        std::string getCpf(void) const;
        void setNome(std::string n);
        std::string getNome(void) const;
        void setSexo(std::string sex);
        std::string getSexo(void) const;
        void setTelefone(std::string tel);
        std::string getTelefone(void) const;
        void setDtNascimento(int d, int m, int a);
        //BirthDate::getDtNascimento(void) const;
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