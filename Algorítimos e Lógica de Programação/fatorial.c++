#include <iostream>
using namespace std;

int main()
{
	int fatorial = 1;
	for (int i = 9; i>0; i--) {
		fatorial = fatorial * i;
	}
	cout<<"O fatorial é: "<<fatorial;
	
	return 0;
}