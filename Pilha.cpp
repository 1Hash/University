#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <sstream>
#include <windows.h>
#include "Pilha.h"

using namespace std;

/************************************************************
* Funcao    : orgPilha
* Descricao : Coloca o disco escolhido pela pessoa na primeira posição
da pilha.
* Parametros: 1. Pilha *p - Ponteiro para a pilha a ser manipulada.
*	      2. string n - Conteúdo usado para comparação.
* Retorno   : Nenhum
/************************************************************/

void orgPilha(Pilha* p, string n)
{
	
	Pilha *b = criarPilha();
	
	int quantElementos = p->indice;
	
	push(b, n);
	
	for(int i = 0; i < quantElementos; i++)
	{
		if(p->nomeDisco[i] != n)
		{
			push(b, p->nomeDisco[i]);
		}
	}
	
	for(int j=0;j<quantElementos;j++)
	{
			p->nomeDisco[j] = b->nomeDisco[j];
	}
}

/************************************************************
* Funcao    : escDisco
* Descricao : Utilizada para o usuario escolher um disco para tocar.
* Parametros: 1. Pilha *pilha - Ponteiro para a pilha a ser manipulada.
* Retorno   : Nenhum
/************************************************************/

void escDisco(Pilha *pilha)
{
	system("CLS");
	
	int a,b;
	string v = "Disco ";
	
	do
	{
	
		system("CLS");
	
		cout<<endl;
	
		for(int x=0; x < 10; x++)
		{
			cout<<" "<<x+1<<" - "<<pilha->nomeDisco[x]<<endl;
		}
	
		cout<<endl;
	
		cout<<"Escolha um disco para tocar: ";
		cin>>a;
		
		if(a < 1 || a > 10)
		{
			cout<<endl<<endl<<"Esse disco nao existe, escolha novamente..."<<endl;
			b = getch();
		}	
	}while(a != 1 && a != 2 && a != 3 && a != 4 && a != 5 && a != 6 && a != 7 && a != 8 && a != 9 && a != 10);
	
	for(int i = 0; i <= 10; i++)
	{
		if(a == i)
		{
			stringstream aux2;
			aux2 << i;
			v = v + aux2.str();
		}
	}
	
	orgPilha(pilha, v);
	
	system("CLS");
	
	cout<<pilha->nomeDisco[0]<<" esta tocando..."<<endl;
	
	Sleep(1500);
}

int main()
{
	system("title DISCOS");
	system("color 0F");
	
	int totalpilha = 0;
	Pilha *pilha = criarPilha();
	
	for(int i=1; i <= 10; i++)
	{
		string nome = "Disco ";
		stringstream aux;
		aux << i;
		nome = nome + aux.str();
		push(pilha, nome);
	}
	
	totalpilha = pilha->indice;
	
	char cond;

	do
	{
		
		do
		{
			system("CLS");
			
			cout<<endl<<" 1 - ESCOLHER DISCO."<<endl;
			cout<<" 2 - SAIR."<<endl;
		
			cond = getch();
		}while(cond != '1' && cond != '2');
	
		if (cond == '1')
		{
			escDisco(pilha);
		}
		if (cond == '2')
		{
			exit(1);
		}
	}while(1);
}
