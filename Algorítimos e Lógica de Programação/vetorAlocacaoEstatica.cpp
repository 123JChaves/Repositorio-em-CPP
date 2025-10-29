#include <iostream>

using namespace std;

int main()
{
    //int vet[4];
    //vet[0] = 5;
    //vet[1] = 10;
    
    int vet[5] = {5,10,20,40,80};
    
    cout<<"[ ";
    
    for (int i=4;i>=0;i--){
    cout<<vet[i]<<" ";
    }
    cout<<"]"<<endl;
    
    int x=sizeof(vet);
    int y=sizeof(int);
    
    cout<<"tamanho de bites do vetor 'y' é: "<<y<<endl;
    
    cout<<"tamanho de bites do vetor 'x' é: "<<x<<endl;
    return 0;
}