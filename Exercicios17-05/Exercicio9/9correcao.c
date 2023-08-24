/*
8.	Faça uma função que receba como parâmetros por referência a linha, a 
coluna e uma mensagem, esta função deve imprimir na tela a mensagem na 
posição solicitada. 
*/
#include <stdio.h>
#include <stdlib.h>

void imprimir(int *l, int *c, char *m);

int main(void){
	int linha, coluna;
	char mensagem[50];
	
	printf("Digite a linha: ");
	scanf("%i",&linha);
	fflush(stdin);
	printf("Digite a coluna: ");
	scanf("%i",&coluna);
	fflush(stdin);
	printf("Digite a mensagem: ");
	gets(mensagem);
	fflush(stdin);
	
	imprimir(&linha,&coluna,mensagem);
	
	return 0;
}

void imprimir(int *l, int *c, char *m){
	int i;
	// system("cls");
	for(i=1;i<=*l;i++){
		printf("\n");
	}
	for(i=1;i<=*c;i++){
		printf(" ");
	}
	printf("%s",m);
}