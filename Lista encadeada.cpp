#include <iostream>
#include <cstdlib>
#include <stdlib.h>
#include <conio.h>
#include <windows.h>
#include <cstring>

using namespace std;

struct aluno
{
    char nome[40];
    int mat;
};

struct elem
{
    struct aluno *aluno;
    elem *prox;
};

void incluiraluno(aluno *a, elem **inicio)
{
    elem *e=(elem *)malloc(sizeof(elem));
    e->aluno = a;
    e->prox = NULL;
    if(*inicio==NULL)
        *inicio=e;
    else
    {
        elem *aux = *inicio;
        while(aux->prox!=NULL)
            aux = aux->prox;
        aux->prox = e;
    }
}

void cadastro(elem **inicio)
{
    aluno *a=(aluno *)malloc(sizeof(aluno));
    cout << "Insira a matricula: ";
    cin >> a->mat;
    cout << "Insira o nome: ";
    cin >> a->nome;
    incluiraluno(a, inicio);
}

void listar(elem **inicio)
{    
    elem *p = *inicio;
    cout<<endl;
    for(p = *inicio; p != NULL; p = p->prox) 
	{
		cout<<" "<<p->aluno->nome<<endl;
	}
	Sleep (3000);
}

void remover(elem **inicio)
{	
	int matricula;
	
	elem* a = NULL;
 	elem* p = *inicio;
 	
 	cout << "Digite a matricula do aluno que deseja excluir: "<<endl;
 	cin >> matricula;
 	
 	while (p != NULL && p->aluno->mat != matricula) 
	{
 		a = p;
 		p = p->prox; 
 	}
 	
 	if (p == NULL) 
	{
		cout<<" A matricula inserida nao existe!"<<endl;
		return;
	}
 	if (a == NULL) 
	{
 		*inicio = p->prox; 
	}
 	else 
	{
 		a->prox = p->prox; 
	}
	free(p);
	cout<<" O aluno com a matricula: "<<matricula<<" foi removido!"<<endl;
	Sleep (3000);
}

void procurarpormatricula(elem **inicio)
{
	int matricula, cont = 0;
	
	cout << "Escreva a matricula do aluno desejado: ";
	cin >> matricula;
	
	elem *p = *inicio;
	cout<<endl;
    for(p = *inicio; p != NULL; p = p->prox) 
	{
    	if(p->aluno->mat == matricula) 
		{
			cout<<" "<<p->aluno->nome<<endl;
			cont = 1;
	 	}
	}
	if(cont == 0)
	{
		cout<<" A matricula inserida nao existe!"<<endl;
	}
	Sleep (3000);

}

int main()
{
    elem *inicio = NULL;
    char menu;
    do
    {
        system("CLS");
        cout << endl << " 1 - Cadastro" << endl;
        cout << " 2 - Listar" << endl;
        cout << " 3 - Remover" << endl;
        cout << " 4 - Procurar por matricula" << endl;
        cout << " 0 - Sair" << endl << endl;
        cout << " Insira a opcao: ";
        menu = getch();
        switch(menu)
		{
			case '1':
				system("cls");
				cadastro(&inicio);
				break;
			case '2':
				system("cls");
				listar(&inicio);
				break;
			case '3':
				system("cls");
				remover(&inicio);
				break;
			case '4':
				system("cls");
				procurarpormatricula(&inicio);
				break;
		}
    } while(menu != '0');
    exit(0);
}
