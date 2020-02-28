#include<iostream>
using namespace std;
// Programa de impressão de variaveis (area de um triangulo)

int main()
{
	//Declarando Variaveis reais
	float base,altura,area;
	//Imprimindo na tela
	cout<<"Entre com a base do triangulo: ";
	//Variavel A recebendo o numero digitado pelo usuário
	cin>>base;
	//Imprimindo na tela
	cout<<"Entre altura do triangulo: ";
	//Variavel B recebendo o numero digitado pelo usuário
	cin>>altura;
	//Calculando a area do triangulo
	area=base*altura/2;
	//Imprimindo o resultado na tela
	cout<<"A area do triangulo e "<<area;
	
}
