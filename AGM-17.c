#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
main (){
	printf("\n*********************************************************************");
	printf("\n*Aluna: ALESSANDRA GONCALVES MARINS - RA 0010463                    *");
	printf("\n*Programa AGM- 17 - Voce foi contratado para programar o sistema    *");
	printf("\n*de seguranca de uma nova montanha-russa em um parque de            *");
	printf("\n*diversoes. Por motivos de seguranca, existe uma altura minima de   *");
	printf("\n*140 centimetros (1.40m) para poder entrar no brinquedo. Na entrada,*");
	printf("\n*ha um sensor digital que mede a altura da crianca em centimetros.  *");
	printf("\n*O seu trabalho e criar o algoritmo que le essa altura e decide se o*");
	printf("\n*painel vai acender a luz verde (liberado) ou a luz vermelha        *");
	printf("\n*(barrado).                                                         *");
	printf("\n*********************************************************************");
	float altura;
	printf("\nAltura da crianca:");
	scanf("%f",&altura);
	if(altura>=1.40){
	printf("\nLiberado",&altura);
	}else{
	printf("\nBarrado");
	}
printf("\n\n");
system("pause");
}
