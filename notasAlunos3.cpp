#include <cstdlib>
#include<iostream>
using namespace std;
// Programa de verificação de nomes de alunos e calcular se esta aprovado ou reprovado

int main()
{
	// Variaveis
	int x,y;
	float n1,n2,media;
	char nome[15];
	//Imprimindo na tela
	cout<<"Quantos alunos? ";
	//Lendo a variavel
	cin>>y;
	//Inicio do for
	for (x=1;x<=y;x++)
	{
		//Imprimindo na tela
		cout<<"Digite o nome do aluno: ";
		//Lendo a variavel
		cin>>nome;
		//Imprimindo na tela
		cout<<"Digite a primeira nota: ";
		//Lendo a variavel
		cin>>n1;
		//Imprimindo na tela
		cout<<"Digite a segunda nota: ";
		//Lendo a variavel
		cin>>n2;
		//Calculando a media
		media=(n1+n2)/2;
		//Testando
		if ((n1+n2)/2<5)
		{
			cout<<"O aluno(a) "<<nome<<" esta REPROVADO com media "<<media<<"\n\n";
		}
		else
		{
			if((n1+n2)/2>=5 && (n1+n2)/2<7)
				{
					cout<<"O aluno(a) "<<nome<<" esta de RECUPERAÇÃO com media "<<media<<"\n\n";
				}
			else
				{
					cout<<"O aluno(a) "<<nome<<" esta de APROVADO com media "<<media<<"\n\n";
				}
				
		}
	}
	
}
