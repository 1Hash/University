/**************************[Everton Silva]*******************************
*************************************************************************
*************************************************************************
**************************[JOGO DA FORCA 2.0]****************************
***************************[SEGUNDO PERÍODO]*****************************
*************************************************************************
************************************************************************/

//===================[Declarações de bibliotecas]===================//

#include <cstdio>
#include <cstdlib>
#include <conio.h>
#include <iostream>
#include <string.h>
#include <windows.h>
#include <time.h>

#define VALIDO   1
#define INVALIDO 0

using namespace std;

//===================[Declarações de funções]===================//

void jogo_da_forca();
void novo_jogo();
void inserir();
void novas_palavras();
void sair();
void jogo();
void chutar();
void menu();
void saida();
void fim();

//===================[Declarações de variáveis globais]===================//

char nome1[30];
char nome2[30];
char LU[30];
char T2[2] = "\xFE";

char ctn, vmenu;

int aux = 0, aux3 = 0, aux2 = 0;

int jogador = 0, pontos1 = 0, pontos2 = 0, vg = 0, vezes_inserir = 0, auxiliar = 0, auxi = 0, acr = 0, vg2 = 0, aux4 = 0;

//===================[Declarações de estruturas]===================//

struct palavras_inseridas {
	
	char P[10];
    char PAUX[10];
    char DP[15];
    char P2[15];
	
};

palavras_inseridas pi[20];

bool ValidaLetra(char L) {
	
	if(L >='A' and L <= 'Z')
	return true;
	   if(L == '\xC1') //ç
	   return true;
	   
	   return false;
	
}

main() {
	
	system("color F0");
	system("title JOGO DA FORCA");
	
	jogo_da_forca();
}

//===================[Funções]===================//

void jogo_da_forca() {
	
	do{
    	system("cls");
    			
  		printf(" =============================================================================\n");
		printf("|                                                                             |\n");
		printf("|   000101110      0000     1110010101    00110101   11001010                 |\n");
		printf("|   000          00    11   00      10    10         01    00                 |\n");
		printf("|   10110011     00    01   0101010101    11         11000100                 |\n");
		printf("|   00110010     00    11   01    11      00         00    01                 |\n");
		printf("|   111          00    10   11      10    01         10    00                 |\n");
		printf("|   001            1100     01       01   10101011   10    11                 |\n");
		printf("|                                                                             |\n");
		printf("|                                                                             |\n");
		printf("|                                                                             |\n");
		printf("|                                                                             |\n");
		printf("|                                                                             |\n");
		printf("|                                                                             |\n");
		printf("|         1 <- NOVO JOGO.                                                     |\n");
		printf("|                                                                             |\n");
		printf("|         2 <- INSERIR NOVAS PALAVRAS.                                        |\n");
		printf("|                                                                             |\n");
		printf("|         3 <- SAIR.                                                          |\n");
		printf("|                                                                             |\n");
		printf("|                                                                             |\n");
		printf("|                                                                             |\n");
		printf("|                                                                             |\n");
		printf(" =============================================================================\n");		
    			
    	vmenu = getch();
    			
    }while(vmenu != '1' && vmenu != '2' && vmenu != '3');
				
	switch(vmenu) {
		case '1': novo_jogo();
		break;
		case '2': inserir();
		break;
		case '3': sair();
	}
		
}

void novo_jogo() {
	
	system("cls");
	
	cout<<"ESCREVA O NOME DO PRIMEIRO JOGADOR:";
	cin>>nome1;
	strupr(nome1);
	
	cout<<"ESCREVA O NOME DO SEGUNDO JOGADOR:";
	cin>>nome2;
	strupr(nome2);
	
	jogo();
	
}

void jogo() {
	
	char A[10] = "ABELHA";
	strcat(pi[0].P,A);
    char A2[10] = "\xFE\xFE\xFE\xFE\xFE\xFE";
    strcat(pi[0].PAUX,A2);
    char DA[15] = "TEM FERRAO";
    strcat(pi[0].DP,DA);
    char B[10] = "CADERNO";
    strcat(pi[1].P,B);
    char B2[10] = "\xFE\xFE\xFE\xFE\xFE\xFE\xFE";
    strcat(pi[1].PAUX,B2);
    char DB[20] = "USA-SE NA ESCOLA";
    strcat(pi[1].DP,DB);
    char C[10] = "AVIAO";
    strcat(pi[2].P,C);
    char C2[10] = "\xFE\xFE\xFE\xFE\xFE";
    strcat(pi[2].PAUX,C2);
    char DC[15] = "VOA";
    strcat(pi[2].DP,DC);
    char D[10] = "SOM";
    strcat(pi[3].P,D);
    char D2[10] = "\xFE\xFE\xFE";
    strcat(pi[3].PAUX,D2);
    char DD[15] = "\x90 INVISIVEL";
    strcat(pi[3].DP,DD);
    char E[10] = "CACHORRO";
    strcat(pi[4].P,E);
    char E2[10] = "\xFE\xFE\xFE\xFE\xFE\xFE\xFE\xFE";
    strcat(pi[4].PAUX,E2);
    char DE[15] = "GOSTA DE OSSO";
    strcat(pi[4].DP,DE);
    char F[10] = "NUVEM";
    strcat(pi[5].P,F);
    char F2[10] = "\xFE\xFE\xFE\xFE\xFE";
    strcat(pi[5].PAUX,F2);
    char DF[15] = "FAZ CHOVER";
    strcat(pi[5].DP,DF);
    char G[10] = "CINEMA";
    strcat(pi[6].P,G);
    char G2[10] = "\xFE\xFE\xFE\xFE\xFE\xFE";
    strcat(pi[6].PAUX,G2);
    char DG[15] = "LUGAR ESCURO";
    strcat(pi[6].DP,DG);
    char H[10] = "CELULAR";
    strcat(pi[7].P,H);
    char H2[10] = "\xFE\xFE\xFE\xFE\xFE\xFE\xFE";
    strcat(pi[7].PAUX,H2);
    char DH[25] = "APARELHO DE COMUNICACAO";
    strcat(pi[7].DP,DH);
    char I[10] = "DINHEIRO";
    strcat(pi[8].P,I);
    char I2[10] = "\xFE\xFE\xFE\xFE\xFE\xFE\xFE\xFE";
    strcat(pi[8].PAUX,I2);
    char DI[15] = "VALIOSO";
    strcat(pi[8].DP,DI);
    char J[10] = "TEMPO";
    strcat(pi[9].P,J);
    char J2[10] = "\xFE\xFE\xFE\xFE\xFE";
    strcat(pi[9].PAUX,J2);
    char DJ[15] = "NUNCA PARA";
    strcat(pi[9].DP,DJ);
    char LUAUX[30];
    
    for(int p=0; p<30; p++) {
    	LU[p] = '\0';
    	LUAUX[p] = '\0';
    }
    
    int N[10+vezes_inserir];
    int status;
    char e;
    
    for(int i=0; i<10+vezes_inserir+auxi; i++) {
    	
    	auxi = 0;
    	aux3 = 0;
    	aux4 = 0;
    	
		do {
   			int max=10+vezes_inserir;
			srand(time(NULL));
   	     	N[i] = rand() % 10+vezes_inserir;
   	   		status = VALIDO;
     		for (int q = 0; q < i; q++)
    	   		if (N[i] == N[q])
    	   		status = INVALIDO;
   		} while (status == INVALIDO);
   		
		while(aux3 < strlen(pi[i].P)) {
		
				do {
				
					auxiliar = N[i];
					vg = N[i];
				
					menu();
					
            		if(aux2 == 1) {
						cout<<"Essa letra ja foi escolhida, escolha outra:"<<endl;
					}
            	
            		e = getch();
            		e = toupper(e);
            	
            		aux2 = 0;
   		
					for(int q2=0; q2<27; q2++) {
				
						if(e == LU[q2]){
							aux2 = 1;
						}
					}
				
				}while(aux2 != 0 || !ValidaLetra(e));
				
				LU[aux4] = e;
				aux4++;
				
				for(int m=0; m<10; m++) {
			
					if (e == pi[auxiliar].P[m]) {
				
					 	pi[auxiliar].PAUX[m] = e;
					 	aux3++;
					 	aux++;
				
						if (jogador % 2 == 0) {
							pontos1 = pontos1 +10;
						}
						if (jogador % 2 != 0) {
							pontos2 = pontos2 +10;
						}
					}
				}
				
				if(((strlen(pi[auxiliar].P)/2)+1) <= aux && aux < (strlen(pi[auxiliar].P))) {
    	        	chutar();
    	        	
        		}
		
			jogador++;
   		
			if(aux == (strlen(pi[auxiliar].P))) {
			
				saida();
			
			}
   		}
	}
	
	fim();	
}

void saida() {

	do{
					
		menu();
		
		if(acr == 1) {
			
			printf("Parabens, voce acertou a palavra e ganhou 100 pontos!\n\n");
		}
		
		acr = 0;
					
		if (pontos1 > pontos2) {
			printf("Parabens %s, voce ganhou essa partida.\n\n", nome1);
		}
		if (pontos2 > pontos1) {
			printf("Parabens %s, voce ganhou essa partida.\n\n", nome2);
		}
		if (pontos1 == pontos2) {
			printf("Voces empataram, os dois jogadores venceram essa partida.\n\n");
		}
			
		printf("Aperte 'S' para continuar e 'N' para voltar ao menu.\n\n\n");							
		ctn = getch();
		ctn = toupper(ctn);
				
	}while(ctn != 'S' && ctn != 'N');
	
	if (ctn == 'N') {
					
		fim();
	}
				
	if (ctn == 'S') {
					
		jogador = 0, aux = 0, aux3 = 15, aux2 = 0, auxiliar, auxi = 0, acr = 0, aux4 = 0;
		
		for(int u=0; u<30; u++) {
			LU[u] = '\0';
		}
					
	}
			
}

void fim() {
	
	system("cls");
	system("color F0");
	printf("\n PONTOS JOGADOR %s:%d\n",nome1, pontos1);
	printf(" PONTOS JOGADOR %s:%d\n\n\n",nome2, pontos2);
	if (pontos1 > pontos2) {
		printf(" PARABENS JOGADOR %s VOCE GANHOU!", nome1);
	}
	if (pontos2 > pontos1) {
		printf(" PARABENS JOGADOR %s VOCE GANHOU!", nome2);
	}
	if (pontos1 == pontos2) {
		printf(" PARABENS AOS DOIS JOGADORES, POIS HOUVE UM EMPATE!");
	}
	printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
	system("pause");
				
	jogador = 0, pontos1 = 0, pontos2 = 0, aux = 0, aux3 = 15, aux2 = 0, vg = 0, vezes_inserir = 0, auxiliar = 0, auxi = 0, acr = 0, vg2 = 20, aux4 = 0;
		
	for(int k=0; k<30; k++) {
		LU[k] = '\0';
	}
				
	main();
	
}

void menu() {
	
	system("cls");

    if (jogador % 2 == 0) {
        system("color F1");
        printf("JOGADOR 1:%s                              \n", nome1);
    }
    if (jogador % 2 != 0) {
        system("color FC");
        printf("JOGADOR 2:%s                              \n", nome2);
    }
	printf(" \xC9\xCD\xCD\xCD\xCD\xCD\xCD\xBB      \n");
	printf(" \xBA      \xBA                               PONTOS %s:%d\n",nome1, pontos1);
	printf(" \xBA      O                               PONTOS %s:%d\n",nome2, pontos2);
	printf(" \xBA      \xB3                        \n");
	printf(" \xBA     /\xB3\\                      \n");
	printf(" \xBA      \xB3                        \n");
	printf(" \xBA     / \\                         \n");
	printf(" \xBA                                  \n");
	printf(" \xBA                                  \n");
	printf(" \xBA                                  \n");	
	printf(" \xBA %s                              \n\n", pi[auxiliar].PAUX);
			
	cout<<"Letras que voce ja usou:"<<LU<<endl;
    cout<<"Escolha uma letra de A ate Z:"<<endl<<endl;
	
}

void chutar() {
	
	menu();
	
	int chuteaux = 1;
	char chute;

	printf("Dica:%s\n\n",pi[vg].DP);
								
	do {
        printf("Deseja chutar a palavra? (S/N)\n\n");
        chute = getch();
        chute = toupper(chute);
    }while(chute != 'S' && chute != 'N');
                	    		
    if (chute == 'S') {
                	    			
		printf("Escreva a palavra:");
    	scanf("%s", pi[vg].P2);
    	strupr(pi[vg].P2);
                	    			
		for(int z=0; z<strlen(pi[vg].P); z++) {
			if (pi[vg].P2[z] != pi[vg].P[z]) {
				chuteaux = 0;
				auxi = 15;
			}
		}
                	    			
    	if(chuteaux == 1) {
    		
    		if(jogador % 2 == 0) {
        		pontos1 = pontos1 + 100;
    		}
			if(jogador % 2 != 0) {
      	 		pontos2 = pontos2 + 100;
   			}

			for (int qp = 0; qp < 10; qp++) {
				pi[vg].P2[qp] = 0;
			}
			
			jogador++;
			acr = 1;
			
			saida();
			
  	 	}
		else {
			
			printf("\nVoce errou, e perdeu tudo.\n\n");
			
			system("pause");
        	
       		if(jogador % 2 != 0) {
            	pontos2 = 0;
        	}
			if(jogador % 2 == 0) {
        	    pontos1 = 0;
        	}
        	for (int qp = 0; qp < 10; qp++) {
				pi[vg].P2[qp] = 0;
			}
			
        	jogador++;
            chuteaux = 1;
            acr = 0;
            
        }         	    			
    }
    
    if (chute == 'N') {
       	menu();
    }

}

void inserir() {
	
	system("cls");
	
	char senha[7];
	char senha2[7] = "123456";
	int contsenha = 0;
	
	cout<<"INSIRA A SENHA:";
	cin>>senha;

	for(int i=0; i<6; i++) {
		if(senha[i] == senha2[i]){
			contsenha++;
		}
	}
	
	if (contsenha == 6) {
		
		system("color F2");
		system("cls");
		cout<<"ACESSO CONCEDIDO.";
		Sleep(1500);
		novas_palavras();
		
		
	}
	
	else {
		
		system("color F4");
		system("cls");
		cout<<"ACESSO NEGADO.";
		Sleep(1500);
		main();
	}
	
}

void novas_palavras() {
	
	char escolha;
	int l = 0;
	
	for(int n=10; n<20; n++) {
		
		system("color F0");
		system("cls");
		
		cout<<"DIGITE A PALAVRA QUE DESEJA INSERIR["<<n-9<<"]:";
		cin>>pi[n].P;
		strupr(pi[n].P);
		
		for(int z=0; z<=(strlen(pi[n].P)-1); z++) {
			pi[n].PAUX[z] = T2[l];
		}
		
		cout<<"DIGITE A DICA DA PALAVRA QUE VOCE INSERIU["<<n-9<<"]:";
		cin>>pi[n].DP;
		strupr(pi[n].DP);
		
		do {
			
			system("cls");
			
			cout<<"DESEJA INSERIR MAIS PALAVRAS? (S/N)";
			escolha = getch();
			escolha = toupper(escolha);
			
		}while(escolha != 'S' && escolha != 'N');
		
		if(escolha == 'N') {
			
			n = 20;
		}
		vezes_inserir++;
	}
	
	novo_jogo();
}

void sair() {
	
	system("cls");
	
	vmenu = '3';
	
	cout<<"OBRIGADO POR JOGAR!"<<endl;
	Sleep(3000);
	exit(0);
}
