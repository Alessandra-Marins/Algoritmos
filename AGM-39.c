#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
main (){
	printf("\n*********************************************************************");
	printf("\n*Aluna: ALESSANDRA GONCALVES MARINS - RA 0010463                    *");
	printf("\n*Programa AGM - 39 - Um sistema financeiro so aceita valores        *");
	printf("\n*positivos para cadastro. O programa deve continuar pedindo numeros *");
	printf("\n*ate que o usuario digite um numero positivo.                       *");
	printf("\n*********************************************************************");
	float numero;
	
	printf("\nDigite um numero positivo para o cadastro: ");
	scanf("%f", &numero);
	
	while(numero <= 0){
		printf("Valor invalido! Digite um numero positivo: ");
		scanf("%f", &numero);
	}
	
	printf("\nValor cadastrado com sucesso!");
	
	printf("\n\n");
	system("pause");
}
