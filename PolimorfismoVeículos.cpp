#include <iostream>
#include <string>

using namespace std;

class Veiculo {
    
    protected:
    std::string marca;
    std::string modelo;
    int velocidadeKmh;

    public:
    Veiculo(std::string marca, std::string modelo, int velocidadeKmh) 
    {
        this->marca = marca;
        this->modelo = modelo;
        this->velocidadeKmh = velocidadeKmh;
    }

    virtual void descricao() 
    {
        std::cout<<"Marca: "<<marca<<".\nModelo: "<<modelo<<"."<<std::endl;
    };

    virtual void velocidadeMaxima() 
    {
        std::cout<<"Velocidade máxima: "<<velocidadeKmh<<" Km/h."<<std::endl;
    }
};

class Carro : public Veiculo {
    private:
        int numeroPortas;
    
    public: 
        Carro(std::string marca, std::string modelo, 
            int velocidadeKmh, int numeroPortas): 
            Veiculo(marca, modelo, velocidadeKmh) {
            this->numeroPortas = numeroPortas;
        }
    
    void descricao() override {
        Veiculo::descricao();
        std::cout<<"Número de portas: "<<numeroPortas<<"."<<std::endl;
    }
};

    class Moto : public Veiculo {
        int cilindrada;

        public:
            Moto(std::string marca, std::string modelo,
                int velocidadeKmh, int cilindrada):
            Veiculo(marca, modelo, velocidadeKmh) {
                this->cilindrada = cilindrada;
            }
        
        void descricao() override {
            Veiculo::descricao();
            std::cout<<"Cilindradas: "<<cilindrada<<"."<<std::endl;
        }
    };

    int main() {
        Carro carro("Ford", "Ka", 240, 4);
        Moto moto ("Honda", "Falcon", 220, 397);

        std::cout<<"Carro"<<std::endl;
        carro.descricao();
        carro.velocidadeMaxima();

        std::cout<<"\nMoto"<<std::endl;
        moto.descricao();
        moto.velocidadeMaxima();
    }
