#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
main (){
	printf("\n*********************************************************************");
	printf("\n*Aluna: ALESSANDRA GONCALVES MARINS - RA 0010463                    *");
	printf("\n*Programa AGM - 34 - Um estudante estao aprendendo sobre numeros    *");
	printf("\n*primos e quer automatizar a verificacao. O programa deve receber   *");
	printf("\n*um numero e informar se ele e primo utilizando for.                *");
	printf("\n*********************************************************************");
	int i,numero;
	int divisores=0;
	printf("\nDigite um numero:");
	scanf("%d", &numero);
	for(i=1; i<=numero; i++){
		if(numero%i==0){
		divisores++;
	}
	} if(divisores==2){
	printf("\n O numero %d e primo", numero);
	 }else{
	printf("\n O numero %d nao e primo", numero);
	 }
	printf("\n\n");
	system("pause");
}
