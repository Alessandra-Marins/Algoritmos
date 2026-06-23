#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
main (){
	printf("\n*********************************************************************");
	printf("\n*Aluna: ALESSANDRA GONCALVES MARINS - RA 0010463                    *");
	printf("\n*Programa AGM - 45 - Um caixa eletronico simples apresenta opcoes ao*");
	printf("\n*usuario. O programa deve exibir um menu repetidamente ate que a    *");
	printf("\n*opcao sair seja escolhida.                                         *");
	printf("\n*********************************************************************");
	int opcao = 0;
	
	while(opcao != 3){
		printf("\n=== MENU DO CAIXA ELETRONICO ===");
		printf("\n1 - Consultar Saldo");
		printf("\n2 - Realizar Saque");
		printf("\n3 - Sair");
		printf("\nDigite a opcao desejada: ");
		scanf("%d", &opcao);
		
		if(opcao == 1){
			printf("\n[Saldo] Saldo atual e de R$ 8.000,00\n");
		}else if(opcao == 2){
			printf("\n[Saque] Saque indisponivel no momento\n");
		}else if(opcao != 3){
			printf("\nOpcao invalida! Tente novamente.\n");
		}
		
		printf("\n--------------------------------");
	}
	
	printf("\nObrigado volte sempre!");
	
	printf("\n\n");
	system("pause");
}
