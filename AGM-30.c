#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
main (){
	printf("\n*******************************************************************");
	printf("\n*Aluna: ALESSANDRA GONCALVES MARINS - RA 0010463                  *");
	printf("\n*Programa AGM - 30 - Um aluno de matematica precisa calcular o    *");
	printf("\n*fatorial de alguns numeros para resolver exercicios escolares. O *");
	printf("\n*programa deve receber um numero e calcular seu fatorial          *");
	printf("\n*utilizando for.                                                  *");
	printf("\n*******************************************************************");
	int numero,i;
	int fatorial = 1;
	printf("\nDigite um numero:");
	scanf("%d", &numero);
	for(i=1; i<=numero; i++){
	fatorial = fatorial*i;
	}
	printf("O resultado de %d: %d", numero, fatorial);
	printf("\n\n");
	system("pause");
	}
	
