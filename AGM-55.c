#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
main (){
	printf("\n*********************************************************************");
	printf("\n*Aluna: ALESSANDRA GONCALVES MARINS - RA 0010                       *");
	printf("\n*Programa VSL - 55 - Uma pesquisa escolar registra notas positivas  *");
	printf("\n*dos participantes. O programa deve continuar recebendo numeros ate *");
	printf("\n*que um valor negativo seja digitado. Ao final, mostra o maior.     *");
	printf("\n*********************************************************************");
	float numero;
	float maior = -1; // Inicializa com um valor menor que qualquer nota positiva
	
	do {
		printf("\nDigite uma nota (ou um numero negativo para encerrar): ");
		scanf("%f", &numero);
		
		if(numero >= 0){
			if(numero > maior){
				maior = numero;
			}
		}
	} while(numero >= 0);
	
	if(maior != -1){
		printf("\nO maior numero positivo informado foi: %.2f", maior);
	}else{
		printf("\nNenhum numero positivo foi digitado.");
	}
	
	printf("\n\n");
	system("pause");
}
