#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
main (){
	printf("\n*********************************************************************");
	printf("\n*Aluna: ALESSANDRA GONCALVES MARINS - RA 0010463                    *");
	printf("\n*Programa AGM - 38 - Um sistema de acesso precisa garantir que      *");
	printf("\n*apenas usuarios autorizados entrem. O programa deve solicitar a    *");
	printf("\n*senha repetidamente ate que o usuario digite a senha correta.      *");
	printf("\n*********************************************************************");
	int senha;
	
	printf("\nDigite a senha de acesso: ");
	scanf("%d", &senha);
	
	while(senha != 1525){
		printf("Senha incorreta! Tente novamente: ");
		scanf("%d", &senha);
	}
	
	printf("\nAcesso permitido!");
	
	printf("\n\n");
	system("pause");
}
