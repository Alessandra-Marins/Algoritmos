#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
main (){
	printf("\n*********************************************************************");
	printf("\n*Aluna: ALESSANDRA GONCALVES MARINS - RA 0010463                    *");
	printf("\n*Programa AGM - 57 - Desenvolva a logica do urso. O algoritmo deve  *");
	printf("\n*receber a cor que acendeu e exibir a fala do brinquedo. Caso seja  *");
	printf("\n*outra cor exibe cor desconhecida.                                  *");
	printf("\n*********************************************************************");
	char cor;
	
	printf("\n=== CENTRAL DO BRINQUEDO ELETRONICO ===");
	printf("\nDigite a inicial da cor que acendeu (v - Verde, a - Amarelo, r - Vermelho): ");
	fflush(stdin);
	scanf("%c", &cor);
	
	switch(cor){
		case 'v':
		case 'V':
			printf("\nO urso diz: \"Vamos brincar la fora!\"");
			break;
		case 'a':
		case 'A':
			printf("\nO urso diz: \"Estou ficando com soninho...\"");
			break;
		case 'r':
		case 'R':
			printf("\nO urso diz: \"Estou com fome, hora do lanche!\"");
			break;
		default:
			printf("\nCor desconhecida (Urso apenas pisca as luzes)");
			break;
	}
	
	printf("\n\n");
	system("pause");
}
