#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
main (){
	printf("\n*********************************************************************");
	printf("\n*Aluna: ALESSANDRA GONCALVES MARINS - RA 0010463                    *");
	printf("\n*Programa AGM - 37 - Um caixa simples de mercado precisa somar      *");
	printf("\n*valores digitados pelo operador. O programa deve continuar         *");
	printf("\n*recebendo numeros ate que o usuario digite 0 e, ao final, mostrar  *");
	printf("\n*a soma total.                                                      *");
	printf("\n*********************************************************************");
	float numero;
	float soma = 0;
	
	printf("\nDigite um numero (ou 0 para encerrar e somar): ");
	scanf("%f", &numero);
	
	while(numero!= 0){
		soma = soma + numero;
		printf("Digite o proximo numero (ou 0 para encerrar): ");
		scanf("%f", &numero);
	}
	
	printf("\nA soma total dos valores e: %.2f", soma);
	
	printf("\n\n");
	system("pause");
}
