#include<iostream>
using namespace std;
// Programa de verificação de nomes de alunos e calcular se esta aprovado ou reprovado

int main()
{
	// Variaveis
	int x,y;
	float n1,n2;
	//Imprimindo na tela
	cout<<"Quantos alunos? ";
	//Lendo a variavel
	cin>>y;
	//Inicio do for
	for (x=1;x<=y;x++)
	{
		//Imprimindo na tela
		cout<<"Digite a primeira nota: ";
		//Lendo a variavel
		cin>>n1;
		//Imprimindo na tela
		cout<<"Digite a segunda nota: ";
		//Lendo a variavel
		cin>>n2;
		//Testando
		if ((n1+n2)/2>6)
		{
			cout<<"O aluno esta APROVADO\n\n";
		}
		else
		{
			cout<<"O aluno esta REPROVADO\n\n";
		}
	}
	
}
