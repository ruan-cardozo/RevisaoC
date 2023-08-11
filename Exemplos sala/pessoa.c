#include <stdio.h>
#include <stdlib.h>

#define TAM 3

typedef struct {
    int idade;
    char nome[50];
} Pessoa;

int main(void) {
    Pessoa alunos[TAM];
    int i;

    //entrada de dados
    for (i = 0; i < TAM; i++) {
        printf("--- %i ---\n", i);
        printf("Digite o nome: ");
        scanf("%49[^\n]%*c", alunos[i].nome); // Lê até 49 caracteres (evita estouro) até uma nova linha, e consome a nova linha.
        
        printf("Digite a idade: ");
        scanf("%i", &alunos[i].idade);
        getchar(); // Limpa o buffer após a leitura da idade.
    }

    //saida de dados
    printf("\nNOME\tIDADE\n");
    for (i = 0; i < TAM; i++) {
        printf("%s\t%i\n", alunos[i].nome, alunos[i].idade);
    }

    return 0;
}

// entender porque nao rodou 
// #include <stdio.h>
// #include <stdlib.h>

// #define TAM 3

// // Dado estruturado ou dado abstrato
// typedef struct{
// 	int idade;
// 	char nome[50];
// }Pessoa;

// int main(void){
// 	// variáveis locais
// 	Pessoa alunos[TAM];
// 	int i;
	
// 	// Entrada de dados
// 	for(i=0;i<TAM;i++){
// 		printf("---%i---\n",i);
// 		printf("Digite o nome: ");
// 		/* PARA LINUX
// 		fgets(alunos[i].nome,50,stdin);
// 		getchar();
// 		*/
// 		gets(alunos[i].nome);
// 		fflush(stdin);
// 		printf("Digite a idade: ");
// 		scanf("%i",&alunos[i].idade);
// 		fflush(stdin);
// 	}
	
// 	// Saída de dados
// 	printf("\nNOME\tIDADE\n");
// 	for(i=0;i<TAM;i++){
// 		printf("%s\t%i\n",alunos[i].nome,alunos[i].idade);
// 	}
	
// 	return 0;
// }