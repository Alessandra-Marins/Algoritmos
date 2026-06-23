#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
main (){
	printf("\n*********************************************************************");
	printf("\n*Aluna: ALESSANDRA GONCALVES MARINS - RA 0010463                    *");
	printf("\n*Programa AGM - 49 - Uma escola criou um sistema simples para       *");
	printf("\n*liberar o acesso ao laboratorio de informatica. O programa deve    *");
	printf("\n*solicitar a senha do usuario repetidamente ate que ele digite a    *");
	printf("\n*senha correta (1111). Quando acertar, exibe acesso liberado.       *");
	printf("\n*********************************************************************");
	int senha;
	
	do {
		printf("\nDigite a senha de acesso ao laboratorio: ");
		scanf("%d", &senha);
		
		if(senha != 1111){
			printf("Senha incorreta! Tente novamente.\n");
		}
	} while(senha != 1111);
	
	printf("\nAcesso liberado!");
	
	printf("\n\n");
	system("pause");
}
