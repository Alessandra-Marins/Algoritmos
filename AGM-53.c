#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
main (){
	printf("\n*********************************************************************");
	printf("\n*Aluna: ALESSANDRA GONCALVES MARINS - RA 0010463                    *");
	printf("\n*Programa VSL - 53 - Um programa de cadastro possui um menu simples *");
	printf("\n*de opcoes. Apos cada operacao, o sistema deve perguntar se o       *");
	printf("\n*usuario deseja sair. O menu continuara aparecendo ate que o usuario*");
	printf("\n*digite a letra s.                                                  *");
	printf("\n*********************************************************************");
	char opcao;
	
	do {
		printf("\n=== MENU DE CADASTRO ===");
		printf("\n[Executando operacoes do sistema...]");
		
		printf("\n\nDeseja sair do programa? (Digite 's' para sim / qualquer outra letra para continuar): ");
		fflush(stdin); // Limpa o buffer do teclado antes de ler o char
		scanf("%c", &opcao);
		
		printf("\n---------------------------------------------------\n");
	} while(opcao != 's' && opcao != 'S');
	
	printf("\nSistema encerrado.");
	
	printf("\n\n");
	system("pause");
}
