#include <iostream>
#include <cmath>

using namespace std;

//Função para verificar se um número é primo

bool numeroEPrimo(int n) {
    if(n <= 1) return false;
        for (int i = 2; i * i <= n; i++) {
            if (n % i == 0) return false;
        }
    return true;
}

//Função para calcular logaritmo

double calcularLogaritmo(double base, double numero) {
    return log(numero) / log(base);
}

//Função para calcular potenciação

double calcularPotencia(double base, double expoente) {
    return pow(base, expoente);
}

//Função para calcular equação de primeiro grau(ax + b = 0)

double calcularEquacaoPrimeiroGrau(double a, double b) {
    return -b / a;
}

//função para calcular equação de segundo grau(ax² + bx + c = 0)

void calcularEquacaoSegundoGrau(double a, double b, double c) {
    double delta = b * b - 4 * a * c;
        if(delta < 0) {
            std::cout<<"Não há raízes reais."<<std::endl;
        } else if(delta == 0) {
            double raiz = -b / (2 * a);
            std::cout<<"Raíz única: "<<raiz<<std::endl;
        } else {
            double raiz1 = (-b + sqrt(delta)) / (2 * a);
            double raiz2 = (-b - sqrt(delta)) / (2 * a);
                std::cout<<"Raízes reais: "<<raiz1<<" e "<<raiz2<<std::endl;
        }
}

int main() {
    int n1, n2;
    std::cout<<"Digite o início do intervalo: ";
    std::cin>>n1;
    std::cout<<"digite o fim do intervalo: ";
    std::cin>>n2;

    std::cout<<"Números primmosno intervalo["<<n1<<","<<n2<<"]:"<<std::endl;
    for(int i = n1; i <= n2; i++) {
        if(numeroEPrimo(i)) {
        std::cout<<i<<" ";
        }
    }
    std::cout<<std::endl;

    double base, numero, expoente;

    std::cout<<"Digite a base para o logaritmo: ";
    std::cin>>base;
    std::cout<<"Digite o número para o logaritmo: ";
    std::cin>>numero;
    std::cout<<"Logaritmo de "<<numero<<" na base "<<base<<" é: "
    <<calcularLogaritmo(base, numero)<<std::endl;
    
    std::cout<<"Digite a base para a potenciação: ";
    std::cin>>base;
    std::cout<<"Digite o expoente para a potenciação: ";
    std::cin>>expoente;
    std::cout<<"Potenciação de "<<base<<" elevado a "<<expoente<<" é: "
    <<calcularPotencia(base, expoente)<<std::endl;

    double a, b, c;
    std::cout<<"Digite o coeficiente 'a' da equação de primeiro grau (ax + b = 0): ";
    std::cin>>a;
    std::cout<<"Digite o coeficiente 'b' da equação de primeiro grau (ax + b = 0): ";
    std::cin>>b;
    std::cout<<"Raiz da equação de primeiro grau: "<<calcularEquacaoPrimeiroGrau(a, b)<<std::endl;

    std::cout<<"Digite o coeficiente 'a' da equação de segundo grau (ax^2 + bx + c = 0): ";
    std::cin>>a;
    std::cout<<"Digite o coeficiente 'b' da equação de primeiro grau (ax^2 + bx + c = 0): ";
    std::cin>>b;
    std::cout<<"Digite o coeficiente 'c' da equação de primeiro grau (ax^2 + bx + c = 0: ";
    std::cin>>c;
    calcularEquacaoSegundoGrau(a, b, c);

    return 0;
}
