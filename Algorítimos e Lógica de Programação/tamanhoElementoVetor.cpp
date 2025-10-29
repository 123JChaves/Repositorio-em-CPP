#include <iostream>

using namespace std;

int main()
{
    int tamanho; 
    cout<<"Digite o tamanho do vetor: "<<endl;
    cin>>tamanho;
    int* vetor = new int[tamanho];
    
    for (int i=0;i<tamanho;i++) {
        cout<<"Digite o elemento"<<i<<"do vetor"<<endl;
        cin>>vetor[i];
    }
    
    for (int i=0;i<tamanho;i++){
        cout<<vetor[i]<<" ";
    }
        cout<<endl;
    return 0;
}