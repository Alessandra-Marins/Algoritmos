#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
main (){
	printf("\n*********************************************************************");
	printf("\n*Aluna: ALESSANDRA GONCALVES MARINS - RA 0010463                    *");
	printf("\n*Programa AGM - 56 - Crie um algoritmo que leia um numero inteiro de*");
	printf("\n*1 a 4 correspondente ao combo escolhido e mostre o nome do prato e *");
	printf("\n*o valor. Caso digite outro numero exibe opcao invalida.            *");
	printf("\n*********************************************************************");
	int opcao;
	
	printf("\n=== MENU FAST-FOOD DIGITAL ===");
	printf("\n1 - Combo Hamburguer + Batata + Refri");
	printf("\n2 - Combo Pizza Brotinho + Refri");
	printf("\n3 - Combo Salada + Suco Natural");
	printf("\n4 - Combo Balde de Frango + Molho");
	printf("\nDigite o numero do combo desejado (1 a 4): ");
	scanf("%d", &opcao);
	
	switch(opcao){
		case 1:
			printf("\nCombo Hamburguer + Batata + Refri - R$ 30,00");
			break;
		case 2:
			printf("\nCombo Pizza Brotinho + Refri - R$ 25,00");
			break;
		case 3:
			printf("\nCombo Salada + Suco Natural - R$ 22,00");
			break;
		case 4:
			printf("\nCombo Balde de Frango + Molho - R$ 35,00");
			break;
		default:
			printf("\nOpcao invalida! Escolha de 1 a 4.");
			break;
	}
	
	printf("\n\n");
	system("pause");
}N
