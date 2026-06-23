#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
main (){
	printf("\n********************************************************************************");
	printf("\n*Aluna: ALESSANDRA GONCALVES MARINS - RA 0010463                               *");
	printf("\n*Programa AGM - 48 - Facao um programa mostrando um menu de opcoes.            *");
	printf("\n*Ele fica pedindo para o usuario escolher entre duas opcoes ate que            *");
	printf("\n*o usuario escolha a opcao 2. O fluxo de execucao eo seguinte:                 *");
	printf("\n*O programa exibe o menu com as opcoes: 1-Mensagem ou 2-Sair.                  *");
	printf("\n*Seo usuario escolher 1, ele imprime a mensagem Voe escolheu a mensagem!       *");
	printf("\n*O programa continuara executando o menu ate que o usuario escolha 2 para sair.*");
	printf("\n********************************************************************************");
	int opcao;
	
	do {
		printf("\n=== MENU DE OPCOES ===");
		printf("\n1 - Mensagem");
		printf("\n2 - Sair");
		printf("\nDigite a opcao desejada: ");
		scanf("%d", &opcao);
		
		if(opcao == 1){
			printf("\nVoce escolheu a mensagem!\n");
		}else if(opcao != 2){
			printf("\nOpcao invalida! Tente novamente.\n");
		}
		
		printf("\n----------------------");
	} while(opcao != 2);
	
	printf("\nPrograma encerrado.");
	
	printf("\n\n");
	system("pause");
}
