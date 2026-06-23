#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
main (){
	printf("\n*********************************************************************");
	printf("\n*Aluna: ALESSANDRA GONCALVES MARINS - RA 0010463                    *");
	printf("\n*Programa AGM - 40 - Um aluno deseja praticar multiplicacao usando  *");
	printf("\n*repeticao. O programa deve receber um numero e mostrar sua tabuada *");
	printf("\n*de 1 a 10 utilizando while.                                        *");
	printf("\n*********************************************************************");
	int numero;
	int i = 1;
	
	printf("\nDigite um numero para ver a tabuada: ");
	scanf("%d", &numero);
	
	while(i <= 10){
		printf("\n%d x %d = %d", numero, i, numero * i);
		i++;
	}
	
	printf("\n\n");
	system("pause");
}
