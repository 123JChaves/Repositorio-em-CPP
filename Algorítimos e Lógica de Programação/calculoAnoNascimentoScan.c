#include <stdio.h>

int main()
{
    int idade;
    int anoAtual;
    int anoNascimento;
    printf("Digite a sua idade: ");
    scanf("%d",&idade);
    printf("Digite o ano atual: ");
    scanf("%d",&anoAtual);
    anoNascimento = anoAtual - idade;
    printf("Oi. Você nasceu em %d\n", anoNascimento);
    return 0;
}