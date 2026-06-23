#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
main (){
	printf("\n*********************************************************************");
	printf("\n*Aluna: ALESSANDRA GONCALVES MARINS - RA 0010463                    *");
	printf("\n*Programa AGM-19 - Durante uma competicao escolar, tres alunos      *");
	printf("\n*obtiveram pontuacoes diferentes. O sistema precisa organizar os    *");
	printf("\n*valores do menor para o maior para facilitar a classificacao. O    *");
	printf("\n*programa deve receber tres numeros e exibi-los em ordem crescente. *");
	printf("\n*********************************************************************");
	int a,b,c;
	printf("\nPontuacao aluno 1:");
	scanf("%d",&a);
	printf("\nPontuacao aluno 2:");
	scanf("%d",&b);
	printf("\nPontuacao aluno 3:");
	scanf("%d",&c);
	
	if(a<b && b<c){
	printf("\n%d%,d%,%d", a, b, c);
}
	else if(a<c && c<b){
	printf("\n%d,%d,%d", a, c, b);
}else if(b<a && a<c){
	printf("\n%d, %d, %d", b, a, c);
	}else if(b<c && c<a){
	printf("\n%d,%d,%d", b, c, a);
	}else if(c<a && a<b){
	printf("\n%d,%d,%d", c, a, b);
	}else{
	printf("%d,%d,%d", c, b, a);
	}
	printf("\n\n");
	system("pause");
	}
