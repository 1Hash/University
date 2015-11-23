#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <ctype.h>
#include <windows.h>
#include <string.h>
#include <time.h> 

#define VALIDO   1
#define INVALIDO 0

void menu2();
void menu();

int main ()
{
        system("title JOGO DA FORCA");
        system("color F0");
        char continuar, escolha;
        int condmenu;
        
        condmenu = 0;
        
        system("cls");
        escolha = '0';
                
        system("title JOGO DA FORCA");
		system("color F0");
	
		system("cls");
		
		printf(" =============================================================================\n");
		printf("|                                                                             |\n");
		printf("|   000101110      0000     1110010101    00110101   11001010                 |\n");
		printf("|   000          00    11   00      10    10         01    00                 |\n");
		printf("|   10110011     00    01   0101000101    11         11000100                 |\n");
		printf("|   00110010     00    11   01    11      00         10    01                 |\n");
		printf("|   111          00    10   11      01    01   10    11    00                 |\n");
		printf("|   001            1100     01       10   10101011   10    11                 |\n");
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
    			
		
	
	Beep(480,170);
	menu2();
    Beep(1568,170);
    menu();
    Beep(1568,170);
    menu2();
    Beep(1568,170);
    menu();
    Beep(739.99,170);
    menu2();
    Beep(783.99,170);
    menu();
    Beep(783.99,170);
    menu2();
    Beep(783.99,170);
    menu();
    Beep(369.99,170);
    menu2();
    Beep(392,170);
    menu();
    Beep(369.99,170);
    menu2();
    Beep(392,170);
    menu();
    Beep(392,340);
    menu2();
    Beep(196,340);
    
   
	
			
    	do{
    		system("cls");
    			
  			printf(" =============================================================================\n");
			printf("|                                                                             |\n");
			printf("|   000101110      0000     1110010101    00110101   11001010                 |\n");
			printf("|   000          00    11   00      10    10         01    00                 |\n");
			printf("|   10110011     00    01   0101010101    11         11000100                 |\n");
			printf("|   00110010     00    11   01    11      00         00    01                 |\n");
			printf("|   111          00    10   11      10    01   10    10    00                 |\n");
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
    			
    			escolha = getch();
    			
    	}while(escolha != '1' && escolha != '2' && escolha != '3' && escolha != '4');
				
				if (escolha == '1') {
					condmenu = 1;
				}
				
				if (escolha == '2') {
					condmenu = 2;
				}
				
				if (escolha == '3') {
					condmenu = 3;
				}

        int r, e, m, i, status, cont, contz, pts1, pts2, contv, jogador, contf, contf2, contt1, contt2, contf3, contaux, contaux2, contzaux, chute, chuteaux, tecla, caps, contk, contpa1, contpaa, contpa2, contpab, contpa3, contpac, contpa4, contpad, contpa5, contpae, contve, condgh;
        
        int V[10];
        int N[10];
        
        char A[10] = "ABELHA";
        char A2[10] = "------";
        char DA[15] = "TEM FERRAO";
        char B[10] = "CADERNO";
        char B2[10] = "-------";
        char DB[20] = "USA-SE NA ESCOLA";
        char C[10] = "AVIAO";
        char C2[10] = "-----";
        char DC[15] = "VOA";
        char D[10] = "SOM";
        char D2[10] = "---";
        char DD[15] = "\x90 INVISIVEL";
        char E[10] = "CACHORRO";
        char E2[10] = "--------";
        char DE[15] = "GOSTA DE OSSO";
        char F[10] = "NUVEM";
        char F2[10] = "-----";
        char DF[15] = "FAZ CHOVER";
        char G[10] = "CINEMA";
        char G2[10] = "------";
        char DG[15] = "LUGAR ESCURO";
        char H[10] = "CELULAR";
        char H2[10] = "-------";
        char DH[25] = "APARELHO DE COMUNICACAO";
        char I[10] = "DINHEIRO";
        char I2[10] = "--------";
        char DI[15] = "VALIOSO";
        char J[10] = "TEMPO";
        char J2[10] = "-----";
        char DJ[15] = "NUNCA PARA";
        char alf[27] = "abcdefghijklmnopqrstuvxwyz";
        char ALFA[27] = "ABCDEFGHIJKLMNOPQRSTUVXWYZ";
        char MENOS[2] = "-";
        
        char nome1[30];
        char nome2[30];
        char nome3[30];
        
		char DICAA[15];
		char DICAB[15];
		char DICAC[15];
		char DICAD[15];
		char DICAE[15];
		char DICAF[15];
		char DICAG[15];
		char DICAH[15];
		char DICAI[15];
		char DICAJ[15];
		
        char ALFAAUX[30];
        char Z[25];
        char S[6];
        
		char ctn;
		
		contpa1 = 5;
		contpaa = 3;
		contpa2 = 6;
		contpab = 4;
		contpa3 = 4;
		contpac = 2;
		contpa4 = 2;
		contpad = 1;
		contpa5 = 7;
		contpae = 4;
		contve = 0;
		condgh = 0;
		
	if(condmenu == 2) {
		
		int condsenha, contsenha, num1;
		
		condsenha = 0;
		contsenha = 0;

		S[0] = 7;
		S[1] = 8;
		S[2] = 9;
		S[3] = 4;
		S[4] = 5;
		S[5] = 6;

		system("cls");
		int tecla = 20,valor; // verifica a CAPS LOCK__
			
		do {
			 	system("cls");
				valor = GetKeyState(tecla); 
				switch(valor) 
				{ 
				case 0: 
					printf("\nCAPS LOCK ESTA DESLIGADO.\n\n"); 
				break; 
				case 1: 
					printf("CAPS LOCK ESTA LIGADO.\n\n"); 
				} 
				printf("INSIRA A SENHA DE SEGURANCA:\n");
			
				scanf("%d",&num1); 
			
 		 		V[0] = num1/100000;
  	 	 		V[1] = (num1%100000)/10000;
	 	 		V[2] = (num1%10000)/1000;
	 	 		V[3] = (num1%1000)/100;
  		 		V[4] = (num1%100)/10;
 		 		V[5] = num1%10;
 		 		
		    	if((V[0]==S[0]) && (V[1]==S[1]) && (V[2]==S[2]) && (V[3]==S[3]) && (V[4]==S[4]) && (V[5]==S[5])) {
		    		condsenha = 1;
		    	}
		    
		    	if((V[0]!=S[0]) || (V[1]!=S[1]) || (V[2]!=S[2]) || (V[3]!=S[3]) || (V[4]!=S[4]) || (V[5]!=S[5])) {
		    		condsenha = 0;
		    		contsenha++;
		   		}
		   		
		   		if (contsenha == 3) {
		   			condsenha = 1;
		   			main();
		   		}
		}
		while(condsenha != 1);
		    
		    
		    if (condsenha == 1) {
		    	
		    	system("cls");
		    	system("color F3");
				printf("\n ACESSO CONCEDIDO.\n");
				Sleep(1500);
					
				for(int con=0; con<5; con++)	
				{
					
					if(condsenha == 1)
					{
						
						do	
						{
						
							system("cls");
							system("color F0");
							if (con == 0) {	
							
										contpa1 = 0;
										contpaa = 0;
							
								for (int kl=0; kl < 15; kl++) {
									A[kl] = 0;
									A2[kl] = 0;
									DA[kl] = 0;
								}
							
								printf("\nDigite a palavra[1] desejada:\n");	
								scanf("%s",&A);
								
								for (int contw = 0; contw < 27; contw++) {
								
									for (int contq = 0; contq < 27; contq++) {
								
										if (A[contw] == alf[contq]) {
											A[contw] = ALFA[contq];
										}
									}
								}
								
								for (int kk=0; kk < 15; kk++) {
									if (A[kk] != 0) {
										A2[kk] = MENOS[0];
										contpa1++;
									}
								}
								
								contpaa = contpa1 / 2;
							
							}
							if (con == 1) {	
							
								contpa2 = 0;
								contpab = 0;
							
								for (int kl=0; kl < 15; kl++) {
									B[kl] = 0;
									B2[kl] = 0;
									DB[kl] = 0;
								}
							
								printf("\nDigite a palavra[2] desejada:\n");	
								scanf("%s",&B);
								
								for (int contw = 0; contw < 27; contw++) {
								
									for (int contq = 0; contq < 27; contq++) {
								
										if (B[contw] == alf[contq]) {
											B[contw] = ALFA[contq];
										}
									}
								}
								
								for (int kk=0; kk < 10; kk++) {
									if (B[kk] != 0) {
										B2[kk] = '-';
										contpa2++;
									}
								}
								
								contpab = contpa2/2;
								
							}
							if (con == 2) {	
							
								contpa3 = 0;
								contpac = 0;
							
								for (int kl=0; kl < 15; kl++) {
									C[kl] = 0;
									C2[kl] = 0;
									DC[kl] = 0;
								}
							
								printf("\nDigite a palavra[3] desejada:\n");	
								scanf("%s",&C);
								
								for (int contw = 0; contw < 27; contw++) {
								
									for (int contq = 0; contq < 27; contq++) {
								
										if (C[contw] == alf[contq]) {
											C[contw] = ALFA[contq];
										}
									}
								}
								
								for (int kk=0; kk < 10; kk++) {
									if (C[kk] != 0) {
										C2[kk] = '-';
										contpa3++;
									}
								}
								
								contpac = contpa3/2;
																
							}
							if (con == 3) {	
							
								contpa4 = 0;
								contpad = 0;
							
								for (int kl=0; kl < 15; kl++) {
									D[kl] = 0;
									D2[kl] = 0;
									DD[kl] = 0;
								}
							
								printf("\nDigite a palavra[4] desejada:\n");	
								scanf("%s",&D);
								
								for (int contw = 0; contw < 27; contw++) {
								
									for (int contq = 0; contq < 27; contq++) {
								
										if (D[contw] == alf[contq]) {
											D[contw] = ALFA[contq];
										}
									}
								}
								
								for (int kk=0; kk < 10; kk++) {
									if (D[kk] != 0) {
										D2[kk] = '-';
										contpa4++;
									}
								}
								
								contpad = contpa4/2;
								
							}
							if (con == 4) {	
							
								contpa5 = 0;
								contpae = 0;
							
								for (int kl=0; kl < 15; kl++) {
									E[kl] = 0;
									E2[kl] = 0;
									DE[kl] = 0;
								}
							
								printf("\nDigite a palavra[5] desejada:\n");	
								scanf("%s",&E);
								
								for (int contw = 0; contw < 27; contw++) {
								
									for (int contq = 0; contq < 27; contq++) {
								
										if (E[contw] == alf[contq]) {
											E[contw] = ALFA[contq];
										}
									}
								}
								
								for (int kk=0; kk < 10; kk++) {
									if (E[kk] != 0) {
										E2[kk] = '-';
										contpa5++;
									}
								}
								
								contpae = contpa5/2;
								
							}
							
							printf("\n");
						
							if (con == 0) {
								
								for (int km=0; km < 15; km++) {
									DA[km] = 0;
								}
						
					  			printf("Digite a dica[1], atencao, nao coloque a mesma palavra (ou espacos)!\n");
								scanf("%s",&DA);
								
								for (int contw = 0; contw < 27; contw++) {
								
									for (int contq = 0; contq < 27; contq++) {
								
										if (DA[contw] == alf[contq]) {
											DA[contw] = ALFA[contq];
										}
									}
								}
							
							}
							if (con == 1) {
								
								for (int km=0; km < 20; km++) {
									DB[km] = 0;
								}
						
					  			printf("Digite a dica[2], atencao, nao coloque a mesma palavra(ou espacos)!\n");
								scanf("%s",&DB);
								
								for (int contw = 0; contw < 27; contw++) {
								
									for (int contq = 0; contq < 27; contq++) {
								
										if (DB[contw] == alf[contq]) {
											DB[contw] = ALFA[contq];
										}
									}
								}
							
							}
							if (con == 2) {
								
								for (int km=0; km < 15; km++) {
									DC[km] = 0;
								}
									
					  			printf("Digite a dica[3], atencao, nao coloque a mesma palavra(ou espacos)!\n");
								scanf("%s",&DC);
								
								for (int contw = 0; contw < 27; contw++) {
								
									for (int contq = 0; contq < 27; contq++) {
								
										if (DC[contw] == alf[contq]) {
											DC[contw] = ALFA[contq];
										}
									}
								}
							
							}
							if (con == 3) {
								
								for (int km=0; km < 15; km++) {
									DD[km] = 0;
								}
						
					  			printf("Digite a dica[4], atencao, nao coloque a mesma palavra(ou espacos)!\n");
								scanf("%s",&DD);
								
								for (int contw = 0; contw < 27; contw++) {
								
									for (int contq = 0; contq < 27; contq++) {
								
										if (DD[contw] == alf[contq]) {
											DD[contw] = ALFA[contq];
										}
									}
								}
							
							}
							if (con == 4) {
								
								for (int km=0; km < 15; km++) {
									DE[km] = 0;
								}
						
					  			printf("Digite a dica[5], atencao, nao coloque a mesma palavra(ou espacos)!\n");
								scanf("%s",&DE);
								
								for (int contw = 0; contw < 27; contw++) {
								
									for (int contq = 0; contq < 27; contq++) {
								
										if (DE[contw] == alf[contq]) {
											DE[contw] = ALFA[contq];
										}
									}
								}
							
							}
							
							contve++;
							
							printf("\n");
							
							printf("deseja inserir outra palavra?(S/N)\n\n");
						
							continuar=getch();
							continuar=toupper(continuar);
						
						}while(continuar!='N' && continuar!='S');
				
						if(continuar=='S')
						{
							condsenha = 1;
								
						}
						if(continuar=='N')
						{
							condsenha = 0;
							con = 6;
								
						}	
					}				
				}
		    }
			else	
			{
				system("cls");
				system("color F4");
				printf("\n ACESSO NEGADO.\n");
				Sleep(1500);
				main();
			}
			
	}
	
	if (condmenu == 1 || condmenu == 2) {
		
		system("cls");
		
		printf("ESCREVA O NOME DO JOGADOR 1:");
		scanf("%s", &nome1);
		printf("ESCREVA O NOME DO JOGADOR 2:");
		scanf("%s", &nome2);

		for(int f=0; f <= 25;f++) {
			Z[f] = 0;
			ALFAAUX[f] = 0;
		}
		for(int lk=0; lk <= 15;lk++) {
			DICAA[lk] = 0;
			DICAB[lk] = 0;
			DICAC[lk] = 0;
			DICAD[lk] = 0;
			DICAE[lk] = 0;
			DICAF[lk] = 0;
			DICAG[lk] = 0;
			DICAH[lk] = 0;
			DICAI[lk] = 0;
			DICAJ[lk] = 0;
		}
						
			cont = 0;
			tecla = 20;
			contz = 0;
			contv = 0;
			pts1 = 0;
			pts2 = 0;
			jogador = 0;
			m = 0;
			contf = 0;
			contt1 = 8;
			contt2 = 8;
			contaux = 0;
			contaux2 = 0;
			i = 0;
			contzaux = 0;
			chuteaux = 1;
			contk = 0;
		
		for (int l=0; l < 10; l++) {
			if (cont = 100) {
				cont = 0;
				contz = 0;
				contv = 0;
				jogador = 0;
				m = 0;
				contf = 0;
				contt1 = 7;
				contt2 = 7;
				contaux = 0;
				contaux2 = 0;
				contf3 = 0;
				i = 0;
				contzaux = 0;
				chuteaux = 1;
			}
			
   			do {
   				int max=10;
				srand(time( NULL ));
   	   	 		N[l] = rand() % 10;
   	   			status = VALIDO;
     			for (int q = 0; q < l; q++)
    	   			if (N[l] == N[q])
    	   			status = INVALIDO;
   			} while (status == INVALIDO);

			r = N[l];
		
		   	if (r == 0) {
        		contf = contpa1 + 1;
        	}
        	if (r == 1) {
        		contf = contpa2 + 1;
        	}
        	if (r == 2) {
        		contf = contpa3 + 1;
        	}
        	if (r == 3) {
        		contf = contpa4 + 1;
        	}
        	if (r == 4) {
        		contf = contpa5 + 1;
        	}
        	if (r == 5) {
        		contf = 5;
        	}
        	if (r == 6) {
        		contf = 6;
        	}
			if (r == 7) {
        		contf = 7;
        	}
        	if (r == 8) {
        		contf = 8;
        	}
        	if (r == 9) {
        		contf = 5;
        	}
        	
        	if (contaux == 0) {
        		contaux = contf + 1;
        		contaux2 = contf;
        		contf3 = contf - 1;
        		contf2 = contf;
        	}
        	
        	if (condmenu == 2) {
				if (contve == 1) {
					if (r == 0) {
							contf = contpa1;
							contf3 = contf - 1;
							contaux = contf + 1;
        					contaux2 = contf;
        					contf2 = contf;

					}
				}
				if (contve == 2) {
					if (r == 0 || r == 1) {	
						if (r == 0) {
        					contf = contpa1;
							contf3 = contf - 1;
							contaux = contf + 1;
        					contaux2 = contf;
        					contf2 = contf;
        				}
        				if (r == 1) {
        					contf = contpa1;
							contf3 = contf - 1;
							contaux = contf + 1;
        					contaux2 = contf + 1;
        					contf2 = contf;
        				}
					}
				}
				if (contve == 3) {
					if (r == 0 || r == 1 || r == 2) {
						if (r == 0) {
        					contf = contpa1;
							contf3 = contf - 1;
							contaux = contf + 1;
        					contaux2 = contf;
        					contf2 = contf;
        				}
        				if (r == 1) {
        					contf = contpa1;
							contf3 = contf - 1;
							contaux = contf + 1;
        					contaux2 = contf;
        					contf2 = contf;
        				}
        				if (r == 2) {
        					contf = contpa1;
							contf3 = contf - 1;
							contaux = contf + 1;
        					contaux2 = contf;
        					contf2 = contf;
        				}
									
					}
				}
				if (contve == 4) {
					if (r == 0 || r == 1 || r == 2 || r == 3) {
						if (r == 0) {
        					contf = contpa1;
							contf3 = contf - 1;
							contaux = contf + 1;
        					contaux2 = contf;
        					contf2 = contf;
        				}
        				if (r == 1) {
        					contf = contpa1;
							contf3 = contf - 1;
							contaux = contf + 1;
        					contaux2 = contf;
        					contf2 = contf;
        				}
        				if (r == 2) {
        					contf = contpa1;
							contf3 = contf - 1;
							contaux = contf + 1;
        					contaux2 = contf;
        					contf2 = contf;
        				}
						if (r == 3) {
        					contf = contpa1;
							contf3 = contf - 1;
							contaux = contf + 1;
        					contaux2 = contf;
        					contf2 = contf;
        				}		
									
					}
				}
				if (contve == 5) {
					if (r == 0 || r == 1 || r == 2 || r == 3 || r == 4) {
						if (r == 0) {
        					contf = contpa1;
							contf3 = contf - 1;
							contaux = contf + 1;
        					contaux2 = contf;
        					contf2 = contf;
        				}
        				if (r == 1) {
        					contf = contpa1;
							contf3 = contf - 1;
							contaux = contf + 1;
        					contaux2 = contf + 1;
        					contf2 = contf;
        				}
        				if (r == 2) {
        					contf = contpa1;
							contf3 = contf - 1;
							contaux = contf + 1;
        					contaux2 = contf;
        					contf2 = contf;
        				}
						if (r == 3) {
        					contf = contpa1;
							contf3 = contf - 1;
							contaux = contf + 1;
        					contaux2 = contf;
        					contf2 = contf;
        				}
						if (r == 4) {
        					contf = contpa1;
							contf3 = contf - 1;
							contaux = contf + 1;
        					contaux2 = contf + 2;
        					contf2 = contf;
        				}				
										
					}
				}
			}

        	while (i <= 16) {
		
				if (cont <= contaux) {
					
					do { 
                 	    system("cls");
                   		if (jogador % 2 == 0) {
                   			system("color F1");
                 		   	printf("JOGADOR 1:%s                              \n", nome1); //TENTATIVAS JOGADOR 1:%s\n\t\t\t\t\tTENTATIVAS JOGADOR 2:%s
                		}
               		 	if (jogador % 2 != 0) {
               		 		system("color FC");
                			printf("JOGADOR 2:%s                              \n", nome2); //TENTATIVAS JOGADOR 1:%s\n\t\t\t\t\tTENTATIVAS JOGADOR 2:%s
                		}
						printf(" \xC9\xCD\xCD\xCD\xCD\xCD\xCD\xBB      \n");
						printf(" \xBA      \xBA                               PONTOS JOGADOR 1:%d\n", pts1);
						printf(" \xBA      O                               PONTOS JOGADOR 2:%d\n", pts2);
						printf(" \xBA      \xB3                        \n");
						printf(" \xBA     /\xB3\\                      \n");
						printf(" \xBA      \xB3                        \n");
						printf(" \xBA     / \\                         \n");
						printf(" \xBA                                  \n");
						printf(" \xBA                                  \n");
						printf(" \xBA                                  \n");
						
						if (r == 0) {
							printf(" \xBA %s                              \n\n", A2);
						}
						if (r == 1) {
							printf(" \xBA %s                              \n\n", B2);
						}
						if (r == 2) {
							printf(" \xBA %s                              \n\n", C2);
						}
						if (r == 3) {
							printf(" \xBA %s                              \n\n", D2);
						}
						if (r == 4) {
							printf(" \xBA %s                              \n\n", E2);
						}
						if (r == 5) {
							printf(" \xBA %s                              \n\n", F2);
						}
						if (r == 6) {
							printf(" \xBA %s                              \n\n", G2);
						}
						if (r == 7) {
							printf(" \xBA %s                              \n\n", H2);
						}
						if (r == 8) {
							printf(" \xBA %s                              \n\n", I2);
						}
						if (r == 9) {
							printf(" \xBA %s                              \n\n", J2);
						}
						printf("Letras que voce ja usou:%s\n", Z);
                	    printf("Escolha uma letra de A ate Z:\n\n");
                	    
							if (cont >= contaux2) {
								condgh = 1;
								e = 'W';
								cont = 10;
						
								if (pts1 > pts2) {
									printf("Parabens jogador %s, voce ganhou essa partida.\n", nome1);
								}
								if (pts2 > pts1) {
									printf("Parabens jogador %s, voce ganhou essa partida.\n", nome3);
								}
								if (pts1 == pts2) {
									printf("Voces empataram, os dois jogadores venceram essa partida.\n");
								}
							}
                	
                    	if (r == 0) {            		
                    		if ((cont >= contpaa) && (cont <= contpa1)) {

								printf("Dica:%s\n\n",DA);
								
								do {
                	    			printf("Deseja chutar a palavra? (S/N)\n\n");
                	    			chute = getch();
                	    			chute = toupper(chute);
                	    		}while(chute != 'S' && chute != 'N');
                	    		
                	    		if (chute == 'S') {
                	    			
                	    			char alfa1[27] = "ABCDEFGHIJKLMNOPQRSTUVXWYZ";
                	    			char alfa2[27] = "abcdefghijklmnopqrstuvxwyz";
                	    			
									printf("Escreva a palavra:");
                	    			scanf("%s", DICAA);
                	    			
                	    			for (int contw = 0; contw < 27; contw++) {
								
										for (int contq = 0; contq < 27; contq++) {
								
											if (DICAA[contw] == alfa2[contq]) {
												DICAA[contw] = alfa1[contq];
											}
										}
									}
                	    			
                	    			for (int kl = 0; kl < contf; kl++) {
                	    				if(DICAA[kl] != A[kl]) {
											chuteaux = 0;
                	    				}
                	    			}
                	    			
                	    			if(chuteaux == 1) {
                	    				printf("\nParabens, voce acertou a palavra e ganhou 100 pontos!\n");
                	    				if(jogador % 2 == 0) {
                	    					pts1 = pts1 + 100;
                	    				}
                	    				if(jogador % 2 != 0) {
                	    					pts2 = pts2 + 100;
                	    				}

										for (int qp = 0; qp < 10; qp++) {
											DICAA[qp] = 0;
										}
										contk = 1;
										e = 'W';
										chuteaux = 1;
										cont = contaux2 + 1;
                	    			}
                	    			else {
                	    				printf("Voce errou, e perdeu tudo.\n");
                	    				if(jogador % 2 != 0) {
                	    					pts2 = 0;
                	    				}
										if(jogador % 2 == 0) {
                	    					pts1 = 0;
                	    				}
                	    				for (int qp = 0; qp < 10; qp++) {
											DICAA[qp] = 0;
										}
                	    				jogador++;
                	    				chuteaux = 1;
                	    			}
                	    			
                	    		}
                	    		if (chute == 'N') {
                	    			printf("Digite uma letra:");
                	    		}
							}	
						}
						if (r == 1) {
                    		if ((cont >= contpab) && (cont <= contpa2)) {

								printf("Dica:%s\n\n",DB);
								
								do {
                	    			printf("Deseja chutar a palavra? (S/N)\n\n");
                	    			chute = getch();
                	    			chute = toupper(chute);
                	    		}while(chute != 'S' && chute != 'N');
                	    		
                	    		if (chute == 'S') {
                	    			
                	    			char alfa1[27] = "ABCDEFGHIJKLMNOPQRSTUVXWYZ";
                	    			char alfa2[27] = "abcdefghijklmnopqrstuvxwyz";
                	    			
									printf("Escreva a palavra:");
                	    			scanf("%s", DICAB);
                	    			
                	    			for (int contw = 0; contw < 27; contw++) {
								
										for (int contq = 0; contq < 27; contq++) {
								
											if (DICAB[contw] == alfa2[contq]) {
												DICAB[contw] = alfa1[contq];
											}
										}
									}
                	    			
                	    			for (int kl = 0; kl < contf; kl++) {
                	    				if(DICAB[kl] != B[kl]) {
											chuteaux = 0;
                	    				}
                	    			}
                	    			
                	    			if(chuteaux == 1) {
                	    				printf("\nParabens, voce acertou a palavra e ganhou 100 pontos!\n");
                	    				if(jogador % 2 == 0) {
                	    					pts1 = pts1 + 100;
                	    				}
                	    				if(jogador % 2 != 0) {
                	    					pts2 = pts2 + 100;
                	    				}

										for (int qp = 0; qp < 10; qp++) {
											DICAB[qp] = 0;
										}
										contk = 1;
										e = 'W';
										chuteaux = 1;
										cont = contaux2 + 1;
                	    			}
                	    			else {
                	    				printf("Voce errou, e perdeu tudo.\n");
                	    				if(jogador % 2 != 0) {
                	    					pts2 = 0;
                	    				}
										if(jogador % 2 == 0) {
                	    					pts1 = 0;
                	    				}
                	    				for (int qp = 0; qp < 10; qp++) {
											DICAB[qp] = 0;
										}
                	    				jogador++;
                	    				chuteaux = 1;
                	    			}
                	    		}
                	    		if (chute == 'N') {
                	    			printf("Digite uma letra:");
                	    		}
							}
						}
						if (r == 2) {
                    		if ((cont >= contpac) && (cont <= contpa3)) {

								printf("Dica:%s\n\n",DC);
								
								do {
                	    			printf("Deseja chutar a palavra? (S/N)\n\n");
                	    			chute = getch();
                	    			chute = toupper(chute);
                	    		}while(chute != 'S' && chute != 'N');
                	    		
                	    		if (chute == 'S') {
                	    			
                	    			char alfa1[27] = "ABCDEFGHIJKLMNOPQRSTUVXWYZ";
                	    			char alfa2[27] = "abcdefghijklmnopqrstuvxwyz";
                	    			
									printf("Escreva a palavra:");
                	    			scanf("%s", DICAC);
                	    			
                	    			for (int contw = 0; contw < 27; contw++) {
								
										for (int contq = 0; contq < 27; contq++) {
								
											if (DICAC[contw] == alfa2[contq]) {
												DICAC[contw] = alfa1[contq];
											}
										}
									}
                	    			
                	    			for (int kl = 0; kl < contf; kl++) {
                	    				if(DICAC[kl] != C[kl]) {
											chuteaux = 0;
                	    				}
                	    			}
                	    			
                	    			if(chuteaux == 1) {
                	    				printf("\nParabens, voce acertou a palavra e ganhou 100 pontos!\n");
                	    				if(jogador % 2 == 0) {
                	    					pts1 = pts1 + 100;
                	    				}
                	    				if(jogador % 2 != 0) {
                	    					pts2 = pts2 + 100;
                	    				}

										for (int qp = 0; qp < 10; qp++) {
											DICAC[qp] = 0;
										}
										contk = 1;
										e = 'W';
										chuteaux = 1;
										cont = contaux2 + 1;
                	    			}
                	    			else {
                	    				printf("Voce errou, e perdeu tudo.\n");
                	    				if(jogador % 2 != 0) {
                	    					pts2 = 0;
                	    				}
										if(jogador % 2 == 0) {
                	    					pts1 = 0;
                	    				}
                	    				for (int qp = 0; qp < 10; qp++) {
											DICAC[qp] = 0;
										}
                	    				jogador++;
                	    				chuteaux = 1;
                	    			}
                	    		}
                	    		if (chute == 'N') {
                	    			printf("Digite uma letra:");
                	    		}
							}
						}
						if (r == 3) {
                    		if ((cont >= contpad) && (cont <= contpa4)) {

								printf("Dica:%s\n\n",DD);
								
								do {
                	    			printf("Deseja chutar a palavra? (S/N)\n\n");
                	    			chute = getch();
                	    			chute = toupper(chute);
                	    		}while(chute != 'S' && chute != 'N');
                	    		
                	    		if (chute == 'S') {
                	    			
                	    			char alfa1[27] = "ABCDEFGHIJKLMNOPQRSTUVXWYZ";
                	    			char alfa2[27] = "abcdefghijklmnopqrstuvxwyz";
                	    			
									printf("Escreva a palavra:");
                	    			scanf("%s", DICAD);
                	    			
                	    			for (int contw = 0; contw < 27; contw++) {
								
										for (int contq = 0; contq < 27; contq++) {
								
											if (DICAD[contw] == alfa2[contq]) {
												DICAD[contw] = alfa1[contq];
											}
										}
									}
                	    			
                	    			for (int kl = 0; kl < contf; kl++) {
                	    				if(DICAD[kl] != D[kl]) {
											chuteaux = 0;
                	    				}
                	    			}
                	    			
                	    			if(chuteaux == 1) {
                	    				printf("\nParabens, voce acertou a palavra e ganhou 100 pontos!\n");
                	    				if(jogador % 2 == 0) {
                	    					pts1 = pts1 + 100;
                	    				}
                	    				if(jogador % 2 != 0) {
                	    					pts2 = pts2 + 100;
                	    				}

										for (int qp = 0; qp < 10; qp++) {
											DICAD[qp] = 0;
										}
										contk = 1;
										e = 'W';
										chuteaux = 1;
										cont = contaux2 + 1;
                	    			}
                	    			else {
                	    				printf("Voce errou, e perdeu tudo.\n");
                	    				if(jogador % 2 != 0) {
                	    					pts2 = 0;
                	    				}
										if(jogador % 2 == 0) {
                	    					pts1 = 0;
                	    				}
                	    				for (int qp = 0; qp < 10; qp++) {
											DICAD[qp] = 0;
										}
                	    				jogador++;
                	    				chuteaux = 1;
                	    			}
                	    		}
                	    		if (chute == 'N') {
                	    			printf("Digite uma letra:");
                	    		}
							}
						}
						if (r == 4) {
                    		if ((cont >= contpae) && (cont <= contpa5)) {

								printf("Dica:%s\n\n",DE);
								
								do {
                	    			printf("Deseja chutar a palavra? (S/N)\n\n");
                	    			chute = getch();
                	    			chute = toupper(chute);
                	    		}while(chute != 'S' && chute != 'N');
                	    		
                	    		if (chute == 'S') {
                	    			
                	    			char alfa1[27] = "ABCDEFGHIJKLMNOPQRSTUVXWYZ";
                	    			char alfa2[27] = "abcdefghijklmnopqrstuvxwyz";
                	    			
									printf("Escreva a palavra:");
                	    			scanf("%s", DICAE);
                	    			
                	    			for (int contw = 0; contw < 27; contw++) {
								
										for (int contq = 0; contq < 27; contq++) {
								
											if (DICAE[contw] == alfa2[contq]) {
												DICAE[contw] = alfa1[contq];
											}
										}
									}
                	    			
                	    			for (int kl = 0; kl < contf; kl++) {
                	    				if(DICAE[kl] != E[kl]) {
											chuteaux = 0;
                	    				}
                	    			}
                	    			
                	    			if(chuteaux == 1) {
                	    				printf("\nParabens, voce acertou a palavra e ganhou 100 pontos!\n");
                	    				if(jogador % 2 == 0) {
                	    					pts1 = pts1 + 100;
                	    				}
                	    				if(jogador % 2 != 0) {
                	    					pts2 = pts2 + 100;
                	    				}

										for (int qp = 0; qp < 10; qp++) {
											DICAE[qp] = 0;
										}
										contk = 1;
										e = 'W';
										chuteaux = 1;
										cont = contaux2 + 1;
                	    			}
                	    			else {
                	    				printf("Voce errou, e perdeu tudo.\n");
                	    				if(jogador % 2 != 0) {
                	    					pts2 = 0;
                	    				}
										if(jogador % 2 == 0) {
                	    					pts1 = 0;
                	    				}
                	    				for (int qp = 0; qp < 10; qp++) {
											DICAE[qp] = 0;
										}
                	    				jogador++;
                	    				chuteaux = 1;
                	    			}
                	    		}
                	    		if (chute == 'N') {
                	    			printf("Digite uma letra:");
                	    		}
							}
						}
						if (r == 5) {
                    		if ((cont >= 2) && (cont <= 4)) {

								printf("Dica:%s\n\n",DF);
								
								do {
                	    			printf("Deseja chutar a palavra? (S/N)\n\n");
                	    			chute = getch();
                	    			chute = toupper(chute);
                	    		}while(chute != 'S' && chute != 'N');
                	    		
                	    		if (chute == 'S') {
                	    			
                	    			char alfa1[27] = "ABCDEFGHIJKLMNOPQRSTUVXWYZ";
                	    			char alfa2[27] = "abcdefghijklmnopqrstuvxwyz";
                	    			
									printf("Escreva a palavra:");
                	    			scanf("%s", DICAF);
                	    			
                	    			for (int contw = 0; contw < 27; contw++) {
								
										for (int contq = 0; contq < 27; contq++) {
								
											if (DICAF[contw] == alfa2[contq]) {
												DICAF[contw] = alfa1[contq];
											}
										}
									}
                	    			
                	    			for (int kl = 0; kl < contf; kl++) {
                	    				if(DICAF[kl] != F[kl]) {
											chuteaux = 0;
                	    				}
                	    			}
                	    			
                	    			if(chuteaux == 1) {
                	    				printf("\nParabens, voce acertou a palavra e ganhou 100 pontos!\n");
                	    				if(jogador % 2 == 0) {
                	    					pts1 = pts1 + 100;
                	    				}
                	    				if(jogador % 2 != 0) {
                	    					pts2 = pts2 + 100;
                	    				}

										for (int qp = 0; qp < 10; qp++) {
											DICAF[qp] = 0;
										}
										contk = 1;
										e = 'W';
										chuteaux = 1;
										cont = contaux2 + 1;
                	    			}
                	    			else {
                	    				printf("Voce errou, e perdeu tudo.\n");
                	    				if(jogador % 2 != 0) {
                	    					pts2 = 0;
                	    				}
										if(jogador % 2 == 0) {
                	    					pts1 = 0;
                	    				}
                	    				for (int qp = 0; qp < 10; qp++) {
											DICAF[qp] = 0;
										}
                	    				jogador++;
                	    				chuteaux = 1;
                	    			}
                	    		}
                	    		if (chute == 'N') {
                	    			printf("Digite uma letra:");
                	    		}
							}
						}
						if (r == 6) {
                    		if ((cont >= 3) && (cont <= 5)) {

								printf("Dica:%s\n\n",DG);
								
								do {
                	    			printf("Deseja chutar a palavra? (S/N)\n\n");
                	    			chute = getch();
                	    			chute = toupper(chute);
                	    		}while(chute != 'S' && chute != 'N');
                	    		
                	    		if (chute == 'S') {
                	    			
                	    			char alfa1[27] = "ABCDEFGHIJKLMNOPQRSTUVXWYZ";
                	    			char alfa2[27] = "abcdefghijklmnopqrstuvxwyz";
                	    			
									printf("Escreva a palavra:");
                	    			scanf("%s", DICAG);
                	    			
                	    			for (int contw = 0; contw < 27; contw++) {
								
										for (int contq = 0; contq < 27; contq++) {
								
											if (DICAG[contw] == alfa2[contq]) {
												DICAG[contw] = alfa1[contq];
											}
										}
									}
                	    			
                	    			for (int kl = 0; kl < contf; kl++) {
                	    				if(DICAG[kl] != G[kl]) {
											chuteaux = 0;
                	    				}
                	    			}
                	    			
                	    			if(chuteaux == 1) {
                	    				printf("\nParabens, voce acertou a palavra e ganhou 100 pontos!\n");
                	    				if(jogador % 2 == 0) {
                	    					pts1 = pts1 + 100;
                	    				}
                	    				if(jogador % 2 != 0) {
                	    					pts2 = pts2 + 100;
                	    				}

										for (int qp = 0; qp < 10; qp++) {
											DICAG[qp] = 0;
										}
										contk = 1;
										e = 'W';
										chuteaux = 1;
										cont = contaux2 + 1;
                	    			}
                	    			else {
                	    				printf("Voce errou, e perdeu tudo.\n");
                	    				if(jogador % 2 != 0) {
                	    					pts2 = 0;
                	    				}
										if(jogador % 2 == 0) {
                	    					pts1 = 0;
                	    				}
                	    				for (int qp = 0; qp < 10; qp++) {
											DICAG[qp] = 0;
										}
                	    				jogador++;
                	    				chuteaux = 1;
                	    			}
                	    		}
                	    		if (chute == 'N') {
                	    			printf("Digite uma letra:");
                	    		}
							}
						}
						if (r == 7) {
                    		if ((cont >= 4) && (cont <= 6)) {

								printf("Dica:%s\n\n",DH);
								
								do {
                	    			printf("Deseja chutar a palavra? (S/N)\n\n");
                	    			chute = getch();
                	    			chute = toupper(chute);
                	    		}while(chute != 'S' && chute != 'N');
                	    		
                	    		if (chute == 'S') {
                	    			
                	    			char alfa1[27] = "ABCDEFGHIJKLMNOPQRSTUVXWYZ";
                	    			char alfa2[27] = "abcdefghijklmnopqrstuvxwyz";
                	    			
									printf("Escreva a palavra:");
                	    			scanf("%s", DICAH);
                	    			
                	    			for (int contw = 0; contw < 27; contw++) {
								
										for (int contq = 0; contq < 27; contq++) {
								
											if (DICAH[contw] == alfa2[contq]) {
												DICAH[contw] = alfa1[contq];
											}
										}
									}
                	    			
                	    			for (int kl = 0; kl < contf; kl++) {
                	    				if(DICAH[kl] != H[kl]) {
											chuteaux = 0;
                	    				}
                	    			}
                	    			
                	    			if(chuteaux == 1) {
                	    				printf("\nParabens, voce acertou a palavra e ganhou 100 pontos!\n");
                	    				if(jogador % 2 == 0) {
                	    					pts1 = pts1 + 100;
                	    				}
                	    				if(jogador % 2 != 0) {
                	    					pts2 = pts2 + 100;
                	    				}

										for (int qp = 0; qp < 10; qp++) {
											DICAH[qp] = 0;
										}
										contk = 1;
										e = 'W';
										chuteaux = 1;
										cont = contaux2 + 1;
                	    			}
                	    			else {
                	    				printf("Voce errou, e perdeu tudo.\n");
                	    				if(jogador % 2 != 0) {
                	    					pts2 = 0;
                	    				}
										if(jogador % 2 == 0) {
                	    					pts1 = 0;
                	    				}
                	    				for (int qp = 0; qp < 10; qp++) {
											DICAH[qp] = 0;
										}
                	    				jogador++;
                	    				chuteaux = 1;
                	    			}
                	    		}
                	    		if (chute == 'N') {
                	    			printf("Digite uma letra:");
                	    		}
							}
						}
						if (r == 8) {
                    		if ((cont >= 5) && (cont <= 8)) {

								printf("Dica:%s\n\n",DI);
								
								do {
                	    			printf("Deseja chutar a palavra? (S/N)\n\n");
                	    			chute = getch();
                	    			chute = toupper(chute);
                	    		}while(chute != 'S' && chute != 'N');
                	    		
                	    		if (chute == 'S') {
                	    			
                	    			char alfa1[27] = "ABCDEFGHIJKLMNOPQRSTUVXWYZ";
                	    			char alfa2[27] = "abcdefghijklmnopqrstuvxwyz";
                	    			
									printf("Escreva a palavra:");
                	    			scanf("%s", DICAI);
                	    			
                	    			for (int contw = 0; contw < 27; contw++) {
								
										for (int contq = 0; contq < 27; contq++) {
								
											if (DICAI[contw] == alfa2[contq]) {
												DICAI[contw] = alfa1[contq];
											}
										}
									}
                	    			
                	    			for (int kl = 0; kl < contf; kl++) {
                	    				if(DICAI[kl] != I[kl]) {
											chuteaux = 0;
                	    				}
                	    			}
                	    			
                	    			if(chuteaux == 1) {
                	    				printf("\nParabens, voce acertou a palavra e ganhou 100 pontos!\n");
                	    				if(jogador % 2 == 0) {
                	    					pts1 = pts1 + 100;
                	    				}
                	    				if(jogador % 2 != 0) {
                	    					pts2 = pts2 + 100;
                	    				}

										for (int qp = 0; qp < 10; qp++) {
											DICAI[qp] = 0;
										}
										contk = 1;
										e = 'W';
										chuteaux = 1;
										cont = contaux2 + 1;
                	    			}
                	    			else {
                	    				printf("Voce errou, e perdeu tudo.\n");
                	    				if(jogador % 2 != 0) {
                	    					pts2 = 0;
                	    				}
										if(jogador % 2 == 0) {
                	    					pts1 = 0;
                	    				}
                	    				for (int qp = 0; qp < 10; qp++) {
											DICAI[qp] = 0;
										}
                	    				jogador++;
                	    				chuteaux = 1;
                	    			}
                	    		}
                	    		if (chute == 'N') {
                	    			printf("Digite uma letra:");
                	    		}
							}
						}
						if (r == 9) {
                    		if ((cont >= 3) && (cont <= 5)) {

								printf("Dica:%s\n\n",DJ);
								
								do {
                	    			printf("Deseja chutar a palavra? (S/N)\n\n");
                	    			chute = getch();
                	    			chute = toupper(chute);
                	    		}while(chute != 'S' && chute != 'N');
                	    		
                	    		if (chute == 'S') {
                	    			
                	    			char alfa1[27] = "ABCDEFGHIJKLMNOPQRSTUVXWYZ";
                	    			char alfa2[27] = "abcdefghijklmnopqrstuvxwyz";
                	    			
									printf("Escreva a palavra:");
                	    			scanf("%s", DICAJ);
                	    			
                	    			for (int contw = 0; contw < 27; contw++) {
								
										for (int contq = 0; contq < 27; contq++) {
								
											if (DICAJ[contw] == alfa2[contq]) {
												DICAJ[contw] = alfa1[contq];
											}
										}
									}
                	    			
                	    			for (int kl = 0; kl < contf; kl++) {
                	    				if(DICAJ[kl] != J[kl]) {
											chuteaux = 0;
                	    				}
                	    			}
                	    			
                	    			if(chuteaux == 1) {
                	    				printf("\nParabens, voce acertou a palavra e ganhou 100 pontos!\n");
                	    				if(jogador % 2 == 0) {
                	    					pts1 = pts1 + 100;
                	    				}
                	    				if(jogador % 2 != 0) {
                	    					pts2 = pts2 + 100;
                	    				}

										for (int qp = 0; qp < 10; qp++) {
											DICAJ[qp] = 0;
										}
										contk = 1;
										e = 'W';
										chuteaux = 1;
										cont = contaux2 + 1;
                	    			}
                	    			else {
                	    				printf("Voce errou, e perdeu tudo.\n");
                	    				if(jogador % 2 != 0) {
                	    					pts2 = 0;
                	    				}
										if(jogador % 2 == 0) {
                	    					pts1 = 0;
                	    				}
                	    				for (int qp = 0; qp < 10; qp++) {
											DICAJ[qp] = 0;
										}
                	    				jogador++;
                	    				chuteaux = 1;
                	    			}
                	    		}
                	    		if (chute == 'N') {
                	    			printf("Digite uma letra:");
                	    		}
							}
						}
						
               	    		if (cont < contaux2) {
               	   				e = getch();
               	    			e = toupper(e);
               	    		}
           			}
               		while((e != 'A' && e != 'B' && e != 'C' && e != 'D' && e != 'E' && e != 'F' && e != 'G' && e != 'H' && e != 'I' && e != 'J' && e != 'K' && e != 'L' && e != 'M' && e != 'N' && e != 'O' && e != 'P' && e != 'Q' && e != 'R' && e != 'S' && e != 'T' && e != 'U' && e != 'V' && e != 'W' && e != 'X' && e != 'Y' && e != 'Z'));
               	    		
               	    		if(contz >= 0) {}  	    	
               	    			if(e == 'A' && ALFA[0] == 0 && cont != contf) {
               	    				printf("Essa letra ja foi escolhida, escolha outra:");
               	    				do {
										e = getch();
										e = toupper(e);
									   }while(e == 'A');
               	    			}
               	    			if(e == 'B' && ALFA[1] == 0 && cont != contf) {
               	    				printf("Essa letra ja foi escolhida, escolha outra:");
									do {
										e = getch();
										e = toupper(e);
									}while(e == 'B');
               	    			}
               	    			
               	    			if(e == 'C' && ALFA[2] == 0 && cont != contf) {
               	    				printf("Essa letra ja foi escolhida, escolha outra:");
									do {
										e = getch();
										e = toupper(e);
									}while(e == 'C');
               	    			}
               	    			
               	    			if(e == 'D' && ALFA[3] == 0 && cont != contf) {
               	    				printf("Essa letra ja foi escolhida, escolha outra:");
									do {
										e = getch();
										e = toupper(e);
									}while(e == 'D');
               	    			}
               	    			
               	    			if(e == 'E' && ALFA[4] == 0 && cont != contf) {
               	    				printf("Essa letra ja foi escolhida, escolha outra:");
									do {
										e = getch();
										e = toupper(e);
									}while(e == 'E');
               	    			}
               	    			
               	    			if(e == 'F' && ALFA[5] == 0 && cont != contf) {
               	    				printf("Essa letra ja foi escolhida, escolha outra:");
									do {
										e = getch();
										e = toupper(e);
									}while(e == 'F');
               	    			}
               	    			
               	    			if(e == 'G' && ALFA[6] == 0 && cont != contf) {
               	    				printf("Essa letra ja foi escolhida, escolha outra:");
									do {
										e = getch();
										e = toupper(e);
									}while(e == 'G');
               	    			}
               	    			
               	    			if(e == 'H' && ALFA[7] == 0 && cont != contf) {
               	    				printf("Essa letra ja foi escolhida, escolha outra:");
									do {
										e = getch();
										e = toupper(e);
									}while(e == 'H');
               	    			}
               	    			
               	    			if(e == 'I' && ALFA[8] == 0 && cont != contf) {
               	    				printf("Essa letra ja foi escolhida, escolha outra:");
									do {
										e = getch();
										e = toupper(e);
									}while(e == 'I');
               	    			}
               	    			
               	    			if(e == 'J' && ALFA[9] == 0 && cont != contf) {
               	    				printf("Essa letra ja foi escolhida, escolha outra:");
									do {
										e = getch();
										e = toupper(e);
									}while(e == 'J');
               	    			}
               	    			
               	    			if(e == 'K' && ALFA[10] == 0 && cont != contf) {
               	    				printf("Essa letra ja foi escolhida, escolha outra:");
									do {
										e = getch();
										e = toupper(e);
									}while(e == 'K');
               	    			}
               	    			
               	    			if(e == 'L' && ALFA[11] == 0 && cont != contf) {
               	    				printf("Essa letra ja foi escolhida, escolha outra:");
									do {
										e = getch();
										e = toupper(e);
									}while(e == 'L');
               	    			}
               	    			
               	    			if(e == 'M' && ALFA[12] == 0 && cont != contf) {
               	    				printf("Essa letra ja foi escolhida, escolha outra:");
									do {
										e = getch();
										e = toupper(e);
									}while(e == 'M');
               	    			}
               	    			
               	    			if(e == 'N' && ALFA[13] == 0 && cont != contf) {
               	    				printf("Essa letra ja foi escolhida, escolha outra:");
									do {
										e = getch();
										e = toupper(e);
									}while(e == 'N');
               	    			}
               	    			
               	    			if(e == 'O' && ALFA[14] == 0 && cont != contf) {
               	    				printf("Essa letra ja foi escolhida, escolha outra:");
									do {
										e = getch();
										e = toupper(e);
									}while(e == 'O');
               	    			}
               	    			
               	    			if(e == 'P' && ALFA[15] == 0 && cont != contf) {
               	    				printf("Essa letra ja foi escolhida, escolha outra:");
									do {
										e = getch();
										e = toupper(e);
									}while(e == 'P');
               	    			}
               	    			
               	    			if(e == 'Q' && ALFA[16] == 0 && cont != contf) {
               	    				printf("Essa letra ja foi escolhida, escolha outra:");
									do {
										e = getch();
										e = toupper(e);
									}while(e == 'Q');
               	    			}
               	    			
               	    			if(e == 'R' && ALFA[17] == 0 && cont != contf) {
               	    				printf("Essa letra ja foi escolhida, escolha outra:");
									do {
										e = getch();
										e = toupper(e);
									}while(e == 'R');
               	    			}
               	    			
               	    			if(e == 'S' && ALFA[18] == 0 && cont != contf) {
               	    				printf("Essa letra ja foi escolhida, escolha outra:");
									do {
										e = getch();
										e = toupper(e);
									}while(e == 'S');
               	    			}
               	    			
               	    			if(e == 'T' && ALFA[19] == 0 && cont != contf) {
               	    				printf("Essa letra ja foi escolhida, escolha outra:");
									do {
										e = getch();
										e = toupper(e);
									}while(e == 'T');
               	    			}
               	    			
               	    			if(e == 'U' && ALFA[20] == 0 && cont != contf) {
               	    				printf("Essa letra ja foi escolhida, escolha outra:");
									do {
										e = getch();
										e = toupper(e);
									}while(e == 'U');
               	    			}
               	    			
               	    			if(e == 'V' && ALFA[21] == 0 && cont != contf) {
               	    				printf("Essa letra ja foi escolhida, escolha outra:");
									do {
										e = getch();
										e = toupper(e);
									}while(e == 'V');
               	    			}
               	    			
               	    			if(e == 'X' && ALFA[22] == 0 && cont != contf) {
               	    				printf("Essa letra ja foi escolhida, escolha outra:");
									do {
										e = getch();
										e = toupper(e);
									}while(e == 'X');
               	    			}
               	    			
               	    			if(e == 'W' && ALFA[23] == 0 && cont != contf) {
               	    				printf("Essa letra ja foi escolhida, escolha outra:");
									do {
										e = getch();
										e = toupper(e);
									}while(e == 'W');
               	    			}
               	    			
               	    			if(e == 'Y' && ALFA[24] == 0 && cont != contf) {
               	    				printf("Essa letra ja foi escolhida, escolha outra:");
									do {
										e = getch();
										e = toupper(e);
									}while(e == 'Y');
               	    			}
               	    			
               	    			if(e == 'Z' && ALFA[25] == 0 && cont != contf) {
               	    				printf("Essa letra ja foi escolhida, escolha outra:");
									do {
										e = getch();
										e = toupper(e);
									}while(e == 'Z');
               	    			}
               	    			
              	}
               	    	if(contz >= 0) {
               	    			contzaux = contz;
								for (int n=0; n <= 25; n++) {
									if (e == ALFA[n]) {
										ALFA[n] = 0;
									}
								}
								contz = contzaux;
               	    	  }
               	    	  
 //              		if (condmenu == 2) {
   // 						if (r == 0 || r == 1 || r == 2 ||)
    //				  }
					
    				if (cont > contf3 || contk == 1 || condgh == 1) {
    					
						do
           				{
							printf("\nAperte 'S' para continuar e 'N' para voltar ao menu.\n\n\n");								
							ctn = getch();
							ctn = toupper(ctn);
					
						}while(ctn != 'S' && ctn != 'N');
					
						if (ctn == 'N') {
							system("cls");
							system("color F0");
							printf("\n PONTOS JOGADOR 1:%d\n", pts1);
							printf(" PONTOS JOGADOR 2:%d\n\n\n", pts2);
							if (pts1 > pts2) {
								printf(" PARABENS JOGADOR %s VOCE GANHOU!", nome1);
							}
							if (pts2 > pts1) {
								printf(" PARABENS JOGADOR %s VOCE GANHOU!", nome2);
							}
							if (pts1 == pts2) {
								printf(" PARABENS AOS DOIS JOGADORES, POIS HOUVE UM EMPATE!");
							}
							printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
							system("pause");
							
							for (int op=0; op < 25; op++) {
								Z[op] = 0;
							}
							ALFA[0] = 'A';
							ALFA[1] = 'B';
							ALFA[2] = 'C';
							ALFA[3] = 'D';
							ALFA[4] = 'E';
							ALFA[5] = 'F';
							ALFA[6] = 'G';
							ALFA[7] = 'H';
							ALFA[8] = 'I';
							ALFA[9] = 'J';
							ALFA[10] = 'K';
							ALFA[11] = 'L';
							ALFA[12] = 'M';
							ALFA[13] = 'N';
							ALFA[14] = 'O';
							ALFA[15] = 'P';
							ALFA[16] = 'Q';
							ALFA[17] = 'R';
							ALFA[18] = 'S';
							ALFA[19] = 'T';
							ALFA[20] = 'U';
							ALFA[21] = 'V';
							ALFA[22] = 'X';
							ALFA[23] = 'W';
							ALFA[24] = 'Y';
							ALFA[25] = 'Z';
							jogador = 0;
							contf2 = 0;
							i = 100;
							cont = 100;
							m = 0;
							contk = 0;
							condgh = 0;
							condmenu = 0;
							l = 11;
							main();
						}
						if (ctn == 'S') {
							for (int op=0; op < 25; op++) {
								Z[op] = 0;
							}
							ALFA[0] = 'A';
							ALFA[1] = 'B';
							ALFA[2] = 'C';
							ALFA[3] = 'D';
							ALFA[4] = 'E';
							ALFA[5] = 'F';
							ALFA[6] = 'G';
							ALFA[7] = 'H';
							ALFA[8] = 'I';
							ALFA[9] = 'J';
							ALFA[10] = 'K';
							ALFA[11] = 'L';
							ALFA[12] = 'M';
							ALFA[13] = 'N';
							ALFA[14] = 'O';
							ALFA[15] = 'P';
							ALFA[16] = 'Q';
							ALFA[17] = 'R';
							ALFA[18] = 'S';
							ALFA[19] = 'T';
							ALFA[20] = 'U';
							ALFA[21] = 'V';
							ALFA[22] = 'X';
							ALFA[23] = 'W';
							ALFA[24] = 'Y';
							ALFA[25] = 'Z';
							jogador = 0;
							contf2 = 0;
							i = 100;
							cont = 100;
							m = 0;
							contk = 0;
							condgh = 0;
							
						}
					}		
               	    
					
						if (r == 0) {
				
							for(m=0; m < 10; m++) {
								if (e == A[m]) {
					
									A2[m] = e;
									cont++;
									if (jogador % 2 == 0) {
										pts1 = pts1 +10;
									}
									if (jogador % 2 != 0) {
										pts2 = pts2 +10;
									}
								}
							}
						}
						if (r == 1) {
				
							for(m=0; m < 10; m++) {
								if (e == B[m]) {
					
									B2[m] = e;
									cont++;
									if (jogador % 2 == 0) {
										pts1 = pts1 +10;
									}
									if (jogador % 2 != 0) {
										pts2 = pts2 +10;
									}
								}
							}
						}
						if (r == 2) {
				
							for(m=0; m < 10; m++) {
								if (e == C[m]) {
					
									C2[m] = e;
									cont++;
									if (jogador % 2 == 0) {
										pts1 = pts1 +10;
									}
									if (jogador % 2 != 0) {
										pts2 = pts2 +10;
									}
								}
							}
						}
						if (r == 3) {
				
							for(m=0; m < 10; m++) {
								if (e == D[m]) {
					
									D2[m] = e;
									cont++;
									if (jogador % 2 == 0) {
										pts1 = pts1 +10;
									}
									if (jogador % 2 != 0) {
										pts2 = pts2 +10;
									}
								}
							}
						}
						if (r == 4) {
				
							for(m=0; m < 10; m++) {
								if (e == E[m]) {
					
									E2[m] = e;
									cont++;
									if (jogador % 2 == 0) {
										pts1 = pts1 +10;
									}
									if (jogador % 2 != 0) {
										pts2 = pts2 +10;
									}
								}
							}
						}
						if (r == 5) {
				
							for(m=0; m < 10; m++) {
								if (e == F[m]) {
					
									F2[m] = e;
									cont++;
									if (jogador % 2 == 0) {
										pts1 = pts1 +10;
									}
									if (jogador % 2 != 0) {
										pts2 = pts2 +10;
									}
								}
							}
						}
						if (r == 6) {
				
							for(m=0; m < 10; m++) {
								if (e == G[m]) {
					
									G2[m] = e;
									cont++;
									if (jogador % 2 == 0) {
										pts1 = pts1 +10;
									}
									if (jogador % 2 != 0) {
										pts2 = pts2 +10;
									}
								}
							}
						}
						if (r == 7) {
				
							for(m=0; m < 10; m++) {
								if (e == H[m]) {
					
									H2[m] = e;
									cont++;
									if (jogador % 2 == 0) {
										pts1 = pts1 +10;
									}
									if (jogador % 2 != 0) {
										pts2 = pts2 +10;
									}
								}
							}
						}
						if (r == 8) {
				
							for(m=0; m < 10; m++) {
								if (e == I[m]) {
					
									I2[m] = e;
									cont++;
									if (jogador % 2 == 0) {
										pts1 = pts1 +10;
									}
									if (jogador % 2 != 0) {
										pts2 = pts2 +10;
									}
								}
							}
						}
						if (r == 9) {
				
							for(m=0; m < 10; m++) {
								if (e == J[m]) {
					
									J2[m] = e;
									cont++;
									if (jogador % 2 == 0) {
										pts1 = pts1 +10;
									}
									if (jogador % 2 != 0) {
										pts2 = pts2 +10;
									}
								}
							}
						}
			 			Z[contz] = e;
			 			ALFAAUX[contz] = e;
						contz++;
						jogador++;
				
			}
		}
	
		if (condmenu != 0) {
			system("cls");
			system("color F0");
			printf("\n PONTOS JOGADOR 1:%d\n", pts1);
			printf(" PONTOS JOGADOR 2:%d\n\n\n", pts2);
			if (pts1 > pts2) {
				printf(" PARABENS JOGADOR %s VOCE GANHOU!", nome1);
			}
			if (pts2 > pts1) {
				printf(" PARABENS JOGADOR %s VOCE GANHOU!", nome2);
			}
			if (pts1 == pts2) {
				printf(" PARABENS AOS DOIS JOGADORES, POIS HOUVE UM EMPATE!");
			}
			printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
			system("pause");
			main();
		}
	}
	
	if (condmenu == 3) {
		system("cls");
		system("color F0");
		condmenu = 0;
		printf("\n OBRIGADO POR JOGAR!\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
		system("pause");
	}

}

void menu() {
	
		system("cls");
		printf(" =============================================================================\n");
		printf("|                                                                             |\n");
		printf("|   010100100      0101     1110010101    10011001   00111010                 |\n");
		printf("|   010          11    11   00      10    10         01    10                 |\n");
		printf("|   00110011     00    11   1101101101    11         11010101                 |\n");
		printf("|   00011010     00    10   11    10      00         10    11                 |\n");
		printf("|   111          11    01   11      00    01   01    11    01                 |\n");
		printf("|   001            1011     01       00   01011101   10    00                 |\n");
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
	
}

void menu2() {
	
		system("cls");
		printf(" =============================================================================\n");
		printf("|                                                                             |\n");
		printf("|   000101110      0000     1110010101    00110101   11001010                 |\n");
		printf("|   000          00    11   00      10    10         01    00                 |\n");
		printf("|   10110011     00    01   0101000101    11         11000100                 |\n");
		printf("|   00110010     00    11   01    11      00         10    01                 |\n");
		printf("|   111          00    10   11      01    01   10    11    00                 |\n");
		printf("|   001            1100     01       10   10101011   10    11                 |\n");
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
	
}

void sair()
{
	system("cls");
}
