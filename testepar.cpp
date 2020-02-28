#include <iostream>
#include <math.h>
using namespace std;
// Programa de teste de numeros pares
int main()
{
	//Declarando variáveis
	int a;
	//Pendindo o valor ao usuário
	cout<<"Entre com um valor inteiro: ";
	//Colocando o valor na variável
	cin>>a;
	//Testando a variavel
	if (a % 2 == 0)
		{
			cout<<"O numero digitado e PAR";
		}
	else
		{
			cout<<"O numero digitado e IMPAR";
		}
}
