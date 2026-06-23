#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
main (){
	printf("\n*********************************************************************");
	printf("\n*Aluna: ALESSANDRA GONCALVES MARINS- RA 0010463                     *");
	printf("\n*Programa AGM - 47 - Um estudante quer praticar multiplicacao usando*");
	printf("\n*a estrutura do...while. O programa deve receber um numero e exibir *");
	printf("\n*sua tabuada de 1 ate 10.                                           *");
	printf("\n*********************************************************************");
	int numero;
	int i = 1;
	
	printf("\nDigite um numero para ver a tabuada: ");
	scanf("%d", &numero);
	
	do {
		printf("\n%d x %d = %d", numero, i, numero * i);
		i++;
	} while(i <= 10);
	
	printf("\n\n");
	system("pause");
}
