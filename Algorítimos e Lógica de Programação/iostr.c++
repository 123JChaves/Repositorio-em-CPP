#include <iostream>

int main()
{
    float nota1 = 7.5;
    float nota2 = 6.5;
    float media = (nota1 + nota2)/2;
    
    if (media >= 7.0)
      std::cout<<"O aluno está aprovado!";
    else
      std::cout<<"O aluno está reprovado!";
    return 0;
}