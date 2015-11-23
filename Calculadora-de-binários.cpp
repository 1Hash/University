#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <ctype.h>
#include <math.h>


void soma();
void sub();
void multi();
void divi();
void egg();

int main ()
{
    
	system("title CALCULADORA BINARIA");
	system("color F0");
	char escolha, continuar;
	int cond;
	
	cond = 0;

	do
	{
		system("cls");
		escolha = '0';
		continuar = '0';
		
		do
		{	
			system("cls");
			
			printf("\nCALCULADORA BIN\xB5RIA\n\n");
			printf("O sistema bin\xB5rio ou de base 2 e um sistema\n"); 
            printf("de numera\x87\x86o posicional em que todas as quantidades\n"); 
            printf("se representam com base em dois n\xa3meros, ou seja, \n");
            printf("zero e um '0' e '1'.\n");
			printf("\nEscolha uma op\x87\xC6o:\n\n");
			printf("  1 <- SOMA.\n  2 <- SUBTRA\x80\xC7O.\n  3 <- MULTIPLICA\x80\xC7O.\n  4 <- DIVIS\xC7O.\n\n");

			escolha = getch();
		}
		while(escolha != '1' && escolha != '2' && escolha != '3' && escolha != '4' && escolha != '+');

		switch (escolha)
		{
			case '1': soma();
			break;
			case '2': sub();
			break;
			case '3': multi();
			break;
			case '4': divi();
			break;
			case '+': cond = 1;
					  egg();
			break;
			   
                                            
		}
		do
		{
			if (cond == 1) {
				continuar = 'N';
			}
			if (cond == 0) {
				
				printf("Deseja continuar a calculadora? (S/N)\n\n");
				continuar = getch();
				continuar = toupper(continuar);
			}
		
		}
		while(continuar != 'S' && continuar != 'N');
	}
	while(continuar == 'S');
	
	printf("Obrigado por utilizar nossa calculadora!\n\n");
	system("pause");
}

void soma()
{	
	int A[5], B[5], C[5], D[5], E[5];
	int num1, num2, cond = 0, troca;
	
	for (int i=0; i<5; i++) {
		A[i] = 0;
		B[i] = 0;
		C[i] = 0;
		D[i] = 0;
		E[i] = 0;
	}
	
	printf("Digite o primeiro n\xA3mero:");
	scanf("%d", &num1);
	
	printf("\n");
	
	printf("Digite o segundo n\xA3mero:");
	scanf("%d", &num2);
	
	printf("\n\n");
	
	
	if ((num1 < 0 && num2 > 0) || (num1 > 0 && num2 < 0)) {
	if (num1 < 0 && (num1 * -1) > num2) {
		num1 = num1 * -1;
		cond = 1;
	}
	else if (num2 < 0 && (num2 * -1) > num1) {
		num2 = num2 * -1;
		troca = num1;
		num1 = num2;
		num2 = troca;
		cond = 1;
	}
	else if (num1 < 0 && (num1 * -1) < num2) {
		num1 = num1 * -1;
		troca = num1;
		num1 = num2;
		num2 = troca;
	}
	else if (num2 < 0 && (num2 * -1) < num1) {
		num2 = num2 * -1;
	}
	else if (num2 < 0 && (num2 * -1) == num1) num2 = num2 * -1;
	else if (num1 < 0 && (num1 * -1) == num2) num1 = num1 * -1;
			
	for (int j=4; j>0; j--) {
		B[j] = num1%10;
		num1 = num1/10;
	}
	
	for (int k=4; k>0; k--) {
		C[k] = num2%10;
		num2 = num2/10;
	}
	
		for (int l=4; l>=0; l--) {
			if (B[l] - C[l] == 0) E[l] = 0;
			else if (B[l] - C[l] == 1) E[l] = 1;
			else if (B[l] - C[l] == -1) {
				for (int m=l-1; m>=0; m--) {
					if (B[m]==1) {
						B[m] = 0;
						for (int n=m+1; n<5; n++) {
							B[n] = 1;
						}
						break;
					}
				}
				E[l] = 1;
			}
		}
	}
	
	else{
	if (num1 < 0 && num2 < 0){
		num1 = num1 * -1;
		num2 = num2 * -1;
		cond = 1;
	}
	for (int j=4; j>0; j--) {
		B[j] = num1%10;
		num1 = num1/10;
	}
	
	for (int k=4; k>0; k--) {
		C[k] = num2%10;
		num2 = num2/10;
	}
	
	for (int l=4; l>=0; l--) {
		if (A[l] + B[l] + C[l] == 1) {
			E[l] = 1;
		}
		
		if (A[l] + B[l] + C[l] == 2) {
			A[l-1] += 1;
		}
		
		if (A[l] + B[l] + C[l] == 3) {
			A[l-1] += 1;
			E[l] = 1;
		}
	}
	}
	printf("O resultado \x82: ");
	
	if ( cond == 1) printf(" -");
	
	for (int m=0; m<5; m++)
	{
		printf("%d", E[m]);
	}
	
	printf("\n\n\n\n\n\n\n");
	
}
void sub()
{
	int B[5], C[5], D[5];
	int num1, num2, cond = 0, troca;
	
	for (int i=0; i<5; i++) {
		B[i] = 0;
		C[i] = 0;
		D[i] = 0;

	}
	
	printf("Digite o primeiro n\xA3mero:");
	scanf("%d", &num1);
	
	printf("\n");
	
	printf("Digite o segundo n\xA3mero:");
	scanf("%d", &num2);
	
	printf("\n\n");
	
	if ((num1<0) && (num2>0)) {
		num1 = num1 * -1;
		cond = 1;
		
		for (int j=4; j>0; j--) {
			B[j] = num1%10;
			num1 = num1/10;
		}
	
		for (int k=4; k>0; k--) {
			C[k] = num2%10;
			num2 = num2/10;
		}
	
		for (int l=4; l>=0; l--) {
			if (B[l] + C[l] == 1) {
				D[l] = 1;
			}	
		
			if (B[l] + C[l] == 2) {
				B[l-1] += 1;
			}
		
			if (B[l] + C[l] == 3) {
				B[l-1] += 1;
				D[l] = 1;
			}
		}
	}
	else if ((num1>0) && (num2<0)) {
		num2 = num2 * -1;
		
		for (int j=4; j>0; j--) {
			B[j] = num1%10;
			num1 = num1/10;
		}
	
		for (int k=4; k>0; k--) {
			C[k] = num2%10;
			num2 = num2/10;
		}
	
		for (int l=4; l>=0; l--) {
			if (B[l] + C[l] == 1) {
				D[l] = 1;
			}	
		
			if (B[l] + C[l] == 2) {
				B[l-1] += 1;
			}
		
			if (B[l] + C[l] == 3) {
				B[l-1] += 1;
				D[l] = 1;
			}
		}
	}
	else {
		if ((num1<0) && (num2<0)) {
			num1 = num1 * -1;
			num2 = num2 * -1;
			if (num1>num2) cond = 1;
		}
		else {
			if (num2>num1) cond = 1;
		}
		
		if (num2>num1) {
			troca = num1;
			num1 = num2;
			num2 = troca;
		}
	
	
		for (int j=4; j>0; j--) {
			B[j] = num1%10;
			num1 = num1/10;
		}
	
		for (int k=4; k>0; k--) {
			C[k] = num2%10;
			num2 = num2/10;
		}
	
			for (int l=4; l>=0; l--) {
				if (B[l] - C[l] == 0) D[l] = 0;
				else if (B[l] - C[l] == 1) D[l] = 1;
				else if (B[l] - C[l] == -1) {
					for (int m=l-1; m>=0; m--) {
						if (B[m]==1) {
							B[m] = 0;
							for (int n=m+1; n<5; n++) {
								B[n] = 1;
							}
							break;
						}
					}
					D[l] = 1;
				}
			}
	}
	
	printf("O resultado \x82: ");
	if (cond == 1) printf(" -");
	for (int n=0; n<5; n++) {
		printf("%d", D[n]);
	}
	
	printf("\n\n\n\n\n\n\n");
}
void multi()
{
	int A[8], B[8], B2[8], C[8], D[8], E[8], F[8], G[8];
	int num1, num2, cond = 0;
	
	for (int i=0; i<8; i++) {
		A[i] = 0;
		B[i] = 0;
		B2[i] = 0;
		C[i] = 0;
		D[i] = 0;
		E[i] = 0;
		F[i] = 0;
		G[i] = 0;
	}
	
	printf("Digite o primeiro n\xA3mero:");
	scanf("%d", &num1);
	
	printf("\n");
	
	printf("Digite o segundo n\xA3mero:");
	scanf("%d", &num2);
	
	printf("\n\n");
	
	if (num1 < 0 && num2 > 0) {
	 cond = 1;
	 num1 = num1 * -1;
	}
	else if (num2 < 0 && num1 > 0) {
	cond = 1;
	num2 = num2 * -1;
	}
	else if (num2 < 0 && num1 < 0){
		num1 = num1 * -1;
		num2 = num2 * -1;
	}
		

	
	for (int j=7; j>0; j--) {
		A[j] = num1%10;
		num1 = num1/10;
	}
	
	for (int k=7; k>0; k--) {
		B[k] = num2%10;
		num2 = num2/10;
	}
	
	for (int l=7; l>=0; l--) {
		if	(B[7] * A[l] == 1) {
			C[l] = 1;
		}
	}
	
	for (int q=7; q>=0; q--) {
		if	(B[6] * A[q] == 1) {
			D[q-1] = 1;
		}
	}
	
	for (int r=7; r>=0; r--) {
		if	(B[5] * A[r] == 1) {
			E[r-2] = 1;
		}
	}
	
	for (int s=7; s>=0; s--) {
		if	(B[4] * A[s] == 1) {
			F[s-3] = 1;
		}
	}
	
	for (int t=7; t>=0; t--) {
		if (B2[t] + C[t] + D[t] + E[t] + F[t] == 1) {
			G[t] = 1;
		}
		if (B2[t] + C[t] + D[t] + E[t] + F[t] == 2) {
			B2[t-1] += 1;
		}
		if (B2[t] + C[t] + D[t] + E[t] + F[t] == 3) {
			G[t] = 1;
			B2[t-1] += 1;
		}
		if (B2[t] + C[t] + D[t] + E[t] + F[t] == 4) {
			B2[t-1] += 2;
		}
		if (B2[t] + C[t] + D[t] + E[t] + F[t] == 5) {
			B2[t-1] += 2;
			G[t] = 1;
		}
		if (B2[t] + C[t] + D[t] + E[t] + F[t] == 6) {
			B2[t-1] += 3;
		}
	}
	
	printf("O resultado \x82:");
	
	if (cond == 1) printf(" -");	
	
	for (int n=0; n<8; n++) {
		printf("%d", G[n]);
	}
	
	printf("\n\n\n\n\n\n\n");
}
void divi()
{
		int num1, num2, num3, numaux;
	int A[5], B[5], C[5], D[5], E[5], X[5], Y[5], Z[5], W[5];
	
	
	for (int i=0; i < 5; i++) {
		A[i] = 0;
		B[i] = 0;
		C[i] = 0;
		D[i] = 0;
		E[i] = 0;
		X[i] = 0;
		Y[i] = 0;
		W[i] = 0;
		Z[i] = 0;
	}
	Z[4] = 1;
	
	printf("Escolha o primeiro numero:");
	scanf("%d", &num1);
	
	printf("Escolha o segundo numero:");
	scanf("%d", &num2);
	
	numaux = num1;
	
	for (int j=4; j>0; j--) {
		B[j] = numaux%10;
		numaux = numaux/10;
	}
	
	for (int k=4; k>0; k--) {
		D[k] = num2%10;
		num2 = num2/10;
	}
	
	num3 = 0;
	
	
	while (num3 < num1) {
		for (int l=4; l>=0; l--) {
			if (A[l] + C[l] + D[l] == 1) {
				E[l] = 1;
			}
			
			if (A[l] + C[l] + D[l] == 2) {
				A[l-1] += 1;
			}
			
			if (A[l] + C[l] + D[l] == 3) {
				A[l-1] += 1;
				E[l] = 1;
			}
			
			if (X[l] + Y[l] + Z[l] == 1) {
				W[l] = 1;
			}
			
			if (X[l] + Y[l] + Z[l] == 2) {
				X[l-1] += 1;
			}
			
			if (X[l] + Y[l] + Z[l] == 3) {
				X[l-1] += 1;
				W[l] = 1;
			}
		}
		
		num3 = (E[4] + (E[3] * 10) + (E[2] * 100) + (E[1] * 1000));
		
		if (num3 < num1){
			for (int m=4; m >= 0; m--) {
				C[m] = E[m];
				Y[m] = W[m];
			}
			for (int z=0; z < 5; z++) {
				E[z] = 0;
				A[z] = 0;
				W[z] = 0;
				X[z] = 0;
			}
		}
	}
	
	
	printf("Resultado:");
	for (int b=0; b < 5; b++) {
		printf("%d", W[b]);
	}
	printf("\n\n\n\n\n\n\n");
}
void egg()
{
    char letra;
	do{  
	
 

  		printf("      BY: TEAM IEE   (Challenging everything)  \n\n\n                        \n");
  		printf("    | Qual o seu desejo??     |                      .~)>>\n");
  		printf("    |                         |                    .~))))>>>\n");
  		printf("    |1:continuar a calculadora|                  .~))>>             ___\n");
  		printf("    |2:sair                   |                 .~))>>)))>>      .-~))>>  \n");
  		printf("    |                         |              .~)))))>>       .-~))>>)>\n");
  		printf("    |                         |            .~)))>>))))>>  .-~)>>)>\n");
  		printf("    |                  )      |          .~))>>))))>>  .-~)))))>>)>\n");
  		printf("                   ( )@@*)             //)>))))))  .-~))))>>)> \n");
  		printf("                 ).@(@@               //))>>))) .-~))>>)))))>>)>\n");
  		printf("               (( @.@).              //))))) .-~)>>)))))>>)>\n");
  		printf("             ))  )@@*.@@ )          //)>))) //))))))>>))))>>)>\n");
  		printf("          ((  ((@@@.@@             |/))))) //)))))>>)))>>)>\n");
  		printf("         )) @@*. )@@ )  (\\_(\\-\\  |))>)) //)))>>)))))))>>)>\n");
  		printf("       (( @@@(.@(@ .    _/`-`  ~| |>))) //)>>)))))))>>)>\n");
  		printf("        )* @@@ )@*     (@) (@)  /\\|))) //))))))>>))))>>\n");
  		printf("      (( @. )@( @ .   _/       /  \\)) //))>>)))))>>>_._\n");
  		printf("      )@@ (@@*)@@.  (6,   6) / ^   \\)//))))))>>)))>>  ~~-.\n");
  		printf("    ( @jgs@@. @@@.*@_ ~^~^~,//\\ ^  \\//)>>))))>>     _.   `,\n");
  		printf("     ((@@ @@@*.(@@ .  \\^^^//' (  ^   \\)))>>       .'        `,\n");
  		printf("      ((@@).*@@ )@ )    `-'   ((   ^  ~)_         /           `\n");
  		printf("        (@@. (@@ ).           (((   ^    `\\       |             `\n");
  		printf("          (*.@*             //((((        \\       \\      .        `\n");
  		printf("                           //   (((((  \\    \\    _.-~\\     Y,        ;\n");
  		printf("                          //   // (((((( \\    \\.-~   _.`' _.-~`,      ;\n");
  		printf("                         //   //   `(((((()    )  (((((~      `,     ;\n");
  		printf("                        //  _//      `'''/   /'                  ;     ;\n");
  		printf("                    _.-~_.-~           /  /'                _.-~   _.'\n");
  		printf("                  ((((~~              / /'              _.-~ __.--~\n");
  		printf("                                     ((((          __.-~ _.-~\n");
  		printf("                                                 .'   .~~\n");
  		printf("                                                 :    ,'\n");
  		printf("                                                 ~~~~~  \n");
  
 
		letra=getch();
		
		switch(letra)
		{
		
			case '2' : 
			break;
			
			case '1' : main();
			break;
		}

	}while(letra=='1' && letra=='2');
}
