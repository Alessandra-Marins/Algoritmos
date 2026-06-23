#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
main (){
	printf("\n*********************************************************************");
	printf("\n*Aluna: ALESSANDRA GONCALVES MARINS - RA 0010463                    *");
	printf("\n*Programa AGM-23 - Dois atletas registraram suas pontuacoes em uma  *");
	printf("\n*prova. O sistema precisa identificar qual foi a maior pontuacao. O *");
	printf("\n*programa deve receber dois numeros e mostrar qual deles e o maior. *");
	printf("\n*********************************************************************");
	int numero1,numero2;
	printf("\nDigite a pontuacao 1:");
	scanf("%d", &numero1);
	printf("\nDigite a pontuacao 2:");
	scanf("%d", &numero2);
	if(numero1==numero2){
	printf("\nPontuacao empatada");
}else if(numero1>numero2){
	printf("\nnumero 1 e maior",&numero1);
}else{
	printf("O numero 2 e maior", &numero2);
}
printf("\n\n");
system("pause");
	}
	
