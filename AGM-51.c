#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
main (){
	printf("\n*********************************************************************");
	printf("\n*Aluna: ALESSANDRA GONCALVES MARINS - RA 0010463                    *");
	printf("\n*Programa AGM - 51 - Uma corrida escolar utiliza uma contagem       *");
	printf("\n*regressiva antes da largada. O programa deve mostrar os numeros de *");
	printf("\n*10 ate 1 em ordem decrescente utilizando do...while.               *");
	printf("\n*********************************************************************");
	int i = 10;
	
	do {
		printf("\n%d", i);
		i--;
	} while(i >= 1);
	
	printf("\n\n");
	system("pause");
}
