#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
main (){
	printf("\n*********************************************************************");
	printf("\n*Aluna: ALESSANDRA GONCALVES MARINS - RA 0010463                    *");
	printf("\n*Programa AGM - 59 - Faça um programa que leia uma letra maiuscula  *");
	printf("\n*digitada e exiba o comando de voz do robo. Qualquer outra letra    *");
	printf("\n*exibe comando invalido.                                            *");
	printf("\n*********************************************************************");
	char direcao;
	
	printf("\n=== ASSISTENTE DE DIRECAO ===");
	printf("\nDigite a letra da direcao (N, S, L, O): ");
	fflush(stdin);
	scanf("%c", &direcao);
	
	switch(direcao){
		case 'N':
		case 'n':
			printf("\nSeguir para o Norte.");
			break;
		case 'S':
		case 's':
			printf("\nSeguir para o Sul.");
			break;
		case 'L':
		case 'l':
			printf("\nVirar a Leste (Direita).");
			break;
		case 'O':
		case 'o':
			printf("\nVirar a Oeste (Esquerda).");
			break;
		default:
			printf("\nComando invalido! Pare o robo.");
			break;
	}
	
	printf("\n\n");
	system("pause");
}
