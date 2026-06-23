#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
main (){
	printf("\n*********************************************************************");
	printf("\n*Aluna: ALESSANDRA GONCALVES MARINS - RA 0010463                    *");
	printf("\n*Programa AGM-25 - Uma escola deseja automatizar a verificacao das  *");
	printf("\n*notas dos alunos. O sistema deve receber a media final do estudante*");
	printf("\n*e informar se ele foi aprovado, em recuperacao ou reprovado.       *");
	printf("\n*********************************************************************");
	float media;
	printf("\nDigite a media final do estudante: ");
	scanf("%f", &media);
	
	if(media >= 7.0){
		printf("\nAprovado");
	}else if(media >= 5.0){
		printf("\nEm recuperacao");
	}else{
		printf("\nReprovado");
	}
	
	printf("\n\n");
	system("pause");
}
