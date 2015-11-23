#include <iostream>
#include <string>

#define N 50

using namespace std;

/************************************************************
*                 DECLARAÇÃO DA ESTRUTURA
************************************************************/
struct Pilha{
	string nomeDisco[N]; 
	int indice;
};


/************************************************************
* Funcao    : criarPilha
* Descricao : Faz a alocação de memória da pilha
* Parametros: Nenhum
* Retorno   : Ponteiro do tipo estrutura Pilha
/************************************************************/
Pilha*  criarPilha(){
	Pilha *p = new Pilha;
	p->indice = 0;
	return p;
}

/************************************************************
* Funcao    : push
* Descricao : Define um valor no topo da pilha
* Parametros: 1. Pilha *p - Ponteiro para a pilha a ser manipulada.
*	      2. string v - Valor a ser armazenado.
* Retorno   : Nenhum
/************************************************************/
void push(Pilha* p, string v){
	if(p->indice == N){
		cout << endl << "Capacidade da pilha estourou!" << endl;
		return;
	}
	p->nomeDisco[p->indice] = v;
	p->indice++;
}


/************************************************************
* Funcao    : estaVazia
* Descricao : Retorna se a pilha esta vazia.
* Parametros: 1. Pilha *p - Ponteiro para a pilha a ser manipulada.
* Retorno   : int - Verdadeiro / Falso
/************************************************************/
int estaVazia(Pilha* p){	
	return (p->indice==0);
}


/************************************************************
* Funcao    : pop
* Descricao : Recupera um valor no topo da pilha
* Parametros: 1. Pilha *p - Ponteiro para a pilha a ser manipulada.
* Retorno   : string - Valor do topo da pilha.
/************************************************************/
string pop(Pilha* p){
	if(estaVazia(p)){
		cout << "Pilha vazia" << endl;
		return 0;
	}
	string v = p->nomeDisco[p->indice - 1];
	p->indice--;
	return v;
}


/************************************************************
* Funcao    : liberarPilha
* Descricao : Desalocar memória.
* Parametros: 1. Pilha *p - Ponteiro para a pilha a ser manipulada.
* Retorno   : Nenhum.
/************************************************************/
void liberarPilha(Pilha* p){
	delete p;
}


/************************************************************
* Funcao    : estaCheia
* Descricao : Recupera um valor no topo da pilha
* Parametros: 1. Pilha *p - Ponteiro para a pilha a ser manipulada.
* Retorno   : int - Valor do topo da pilha.
/************************************************************/
int estaCheia(Pilha* p){
	return(p->indice == N); 
}


/************************************************************
* Funcao    : imprimePilha
* Descricao : Mostra todos os elementos da pilha
* Parametros: 1. Pilha *p - Ponteiro para a pilha a ser manipulada.
* Retorno   : Nenhum
/************************************************************/
void imprimePilha(Pilha* p){
	int quantElementos = p->indice;
	int i;
	for(i=0;i<quantElementos;i++){
		cout << p->nomeDisco[i] << endl;
	}
}


/************************************************************
* Funcao    : verTopo
* Descricao : Mostra o valor no topo da pilha sem eliminá-lo
*		da pilha.
* Parametros: 1. Pilha *p - Ponteiro para a pilha a ser manipulada.
* Retorno   : string - Valor no topo da pilha.
/************************************************************/
string verTopo(Pilha* p){
	int quantElementos = p->indice;
	quantElementos = quantElementos- 1;
	return p->nomeDisco[quantElementos]; 
}

/************************************************************
* Funcao    : orgPilha
* Descricao : Coloca o disco escolhido pela pessoa na primeira posição
da pilha.
* Parametros: 1. Pilha *p - Ponteiro para a pilha a ser manipulada.
*	      2. string n - Conteúdo usado para comparação.
* Retorno   : Nenhum
/************************************************************/

void orgPilha(Pilha* p, string n){
	
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

