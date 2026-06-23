#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
main (){
	printf("\n*********************************************************************");
	printf("\n*Aluna: ALESSANDRA GONCALVES MARINS - RA 0010463                    *");
	printf("\n*Programa AGM - 60 - Crie um script que receba um numero de 1 a 7 e *");
	printf("\n*agrupe os casos para exibir se e um dia de trabalho ou descanso.   *");
	printf("\n*Outros numeros exibe numero de dia invalido.                       *");
	printf("\n*********************************************************************");
	int dia;
	
	printf("\n=== VALIDADOR DE DIAS UTEIS ===");
	printf("\nDigite o numero do dia (1 - Domingo ate 7 - Sabado): ");
	scanf("%d", &dia);
	
	switch(dia){
		case 2:
		case 3:
		case 4:
		case 5:
		case 6:
			printf("\nDia Util. Acesso liberado para o trabalho.");
			break;
		case 1:
		case 7:
			printf("\nFim de Semana. Predio fechado.");
			break;
		default:
			printf("\nNumero de dia invalido.");
			break;
	}
	
	printf("\n\n");
	system("pause");
}
