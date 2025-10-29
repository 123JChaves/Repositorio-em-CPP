#include <iostream>

using namespace std;

int main()
{
    float nota1 = 0;
    float nota2 = 0;
    float nota3 = 0;
    float nota4 = 0;
    cout<<"Insira a primeira nota: ";
    cin>>nota1;
    cout<<"Insira a segunda nota: ";
    cin>>nota2;
    cout<<"Insira a terceira nota: ";
    cin>>nota3;
    cout<<"Insira a quarta nota: ";
    cin>>nota4;
    float media = (nota1 + nota2 + nota3 + nota4)/4;
    cout<<"A média foi: "<<media<<endl;
    if(media >=7)
        cout<<"O Aluno foi Apovado";
    else
        cout<<"O Aluno foi Reprovado";

    return 0;
}