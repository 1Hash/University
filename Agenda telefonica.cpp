#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <string>
#include <conio.h>

#define getch() _getch()

using namespace std;

struct agenda {

	string nome;
	int idade;
	string telefone;
}; 

typedef struct agenda Agenda;

struct lista {

	int info;
	Agenda *pItemAgenda;
	struct lista * ant;
	struct lista* prox;
}; 

typedef struct lista Lista;

/* inserção no início */
Lista* insere(Lista* l, int v)
{
	Lista* novo = new Lista;
	agenda* nova = new agenda;

	novo->info = v;
	novo->prox = l;

	system("CLS");

	cout << "Escreva o nome da pessoa: ";
	cin >> nova->nome;

	cout << "Escreva a idade da pessoa: ";
	cin >> nova->idade;

	cout << "Escreva o telefone da pessoa: ";
	cin >> nova->telefone;
	cout << endl;

	novo->pItemAgenda = nova;

	novo->ant = NULL;
	/* verifica se lista não está vazia */
	if (l != NULL)
		l->ant = novo;
	return novo;
}

void Buscar(Lista* l)
{
	Lista* a;
	string n;
	char c;
	int cond1 = 0;

	system("CLS");

	cout << "Digite o nome que deseja buscar: ";
	cin >> n;

	for (a = l; a != NULL; a = a->prox)
	{
		if (a->pItemAgenda->nome == n)
		{
			cout << "Segue a baixo os detalhes do contato." << endl << endl;
			cout << "Nome: " << n << endl;
			cout << "Idade: " << a->pItemAgenda->idade << endl;
			cout << "Telefone: " << a->pItemAgenda->telefone << endl;
			cond1 = 1;
		}
	
	}
	if (cond1 == 0)
	{
		system("CLS");
		cout << "Nao foi possivel encontrar o nome desse contato." << endl << endl;
	}
	cout << endl << "Precione uma tecla para voltar ao menu.";
	c = getch();
}

void Listar(Lista* l)
{
	Lista* b;
	char co;

	system("CLS");

	for (b = l; b != NULL; b = b->prox)
	{
		cout << "------------------------------------" << endl << endl;
		cout << "Nome: " << b->pItemAgenda->nome << endl;
		cout << "Idade: " << b->pItemAgenda->idade << endl;
		cout << "Telefone: " << b->pItemAgenda->telefone << endl << endl;
	}
	cout << endl << "Precione uma tecla para voltar ao menu.";
	co = getch();
}


/* função retira: retira elemento da lista */
Lista* retira(Lista* l) {

	Lista* p;
	string n;
	char con;

	system("CLS");

	cout << "Escreva o nome do contato que deseja excluir: ";
	cin >> n;

	for (p = l; p != NULL; p = p->prox)
	if (p->pItemAgenda->nome == n)
		break;

	if (p == NULL)
	{
		system("CLS");
		cout <<n<<" nao existe na lista." << endl;

		cout << endl << "Precione uma tecla para voltar ao menu.";
		con = getch();

		return l; /* não achou o elemento: retorna lista inalterada */
		/* retira elemento do encadeamento */
	}
	if (l == p)
		l = p->prox;
	else
		p->ant->prox = p->prox;
	if (p->prox != NULL)
		p->prox->ant = p->ant;

	delete p;

	system("CLS");
	cout << n << " foi excluido." << endl;

	cout << endl << "Precione uma tecla para voltar ao menu.";
	con = getch();

	return l;
}

int main()
{
	system("title AGENDA TELEFONICA");
	system("color 0F");

	Lista*  l = NULL;
	char cond;
	int c = 0;

	do
	{
		do
		{
			system("CLS");

			cout << endl << " 1 - CADASTRAR CONTATO NA AGENDA." << endl;
			cout << " 2 - BUSCAR CONTATO NA AGENDA." << endl;
			cout << " 3 - EXCLUIR CONTATO DA AGENDA." << endl;
			cout << " 4 - MOSTRAR TODOS OS CONTATOS DA AGENDA." << endl;
			cout << " 5 - SAIR." << endl;

			cond = getch();

		} while (cond != '1' && cond != '2' && cond != '3' && cond != '4' && cond != '5');

		if (cond == '1')
		{
			l = insere(l, c);
			c++;
		}
		if (cond == '2')
		{
			Buscar(l);
		}
		if (cond == '3')
		{
			retira(l);
		}
		if (cond == '4')
		{
			Listar(l);
		}
		if (cond == '5')
		{
			exit(1);
		}
	} while (1);

	system("pause");
	return 0;
}
