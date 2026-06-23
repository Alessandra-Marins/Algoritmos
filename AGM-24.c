#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
main (){
	printf("\n******************************************************************");
	printf("\n*Aluna: ALESSANDRA GONCALVES MARINS - RA 0010463                 *");
	printf("\n*Programa AGM-24 - Um sistema de cadastro eleitoral precisa      *");
	printf("\n*verificar se uma pessoa ja possui idade para votar. O usuario   *");
	printf("\n*informa sua idade, e o programa deve dizer se ele pode ou nao   *");
	printf("\n*votar.                                                          *");
	printf("\n******************************************************************");
	int idade;
	printf("\nInsira a idade:");
	scanf("%d", &idade);
	if(idade>=16){
	printf("\nJa pode votar");
	}else{
	printf("\nNao pode votar");
	}
printf("\n\n");
system("pause");

}
