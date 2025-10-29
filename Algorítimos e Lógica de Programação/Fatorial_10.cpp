#include <iostream>

using namespace std;

int main()
{
    int fatorial = 1;
    for (int i = 10; i>0; i--){
        fatorial = fatorial * i;
    }
    cout<<"O Fatorial é: "<<fatorial;
    return 0;
}