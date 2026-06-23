#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
main (){
	printf("\n*********************************************************************");
	printf("\n*Aluna: ALESSANDRA GONCALVES MARINS - RA 0010463                    *");
	printf("\n*Programa AGM - 35 - Um clube de matematica quer estudar a famosa   *");
	printf("\n*sequencia de Fibonacci. O programa deve pedir um valor n e mostrar *");
	printf("\n*os primeiros termos da sequencia.                                  *");
	printf("\n*********************************************************************");
	int n, i;
	int t1 = 0, t2 = 1, proximo;
	
	printf("\nDigite a quantidade de termos (n): ");
	scanf("%d", &n);
	
	printf("\nSequencia de Fibonacci:\n");
	
	for(i = 1; i <= n; i++){
		printf("%d ", t1);
		proximo = t1 + t2;
		t1 = t2;
		t2 = proximo;
	}
	
	printf("\n\n");
	system("pause");
}
