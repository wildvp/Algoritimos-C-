#include<iostream>
using namespace std;
// Programa de impressão na tela da taboada de muiltiplicação

int main()
{
	// Variaveis
	int x,y;
	//Imprimindo na tela
	cout<<"Qual a taboada deseja imprimir?";
	//Lendo a variavel
	cin>>y;
	//Inicio do for
	for (x=1;x<=10;x++)
	{
		cout<<y<<" * "<<x<<" = "<<y * x<<"\n";
	}
	
}
