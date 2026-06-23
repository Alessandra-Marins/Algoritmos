#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
main (){
	printf("\n*********************************************************************");
	printf("\n*Aluna: ALESSANDRA GONCALVES MARINS - RA 0010463                    *");
	printf("\n*Programa AGM- 21 - Um aplicativo financeiro registra lucros e      *");
	printf("\n*prejuizos. Valores positivos representam lucro e valores negativos *");
	printf("\n*representam prejuizo. O programa deve receber um numero e informar *");
	printf("\n*se ele e positivo, negativo ou zero.                               *");
	printf("\n*********************************************************************");
	int numero;
	printf("\nDigite um numero:");
	scanf("%d", &numero);
	if(numero==0){
	printf("\no numero e zero !", &numero);
	}else if(numero>0){
	printf("\no numero e positivo !", &numero);
	}else{
	printf("\no numero e negativo");
	}
printf("\n\n");
system("pause");

}
