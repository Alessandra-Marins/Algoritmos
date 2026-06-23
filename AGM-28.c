#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
main (){
	printf("\n*********************************************************************");
	printf("\n*Aluna: ALESSANDRA GONCALVES MARINS - RA 0010463                    *");
	printf("\n*Programa AGM - 28 - Uma loja deseja calcular rapidamente a soma de *");
	printf("\n*uma sequencia de numeros para um relatorio simples. O programa deve*");
	printf("\n*calcular a soma dos numeros de 1 ate 100 utilizando um laco for.   *");
	printf("\n*********************************************************************");
	int i;
	int soma = 0;
	for (i=1; i<=100; i++){
	soma = soma+i;
	}
	printf("\nO valor da soma e: %d", soma);
	printf("\n\n");
	system("pause");
}
