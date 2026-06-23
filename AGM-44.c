#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
main (){
	printf("\n*********************************************************************");
	printf("\n*Aluna: ALESSANDRA GONCALVES MARINS - RA 0010463                    *");
	printf("\n*Programa AGM - 44 - Um sistema bancario deseja identificar quantos *");
	printf("\n*digitos possui um numero informado. O programa deve receber um     *");
	printf("\n*numero positivo e mostrar quantos digitos ele possui.              *");
	printf("\n*********************************************************************");
	int numero, contador = 0;
	
	printf("\nDigite um numero positivo: ");
	scanf("%d", &numero);
	
	// Caso especial se o usuário digitar 0
	if(numero == 0){
		contador = 1;
	}
	
	while(numero > 0){
		numero = numero / 10;
		contador++;
	}
	
	printf("\nO numero possui %d digito(s)", contador);
	
	printf("\n\n");
	system("pause");
}
