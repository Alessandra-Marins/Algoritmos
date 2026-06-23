#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
main (){
	printf("\n**********************************************************************");
	printf("\n*Aluna: ALESSANDRA GONCALVES MARINS - RA 0010463                     *");
	printf("\n*Programa AGM - 33 - Um aplicativo educacional deseja destacar os    *");
	printf("\n*numeros multiplos de 3 para os alunos. O programa deve listar todos *");
	printf("\n*os multiplos de 3 entre 1 e 30.                                     *");
	printf("\n**********************************************************************");
	int i;
	printf("\nNumeros multiplos de 3 de 1 a 30");
	for(i=0; i<=30;i+=3){
	printf("\n%d", i);
	}
	printf("\n\n");
	system("pause");
}
