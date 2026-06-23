#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
main (){
	printf("\n***********************************************************************");
	printf("\n*Aluna: ALESSANDRA GONCALVES MARINS - RA 0010463                      *");
	printf("\n*Programa AGM - 58 - O algoritmo deve receber dois numeros reais e o  *");
	printf("\n*um caractere representando a operacao. Use Switch Case para analisar *");
	printf("\n*caractere da operacao e exiba o resultado do calculo correspondente. *");
	printf("\n***********************************************************************");
	float num1, num2, resultado;
	char operacao;
	
	printf("\nDigite o primeiro numero: ");
	scanf("%f", &num1);
	
	printf("Digite o segundo numero: ");
	scanf("%f", &num2);
	
	printf("Digite a operacao (+, -, *, /): ");
	fflush(stdin);
	scanf("%c", &operacao);
	
	switch(operacao){
		case '+':
			resultado = num1 + num2;
			printf("\nResultado: %.2f + %.2f = %.2f", num1, num2, resultado);
			break;
		case '-':
			resultado = num1 - num2;
			printf("\nResultado: %.2f - %.2f = %.2f", num1, num2, resultado);
			break;
		case '*':
			resultado = num1 * num2;
			printf("\nResultado: %.2f * %.2f = %.2f", num1, num2, resultado);
			break;
		case '/':
			if(num2 != 0){
				resultado = num1 / num2;
				printf("\nResultado: %.2f / %.2f = %.2f", num1, num2, resultado);
			}else{
				printf("\nErro! Nao e possivel dividir por zero.");
			}
			break;
		default:
			printf("\nOperacao matematica nao reconhecida.");
			break;
	}
	
	printf("\n\n");
	system("pause");
}
