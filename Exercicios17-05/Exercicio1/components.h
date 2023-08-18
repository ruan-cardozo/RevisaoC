typedef struct{
	char nome[50], sexo;
	int idade;
	float altura, peso;
}Pessoa;

Pessoa insercao(void);
void impressao(Pessoa a[], int t);

Pessoa insercao(void){
	Pessoa a;
	
	printf("Digite o nome: ");
	gets(a.nome);
	getchar();

	printf("Digite a idade: ");
	scanf("%i", &a.idade);
	getchar();
	
	printf("Digite o altura: ");
	scanf("%f", &a.altura);
	getchar();

	printf("Digite o peso: ");
	scanf("%f", &a.peso);
	getchar();

	printf("Digite o sexo: ");
	scanf("%c", &a.sexo);
	getchar();
	
	return a;
}

void impressao(Pessoa a[], int t){
	int i;
	printf("NOME\tIDADE\tALTURA\tPESO\tSEXO\n");
	for(i=0;i<t;i++){
		printf("%s\t%i\t%.1f\t%.1f\t%c\n",
		a[i].nome,a[i].idade,a[i].altura,a[i].peso,a[i].sexo);
	}
}
