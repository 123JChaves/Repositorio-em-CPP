#include <iostream>

using namespace std;

int main()
{
    cout<<"Números Ímpares: ";
    for (int i = 1; i<= 100; i++) {
        if ((i % 2)== 1)
        cout<<i<<",";
    }
    return 0;
}