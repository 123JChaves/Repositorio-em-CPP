#include <iostream>

using namespace std;

int main()
{
	int x;
	cout<<"Digite um numero: "<<endl;
	cin>>x;

	if (x>=10) {
	    
	    if (x==10) {
	    cout<<"O número é igual a 10\n"<<x<<endl;
	   }
		else if (x==17) {
		cout<<"O numero é maior que 10 e igual a 17.\n"<<x<<endl;
		}
		else {
		cout<<"O número é maior que 10, mas não igual a 17.\n"<<x<<endl;
		}
	}
	else {
        cout<<"O número é menor que 10.\n"<<x<<endl;
	    
	}

	return 0;
}