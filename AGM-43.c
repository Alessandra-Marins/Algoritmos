#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
main (){
	printf("\n*********************************************************************");
	printf("\n*Aluna: ALESSANDRA GONCALVES MARINS - RA 0010463                    *");
	printf("\n*Programa AGM - 43 - Um professor propos um desafio para calcular   *");
	printf("\n*apenas os numeros pares de uma sequencia. O programa deve somar    *");
	printf("\n*todos os numeros pares entre 1 e 100 utilizando while.             *");
	printf("\n*********************************************************************");
	int i = 2;
	int soma = 0;
	
	while(i <= 100){
		soma = soma + i;
		i += 2;
	}
	
	printf("\nA soma de todos os numeros pares entre 1 e 100 e: %d", soma);
	
	printf("\n\n");
	system("pause");
}
