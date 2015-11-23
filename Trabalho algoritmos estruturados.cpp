#include <cstdio>
#include <cstdlib>
#include <iostream>
#include <conio.h>
#include <windows.h>

using namespace std;

//================================================[ DECLARAÇÃO DE FUNÇÕES ]================================================//

int exe1t5();
int exe1t1();
int exe3t1();
int exe2t1();
int exe1t2();
int exe1t3();
int tarefa1();

//========================================================[ MENU ]========================================================//

main() {
	
	char sel;
	
	system("cls");
	
	do {
		
		cout<<endl;
		cout<<" 1 - Operacoes sobre matrizes."<<endl;
		cout<<" 2 - Estrutura de funcionario."<<endl;
		cout<<" 3 - Rotinas para poligonos."<<endl;
		cout<<" 4 - Estrutura de matricula."<<endl;
		cout<<" 5 - Sair"<<endl;
		
		sel = getch();
	
		system("cls");
		
	}while (sel != '1' && sel != '2' && sel != '3' && sel != '4' && sel != '5');
	
	switch(sel) {
		
		case '1': tarefa1();
		break;
		case '2': exe1t2();
		break;
		case '3': exe1t3();
		break;
		case '4': exe1t5();
		break;
		case '5': exit(0);
		break;
	}
	
}

//========================================================[ TAREFA 1 ]========================================================//
int tarefa1() {
	
	char sel;
	
	system("cls");
	
	do {
		do {
		
			cout<<endl;
			cout<<" 1 - Multiplicar um valor por uma matriz."<<endl;
			cout<<" 2 - Achar a linha que possui a maior soma."<<endl;
			cout<<" 3 - Incompleto."<<endl;
			cout<<" 4 - Voltar"<<endl;
		
			sel = getch();
	
			system("cls");
			
		}while (sel != '1' && sel != '2' && sel != '3' && sel != '4');
	
		switch(sel) {
			
			case '1': exe1t1();
			break;
			case '2': exe2t1();
			break;
			case '3': exe3t1();
			break;
			case '4': main();
		}
		
	}while(1);
	
}

int exe1t1() { //exercício 1
	
	int M[3][3];
	int esc, num;
	
	cout<<"Escreva um valor para ser multiplicado por cada numero da matriz: ";
	cin>>esc;
	
	system("cls");
	
	for(int a = 0, c = 1; a < 3; a++) {
		for(int b = 0; b < 3; b++, c++) {
			cout<<"Escreva um valor para essa posicao da matriz["<<c<<"]: ";
			cin>>num;
			M[a][b] = (num*esc);
			system("cls");
		}
	}
	
	for(int a = 0; a < 3; a++) {
		for(int b = 0; b < 3; b++) {
			cout<<M[a][b]<<"\t";
		}
		cout<<"\n";
	}
	cout<<endl;
	system("pause");
	main();
}

int exe2t1() { //exercício 2
	
	int i = 0, r = 0, maior = 0, pos = 0, num = 0;
	
	cout<<"Escolha o tamanho da sua matriz(linhas e culunas): ";
	cin>>i;
	
	int M[i][i];
	int V[i];
	
	for(int a = 0, c = 1; a < i; a++) {
		for(int b = 0; b < i; b++, c++) {
			system("cls");
			cout<<"Escreva um valor para essa posicao da matriz["<<c<<"]: ";
			cin>>num;
			M[a][b] = num;
		}
	}
	
	for(int j=0; j<=i; j++) {
		for(int g=0; g<=i; g++) {
			
			r = r + M[g][j];
			
		}
		V[j] = r;
	}
	
	maior = V[0];
	
	for(int k=0; k<=i; k++) {
		if(maior < V[k]){
            maior = V[k];
            pos = k;
        }
	}
	
	cout<<"A linha que possui a maior soma eh a linha: "<<pos<<endl;
	
	cout<<endl;
	system("pause");
	main();
}

int exe3t1() {
	
	
	
}

//========================================================[ TAREFA 2 ]========================================================//

void voltar_ao_menu();
void LerFuncionario();
void eliciaColorida();

int j=0, b=0, cont=0;
char escolha;

struct Funcionario {

	char nome[50];
	int idade;
	char sexo;
	float salario;
};

Funcionario p[100];

int exe1t2() {
    
	int midade=0, midade2=0, pid=0, salario=0, salariop=0, soma=0;
	char seleciona;
	
	do {
		
		cout<<endl;
		cout<<" 1 - Adicionar um funcionario"<<endl;
		cout<<" 2 - Mostrar o nome de todos funcionario"<<endl;
		cout<<" 3 - Mostrar todos os dados do funcionario que tenha a maior idade"<<endl;
		cout<<" 4 - Calcular o total de salario gasto pela empresa"<<endl;
		cout<<" 5 - Voltar"<<endl;
		
		seleciona = getch();
	
		system("cls");
		
	}while (seleciona != '1' && seleciona != '2' && seleciona != '3' && seleciona != '4' && seleciona != '5');
	
	switch(seleciona) {
    	case '1':
    		
    		LerFuncionario();
    		
    		voltar_ao_menu();
    		
    	break;
    	case '2':
    		
    		for(int i=0; i < j ;i++) {
    			cout<<"Nome: "<<p[i].nome<<endl;
    		}
			
			voltar_ao_menu();
					
    	break;
    	case '3':
    		
			for(int k=0; k < j; k++) {
				midade = p[k].idade;
				if (midade > midade2) {
					midade2 = midade;
					pid = k;
				}
			}
			
			cout<<"Nome : "<<p[pid].nome<<endl;
    		cout<<"Idade : "<<p[pid].idade<<endl;
    		cout<<"Sexo : "<< p[pid].sexo<<endl;
   			cout<<"Salario :"<<p[pid].salario<<endl;
    		
			voltar_ao_menu();
    		
    	break;
    	case '4':
    		
			for(int b=0; b < j ;b++){
					soma = soma + p[b].salario;
			}
			
			cout<<"O total em salario eh: "<<soma<<endl;
			
			voltar_ao_menu();
				
		break;
		case '5': main();
		break;
	}
	
}

void LerFuncionario() {
    
	cout<<"======== Cadastro de Funcionario ========"<<endl;
	Sleep(1000);
	cout<<"Nome : ";
	cin>>p[j].nome;
    cout<<"Idade : ";
    cin>>p[j].idade;
    cout<<"Sexo (M/F): ";
    p[j].sexo = getch();
    p[j].sexo = toupper(p[j].sexo);
    cout<<p[j].sexo;
    cout<<"Salario :";
    cin>>p[j].salario;
    j++;
}

void voltar_ao_menu() {
	
	cout<<endl;
	cout<<"Deseja voltar ao menu? (S/N)";
	escolha = getch();
	cout<<endl;
			
	if(escolha == 's' || escolha == 'S') {
		system("cls");
		main();
	} 
}

//========================================================[ TAREFA 3 ]========================================================//

double retangulo(int q, char d) { //exercício 2
	
	cout<<"Escreva o tamanho do quadrado: ";
	cin>>q;
	cout<<"Escreva um caractere: ";
	cin>>d;
	
	for(int a=0; a < q; a++) {
		for(int b = 0; b < q; b++) {
			cout<<d<<"\t";
		}
		cout<<endl;
	}
	
}

int exe1t3() { //exercício 1
	
	int c, l, q;
	char d, cond;
	
	do {
	
		system("cls");
	
		cout<<endl<<" 1 <- Retangulo."<<endl<<" 2 <- Quadrado."<<endl<<" 3 <- Triangulo retangulo."<<endl<<" 4 <- Triangulo equilatero."<<endl;
	
		cond = getch();
		
	}while(cond != '1' && cond != '2' && cond != '3' && cond != '4');
	
	system("cls");
	
	if(cond == '2') { //exercício 2
		
		retangulo(q,d);
		
	}
	
	
	if(cond == '1') { //exercício 1
	
		cout<<"Escreva o numero de linhas: ";
		cin>>l;
		cout<<"Escreva o numero de colunas: ";
		cin>>c;
		cout<<"Escreva um caractere: ";
		cin>>d;
	
	
		system("cls");
	
		for(int a=0; a < c; a++) {
			for(int b = 0; b < l; b++) {
				cout<<d<<"\t";
			}
			cout<<endl;
		}
	}
	
	if(cond == '3') { //exercício 3
		
		int x;
		char z;
		
		cout<<"Escreva o tamanho o triangulo retangulo: ";
		cin>>x;
		cout<<"Escreva um caractere: ";
		cin>>z;
		
		for(int g=0, y=0; g<=x; g++, y++) {
			for(int h=0; h<y; h++) {
				cout<<z;
			}
			cout<<"\n";
		}
	}
	
	if(cond == '4') { //exercício 4
		
		int q;
		char r;
		
		cout<<"Escreva o tamanho o triangulo equilatero: ";
		cin>>q;
		cout<<"Escreva um caractere: ";
		cin>>r;
		
		cout<<endl;
		
		for(int p=q, u=q; p>0; p--, u--) {
			for(int f=0; f<u; f++) {
				cout<<r;
			}
			cout<<"\n";
		}	
	}
	
	cout<<endl;
	system("cls");
	main();
}

//========================================================[ TAREFA 5 ]========================================================//

struct diciplina {
	
    char nome[40];
	float horas;
	
	
};

struct aluno {
	
	char nome[40];
	char data[11];
	char dataini[11];
	char nomed[30][30];
	
};

diciplina d[100];
aluno a[100];

int i = 0, l = 0, k = 0;

void LerDisciplina();
void LerAluno();
void Matricula();
void MostrarNomeAluno();
void MostrarNomeDisciplina();
void alterardadosaluno();
void mostrardiciplinas();
void mostraralunos();

int exe1t5() {
	
	char seleciona;
	
	do {
		do {
			
			system("cls");
		
			cout<<endl;
			cout<<" 1 - Adicionar uma disciplina."<<endl;
			cout<<" 2 - Adicionar um aluno."<<endl;
			cout<<" 3 - Matricular aluno na disciplina."<<endl;
			cout<<" 4 - Mostrar o nome de todos os alunos."<<endl;
			cout<<" 5 - Mostrar o nome de todas as disciplinas."<<endl;
			cout<<" 6 - Alterar dados de um aluno."<<endl;
			cout<<" 7 - Mostrar todas as disciplinas que um aluno faz."<<endl;
			cout<<" 8 - Voltar"<<endl;
		
			seleciona = getch();
			
			system("cls");
		
		}while (seleciona != '1' && seleciona != '2' && seleciona != '3' && seleciona != '4' && seleciona != '5' && seleciona != '6' && seleciona != '7' && seleciona != '8' && seleciona != '9');
	
		switch(seleciona) {
		
			case '1': LerDisciplina();
			break;
			case '2': LerAluno();
			break;
			case '3': Matricula();
			break;
			case '4': MostrarNomeAluno();
			break;
			case '5': MostrarNomeDisciplina();
			break;
			case '6': alterardadosaluno();
			break;
			case '7': mostrardiciplinas();
			break;
			case '8': main();
		}
	}while(1);
}

void mostrardiciplinas() {
	
	int exit=0;
	
	cout<<"======== Mostrar disciplinas ========"<<endl;
	Sleep(1000);
	for(int p;p<40;p++){
	
	cout<<d[p].nome<<endl;
		for(int j;j<40;j++){
			cout<<d[j].nome<<endl;
		}
		
	}
	do{
		cout<<"voltar ao menu (1)"<<endl;
		cin>>exit;
		system("cls");
		
	}while(exit==1);
	
	if(exit==1){
	 	exe1t5();
	}
	
}

void alterardadosaluno() {
	
	string nome;
	int y = 0;
	
	cout<<"======== Alterar dados ========"<<endl;
	Sleep(1000);
	cout<<"Ache o aluno pelo nome: ";
	cin>>nome;
	for(int o = 0; o<=l; o++) {
		if(nome == a[o].nome) {
			y = 1;
		}
	}
	if(y != 1) {
		cout<<"Esse aluno não existe!"<<endl;
		alterardadosaluno();
	}
	
	system("cls");
	
	cout<<"======== Cadastro de Aluno ========"<<endl;
	Sleep(1000);
	cout<<"Nome: ";
	cin>>a[l].nome;
    cout<<"Data de nascimento DD/MM/AAAA: ";
    cin>>a[l].data;
    cout<<"Data que iniciou o curso DD/MM/AAAA: ";
   	cin>>a[l].dataini;
	
}

void MostrarNomeDisciplina() {
    
	cout<<"======== Todas as disciplinas ========"<<endl;
	Sleep(1000);
	for(int q=0; q<=i; q++) {
		cout<<d[q].nome<<endl;
	}
	
	system("pause");
}

void MostrarNomeAluno() {
    
	cout<<"======== Todos os alunos ========"<<endl;
	Sleep(1000);
	for(int p=0; p<=l; p++) {
		cout<<a[p].nome<<endl;
	}
	
	system("pause");
}

void Matricula() {
	
	int y = 0, t = 0;
	int r, b;
    
	cout<<"======== Matricula ========"<<endl;
	Sleep(1000);
	cout<<"Numero da diciplina: ";
	for(int qq = 0,qqq = 0; qq<=i-1 ; qq++, qqq++) {
		cout<<endl<<"["<<qqq<<"] "<<d[qq].nome<<endl<<endl;
	}
	r=getch();
	
	cout<<"Numero do aluno: ";
	for(int qq = 0,qqq = 0; qq<=l-1 ; qq++, qqq++) {
		cout<<endl<<"["<<qqq<<"] "<<a[qq].nome<<endl<<endl;
	}
	b=getch();
	
	for(int i=0; i<30; i++) {
		for(int j=0; j<30; j++) {
			a[b].nomed[i][j] = '\0';
		}
	}
	
	for(int i=0, j=0, x=0; x<=strlen(d[r].nome); i++, x++) {
		if(a[b].nomed[i][j] == '\0') {
			a[b].nomed[i][j] = d[r].nome[i];
		}
		else if(a[b].nomed[i][j] != '\0'){
			j++;
			i=0;
			x=0;
		}
	}
	
	for(int gg=0; gg<15; gg++) {
		for(int g2=0; g2<15; g2++) {
			cout<<a[b].nomed[gg][g2];
		}
		cout<<endl;
	}
	system("pause");
	
}

void LerAluno() {
    
	cout<<"======== Cadastro de Aluno ========"<<endl;
	Sleep(1000);
	cout<<"Nome: ";
	cin>>a[l].nome;
    cout<<"Data de nascimento DD/MM/AAAA: ";
    cin>>a[l].data;
    cout<<"Data que iniciou o curso DD/MM/AAAA: ";
   	cin>>a[l].dataini;
   	
   	l++;
}
	
void LerDisciplina() {
    
	cout<<"======== Cadastro de Diciplina ========"<<endl;
	Sleep(1000);
	cout<<"Nome : ";
	cin>>d[i].nome;
    cout<<"Horas: ";
   	cin>>d[i].horas;
	   										
   	i++;
}
