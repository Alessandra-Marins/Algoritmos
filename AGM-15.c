#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
main (){
	printf("\n**********************************************************************");
	printf("\n*Aluno: ALESSANDRA GONCALVES MARINS - RA 0010463                     *");
	printf("\n*------------------- Programa AGM - 15 ------------------------------*");
	printf("\n* Uma empresa de logistica precisa calcular quantas caixas podem ser *");
	printf("\n* transportadas em um caminhão sem ultrapassar o espaço disponivel.  *");
	printf("\n* O sistema deve receber as dimensoes do caminhao e das caixas       *");
	printf("\n* (altura, largura e comprimento) e calcular quantas caixas cabem    *");
	printf("\n* no interior do veiculo. O programa devera utilizar variaveis para  *");
	printf("\n* armazenar os valores e, como teste, o aluno deve digitar os valores*");
	printf("\n* fornecidos pelo professor para verificar o resultado do calculo.   *");
	printf("\n*********************************************************************");
// C = CAIXA,B = BAU,VC = VOLUME CAIXA,VB = VOLUME BAU,QC = QUANTIDADE DE CAIXA/S
float CC,AC,LC,CB,AB,LB,VC,VB,QC;
printf("\nLargura da caixa:");
scanf("%f",&LC);
printf("\nComprimento da caixa:");
scanf("%f",&CC);
printf("\nAltura da caixa:");
scanf("%f",&AC);
printf("\nLargura do bau:");
scanf("%f",&LB);
printf("\nComprimento do bau:");
scanf("%f",&CB);
printf("\nAltura do bau:");
scanf("%f",&AB);
VC =(LC/100)*(AC/100)*(CC/100);
VB=CB*AB*LB;
QC = VB/VC;
printf("\nQuantidade de caixas que cabem no bau:%.0f\n",QC);
system("pause");
}
