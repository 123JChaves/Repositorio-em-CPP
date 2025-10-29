#include <iostream>
#include <string>

using namespace std;

class Operacao {

    public:

    int a;
    int b;

    public:
    
    Operacao (int a, int b) {
        this->a = a;
        this->b = b;
    }
    
    static int somar(int a, int b) {
        std::cout<<a + b<<std::endl;
    }

    static int subtrair(int a, int b) {
        std::cout<<a - b<<std::endl;
    }

    static int dividir(int a, int b) {
        std::cout<<a / b<<std::endl;
    }

        static int multiplicar(int a, int b) {
        std::cout<<a * b<<std::endl;
    }
};

int main() {
        Operacao operacao(65, 15);

        Operacao::somar(operacao.a, operacao.b);
        Operacao::subtrair(operacao.a, operacao.b);
        Operacao::dividir(operacao.a, operacao.b);
        Operacao::multiplicar(operacao.a, operacao.b);
        
        return 0;
};