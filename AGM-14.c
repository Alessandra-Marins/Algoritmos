#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
int main (){
	printf("\n*************************************************************************");
	printf("\n*Aluno: ALESSANDRA GONCALVES MARINS - RA 0010463                        *");
	printf("\n*Programa AGM-14 - Uma fabrica de estrutuas metalicas produz suportes   *");
	printf("\n*em formato de triangulos para eventos e construcoes. Antes da fabri-   *");
	printf("\n*cacao,o sistema precisa verificar o tipo do triangulo com base nas    *");
	printf("\n*medidas informadas pelo operador. O programa deve receber os tres lados*");
	printf("\n* do triangulo e informar se ele e equilatero, isosceles ou escaleno    *");
	printf("\n*************************************************************************");
int L1,L2,L3;
printf ("\nDigite L1: ");
scanf("%d",&L1);
printf("Digite L2:");
scanf("%d",&L2);
printf("Digite L3:");
scanf("%d",&L3);
// Condição de existencia de um triangulo
if (L1+L2>L3 &&L1+L3>L2 &&L2+L3>L1){
printf("\n O triangulo existe !");
//Classificacao dos triangulos
if(L1==L2&& L2==L3&& L1==L3){
printf("Equilatero");	
} else if(L1==L2 ||L1==L3 || L2==L3){
printf("ISOSCELES");
}else(L1!=L2&& L1!=L3&& L2!=L3);{
printf("ESCALENO");
}
}else{
printf("O triangulo nao existe\n");
printf("\n\n");
system("pause");
}






	
}
