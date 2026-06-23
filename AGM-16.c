#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
main (){
	printf("\n*********************************************************************");
	printf("\n*Aluna: ALESSANDRA GONCALVES MARINS - RA 0010463                    *");
	printf("\n*Programa AGM - 16 - Uma lanchonete criou uma promocao especial.    *");
	printf("\n*Se o numero do pedido for multiplo de 3, ganha um refrigerante.    *");
	printf("\n*Se for multiplo de 5, ganha uma sobremesa. Se for multiplo dos     *");
	printf("\n*dois, ganha os dois brindes. O programa deve verificar o número do *");
	printf("\n*pedido e informar qual premio o cliente ganhou.                    *");
	printf("\n*********************************************************************");
	int pedido;
	printf("\nDigite o numero do pedido:");
	scanf("%d",&pedido);
	if(pedido%3==0 && pedido%5==0){
	printf("\nParabens, voce ganhou um refrigerante e uma sobremesa.",&pedido);
	}else if(pedido%5==0){
	printf("\nParabens, voce ganhou uma sobremesa.",&pedido);
	}else if (pedido%3==0){
	printf("\nParabens, voce ganhou um refrigerante.",&pedido);
	}else{
	printf("Desculpe, voce nao ganhou nada.\n");
}
printf("\n\n");
system("pause");
}
