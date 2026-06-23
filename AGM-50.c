#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
main (){
	printf("\n*********************************************************************");
	printf("\n*Aluna: ALESSANDRA GONCALVES MARINS - RA 0010463                    *");
	printf("\n*Programa AGM - 50 - Um aplicativo bancario aceita apenas valores   *");
	printf("\n*positivos para depositos. O programa deve pedir ao usuario um      *");
	printf("\n*numero positivo e continuar solicitando enquanto ele digitar       *");
	printf("\n*valores menores ou iguais a zero.                                  *");
	printf("\n*********************************************************************");
	float deposito;
	
	do {
		printf("\nDigite o valor para deposito (deve ser positivo): ");
		scanf("%f", &deposito);
		
		if(deposito <= 0){
			printf("Valor invalido! O deposito precisa ser maior que zero.\n");
		}
	} while(deposito <= 0);
	
	printf("\nDeposito de R$ %.2f realizado com sucesso!", deposito);
	
	printf("\n\n");
	system("pause");
}
