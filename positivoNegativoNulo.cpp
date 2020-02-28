#include<iostream>
using namespace std;
// programa para verificação de um numero e positivo, negativo ou nulo
int main()
{
	//Declarando as variaveis real
	float num;
	//Imprimindo na tela
	cout<<"Entre com um numero positivo, negativo ou nulo: ";
	//Recebendo o numero digitado pelo usuario
	cin>>num;
	//Testando o numero
	if(num>0)
	{
		cout<<"O numero digitado e POSITIVO";
	}
	else
	{
		if(num<0)
		{
			cout<<"O numero digitado e NEGATIVO";
		}
		else
		{
			cout<<"O numero digitado é NULO";
		}
	}
	
	
}
