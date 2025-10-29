#include <iostream>

using namespace std;

int main()
{
   cout<<"Números pares: ";
   for (int i = 1; i<= 100; i++) /*o símbolo "--" tem a função de decrementar*/ {
       if((i % 2) == 0)
       cout<<i<<",";
   }
   return 0;
}