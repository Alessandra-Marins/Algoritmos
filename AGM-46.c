#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
main (){
	printf("\n*********************************************************************");
	printf("\n*Aluna: ALESSANDRA GONCALVES MARINS - RA 0010463                    *");
	printf("\n*Programa AGM - 46 - Uma escola esta ensinando estruturas de        *");
	printf("\n*repeticao para iniciantes em programacao. O programa deve imprimir *");
	printf("\n*os numeros de 1 ate 10, um por linha, utilizando do...while.       *");
	printf("\n*********************************************************************");
	int i = 1;
	
	do {
		printf("\n%d", i);
		i++;
	} while(i <= 10);
	
	printf("\n\n");
	system("pause");
}
