#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
main (){
	printf("\n*********************************************************************");
	printf("\n*Aluna: ALESSANDRA GONCALVES MARINS - RA 0010463                    *");
	printf("\n*Programa AGM - 36 - Uma crianca esta aprendendo contagem numerica  *");
	printf("\n*no computador. O programa deve imprimir os numeros de 1 ate 10     *");
	printf("\n*usando while.                                                      *");
	printf("\n*********************************************************************");
	int i = 1;
	
	while(i <= 10){
		printf("\n%d", i);
		i++;
	}
	
	printf("\n\n");
	system("pause");
}
