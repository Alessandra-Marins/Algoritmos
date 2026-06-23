#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
main (){
	printf("\n*********************************************************************");
	printf("\n*Aluna: ALESSANDRA GONCALVES MARINS - RA 0010463                    *");
	printf("\n*Programa AGM - 41 - Um estudante deseja verificar se determinado   *");
	printf("\n*numero e primo utilizando outro tipo de repeticao. O programa deve *");
	printf("\n*testar se o numero possui apenas dois divisores usando while.      *");
	printf("\n*********************************************************************");
	int numero;
	int i = 1;
	int divisores = 0;
	
	printf("\nDigite um numero: ");
	scanf("%d", &numero);
	
	while(i <= numero){
		if(numero % i == 0){
			divisores++;
		}
		i++;
	}
	
	if(divisores == 2){
		printf("\nO numero %d e primo", numero);
	}else{
		printf("\nO numero %d nao e primo", numero);
	}
	
	printf("\n\n");
	system("pause");
}
