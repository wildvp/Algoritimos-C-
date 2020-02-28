#include<iostream>
#include<cstdlib>
#include<math.h>
using namespace std;
int main()
{
	//Prova de matematica
	//Variaveis
	int op,a,b,x,sub,z,y;
	int t1,t2,t3;
	do
	{
		//Construindo o menu
		cout<<"MENU DE OPCOES\n\n";
		cout<<"1 - Mostre os numeros pares dentro de um intervalo.\n";
		cout<<"2 - Mostre os numeros impares dentro de um intervalo.\n";
		cout<<"3 - Calcule a area e o perimetro de um quadrado ou retangulo.\n";
		cout<<"4 - Calcule as raizes de uma equacao do 2 grau.\n";
		cout<<"5 - Calcular a area a ser construida.\n";
		cout<<"6 - Calcular os multiplos de 9.\n";
		cout<<"0 - sair\n\n";
		cout<<"DIGITE SUA OPCAO:";
		cin>>op;
		cin.ignore();
		switch(op)
		{
			case 1:
				//Mostre os numeros pares dentro de um intervalo
				cout<<"Inicio em: ";
				cin>>a;
				cout<<"Termino em: ";
				cin>>b;
				cout<<"Os numeros PARES entre "<<a<<" e "<<b<<" sao:\n";
				for(x=a;x<=b;x++)
				{
					if(x%2==0)
					{
						cout<<x<<"\t";
					}
	
				}
					cout<<"\n";
	                system("pause");
					system("cls");
			break;
			case 2:
				//Mostre os numeros impares dentro de um intervalo
				cout<<"Inicio em: ";
				cin>>a;
				cout<<"Termino em: ";
				cin>>b;
				cout<<"Os numeros IMPARES entre "<<a<<" e "<<b<<" sao:\n";
				for(x=a;x<=b;x++)
				{
					if(x%2==1)
					{
						cout<<x<<"\t";
					}
	
				}
					cout<<"\n";
	                system("pause");
					system("cls");			
				
			break;
			case 3:
				//Calcule a area e o perimetro de um quadrado ou retangulo
				cout<<"Entre com a base do quadrado/retangulo: ";
				cin>>a;
				cout<<"Entre com a altura do quadrado/retangulo: ";
				cin>>b;
				cout<<"A AREA DO QUADRADO/RETANGULO E "<<a*b<<"\n";
				cout<<"O PERIMETRO DO QUADRADO/RETANGULO E "<<2*a+2*b<<"\n";
				cout<<"\n";
	            system("pause");
				system("cls");
			break;
			case 4:
				//Calcule as raizes de uma equacao do 2 grau
				cout<<"Digite o primeiro termo";
				cin>>t1;
				cout<<"Digite o segundo termo";
				cin>>t2;
				cout<<"Digite o terceiro termo";
				cin>>t3;
//				cout<<"A raiz 1 da esquacao e: "<<(pow(t1)+sqrt(pow(t2)-4*t1*t3))/(2*t1)<<"\n";
//				cout<<"A raiz 2 da esquacao e: "<<(pow(t1)-sqrt(pow(t2)-4*t1*t3))/(2*t1)<<"\n";
				cout<<"\n";
	            system("pause");
				system("cls");
			break;
			case 5:
				//Area a ser construida
				cout<<"1 - Quadrado\n";
				cout<<"2 - Triangulo\n";
				cout<<"3 - Circulo\n";
				cin>>sub;
		        cin.ignore();
				if(sub==1)
				{
					cout<<"Entre com a base do quadrado/retangulo: ";
					cin>>a;
					cout<<"Entre com a altura do quadrado/retangulo: ";
					cin>>b;
					cout<<"A AREA DO QUADRADO/RETANGULO E "<<a*b<<"\n";
					cout<<"\n";
	            	system("pause");
					system("cls");
				}
				if (sub==2)
				{
					cout<<"Entre com a base do triangulo: ";
					cin>>a;
					cout<<"Entre com a altura do triangulo: ";
					cin>>b;
					cout<<"A AREA DO TRIANGULO E "<<(a*b)/2<<"\n";
					cout<<"\n";
	            	system("pause");
					system("cls");
				}
				if(sub==3)
				{
					cout<<"Entre com o raio do circulo: ";
					cin>>a;
					cout<<"A AREA DO CIRCULO E "<<3.1415*a*a<<"\n";
					cout<<"\n";
	            	system("pause");
					system("cls");
				}
			break;
			case 6:
				cout<<"Entre com o primeiro valor do intervalo: ";
				cin>>z;
				cout<<"Entre com o primeiro valor do intervalo: ";
				cin>>y;
				cout<<"\nOs multiplos de 9 sao:\n";
				for(x=z;x<=y;x++)
				{
					if(x%9==0)
					{
						cout<<x<<"\t";
					}
				}
				cout<<"\n";
	        	system("pause");
				system("cls");
			break;
		}
	}
	while(op!=0);
}
