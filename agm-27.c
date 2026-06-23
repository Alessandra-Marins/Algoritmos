#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
main (){
	printf("\n*********************************************************************");
	printf("\n*Aluna: ALESSANDRA GONCALVES MARINS - RA 0010463                    *");
	printf("\n*Programa AGM - 27 - Um estudante estao treinando matematica e      *");
	printf("\n*deseja visualizar rapidamente a tabuada de um numero. O programa   *");
	printf("\n*deve receber um numero digitado pelo usuario e mostrar sua tabuada *");
	printf("\n*de 1 a 10 usando for.                                              *");
	printf("\n*********************************************************************");
	int numero, i;
	printf("\nDigite um numero para visualizar a tabuada: ");
	scanf("%d", &numero);
	
	for(i = 1; i <= 10; i++){
		printf("\n%d x %d = %d", numero, i, numero * i);
	}
	
	printf("\n\n");
	system("pause");
}
