#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

main (){
	printf("\n*********************************************************************");
	printf("\n*Aluna: ALESSANDRA GONCALVES MARINS  - RA 0010463                   *");
	printf("\n*Programa AGM-18 - Uma escola criou um sistema simples para acesso  *");
	printf("\n*a biblioteca digital. O aluno deve informar usuario e senha        *");
	printf("\n*corretos para entrar no sistema. O programa deve verificar se os   *");
	printf("\n*dados digitados estao corretos e mostrar uma mensagem de acesso    *");
	printf("\n*permitido ou negado.                                               *");
	printf("\n*********************************************************************");
	int usuario,senha;
	printf("\nDigite o usuario:");
	scanf("%d",&usuario);
	printf("Digite a senha:");
	scanf("%d",&senha);
	if(usuario==10463 && senha==1525){
	printf("Usuario Logado",&usuario,&senha);
	}else{
	printf("Usuario ou senha incorretos");
	}
printf("\n\n");
system("pause");
}
