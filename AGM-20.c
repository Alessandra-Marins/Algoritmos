#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
main (){
	printf("\n*********************************************************************");
	printf("\n*Aluna: ALESSANDRA GONCALVES MARINS - RA 0010463                    *");
	printf("\n*Programa AGM- 20 - Uma agenda digital precisa descobrir se         *");
	printf("\n*determinado ano tera 366 dias. O usuario informa um ano, e o       *");
	printf("\n*programa deve verificar se ele e bissexto ou nao.                  *");
	printf("\n*********************************************************************");
	int ano;
    
    printf("\nDigite o ano: ");
    scanf("%d", &ano);
    if ((ano % 4 == 0 && ano % 100 != 0) || (ano % 400 == 0)) {
        printf("\nO ano %d e bissexto.", ano);
    } else {
        printf("\nO ano %d nao e bissexto.", ano);
    }
    
    printf("\n\n");
    system("pause");
}
