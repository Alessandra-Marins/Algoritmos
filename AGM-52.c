#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
main (){
	printf("\n***********************************************************************");
	printf("\n*Aluna: ALESSANDRA GONCALVES MARINS - RA 0010463                      *");
	printf("\n*Programa AGM - 52 - Um sistema de pontuacao recebe varios valores    *");
	printf("\n*digitados pelo usuario. Os numeros devem ser somados continuamente   *");
	printf("\n*ate que seja digitado um numero multiplo de 10. Ao final, o programa *");
	printf("\n*deve mostrar a soma total dos valores informados.                    *");
	printf("\n***********************************************************************");
	int numero;
	int soma = 0;
	
	do {
		printf("\nDigite un numero para somar: ");
		scanf("%d", &numero);
		
		soma = soma + numero;
	} while(numero % 10 != 0);
	
	printf("\nA soma total dos valores informados e: %d", soma);
	
	printf("\n\n");
	system("pause");
}
