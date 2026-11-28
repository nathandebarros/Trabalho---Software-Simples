#ifndef CLASSES_HPP
#define CLASSES_HPP

#include <vector>
#include <string>

int mes;
int ano;

typedef struct{
    int dia;
    int mes;
    int ano;
} Date;

class Client {
    private:
        int id;
        std::string cpf;
        std::string nome;
        std::string sexo;
        std::string telefone;
        Date dataNascimento;

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
        void setDtNascimento(Date dt);
        Date getDtNascimento(void) const;
        //BirthDate::getDtNascimento(void) const;

        Client(std::string c_cpf, std::string c_nome, std::string c_sexo, std::string c_telefone, Date c_dtnas){
            setCpf(c_cpf);
            setNome(c_nome);
            setSexo(c_sexo);
            setTelefone(c_telefone);
            setDtNascimento(c_dtnas);
        }
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
        bool cadastrar(Client cliente);
        bool cadastrar(Product produto);
};

#endif