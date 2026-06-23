	#include<stdio.h>
	#include<stdlib.h>
	#include<locale.h>
	main (){
		printf("\n*********************************************************************");
		printf("\n*Aluna: ALESSANDRA GONCALVES MARINS - RA 0010463                    *");
		printf("\n*Programa AGM-22 - Em um jogo educativo, o participante digita um   *");
		printf("\n*numero para descobrir sua classificacao. O programa deve verificar *");
		printf("\n* se o numero informado e par ou impar.                             *");
		printf("\n*********************************************************************");
		int numero;
		printf("\nDigite um numero:");
		scanf("%d", &numero);
		if (numero%2==00){
		printf("\nO numero e par");
		}else{
		printf("\nO numero e impar");
		}
	printf("\n\n");
	system("pause");
	}
