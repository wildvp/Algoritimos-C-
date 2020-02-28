#include<iostream>
using namespace std;
// Programa de impressão na tela da taboada de muiltiplicação

int main()
{
	// Variaveis
	int x,y,z;
	//Imprimindo na tela
	cout<<"Qual a taboada deseja imprimir? ";
	//Lendo a variavel
	cin>>y;
	//Imprimindo na tela
	cout<<"Ate quanto? ";
	//Lendo a variavel
	cin>>z;
	//Inicio do for
	for (x=1;x<=z;x++)
	{
		cout<<y<<" * "<<x<<" = "<<y * x<<"\n";
	}
	
}
