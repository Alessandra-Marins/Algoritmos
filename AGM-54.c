#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
main (){
	printf("\n*********************************************************************");
	printf("\n*Aluna: ALESSANDRA GONCALVES MARINS - RA 0010463                    *");
	printf("\n*Programa AGM - 54 - Um jogo educativo aceita apenas niveis de      *");
	printf("\n*dificuldade entre 1 e 5. O programa deve pedir ao usuario um numero*");
	printf("\n*dentro desse intervalo e continuar solicitando enquanto for        *");
	printf("\n*invalido.                                                          *");
	printf("\n*********************************************************************");
	int numero;
	
	do {
		printf("\nDigite um nivel de dificuldade (entre 1 e 5): ");
		scanf("%d", &numero);
		
		if(numero < 1 || numero > 5){
			printf("Opcao invalida! O nivel deve ser de 1 a 5.\n");
		}
	} while(numero < 1 || numero > 5);
	
	printf("\nNivel %d selecionado. Otimo jogo!", numero);
	
	printf("\n\n");
	system("pause");
}
