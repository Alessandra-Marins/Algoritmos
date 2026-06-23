#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
main (){
	printf("\n******************************************************************");
	printf("\n*Aluna: ALESSANDRA GONCALVES MARINS - RA 0010463                 *");
	printf("\n*Programa AGM - 29 - Um jogo educativo precisa mostrar apenas os *");
	printf("\n*numeros pares para ensinar matematica basica. O programa deve   *");
	printf("\n*exibir todos os numeros pares entre 0 e 50.                     *");
	printf("\n******************************************************************");
	int i;
	for(i=0; i<=50; i = i+2){
	printf("\n%d", i);
	}
	printf("\n\n");
	system("pause");
}
