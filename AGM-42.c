#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
main (){
	printf("\n*********************************************************************");
	printf("\n*Aluna: ALESSANDRA GONCALVES MARINS - RA 0010463                    *");
	printf("\n*Programa AGM - 42 - Uma pesquisa escolar precisa analisar numeros  *");
	printf("\n*digitados pelos participantes. O programa deve pedir 10 numeros e  *");
	printf("\n*informar quantos deles sao impares.                                *");
	printf("\n*********************************************************************");
	int numero;
	int i = 1;
	int impares = 0;
	
	while(i <= 10){
		printf("\nDigite o %d numero: ", i);
		scanf("%d", &numero);
		
		if(numero % 2 != 0){
			impares++;
		}
		i++;
	}
	
	printf("\nQuantidade de numeros impares digitados: %d", impares);
	
	printf("\n\n");
	system("pause");
}
