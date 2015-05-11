#include <stdlib.h>
#include <stdio.h>



typedef struct {
	char descricao[40];
	int codigo;
	double preco;
	int quantidade;
} produtos;



void alocaProdutos(produtos *pr, int numero){
	
	pr = (produtos *) malloc(numero * sizeof (produtos));
	
	if (!pr){
          printf ("** Erro: Memoria Insuficiente **\n");
 
	produtos *pr;          exit;
      }else{
          printf ("** Memoria Alocada com Sucesso **\n");
      } 
}

void preencherProduto(produtos *pr, int numero){
	int i=0;
	
	for(i=0;i<numero;i++){
		printf("\n----- Preenchendo as prateleiras -----");
		printf("\nInforme o nome do produto: ");
		fflush(stdin);
		scanf("%s", &pr[i].descricao);
		
		printf("\nInforme o codigo limite 50: ");
		fflush(stdin);
		scanf("%s", &pr[i]).codigo);
		
		printf("\nInforme o preco do produto: ");
		fflush(stdin);
		scanf("%lf", &pr[i].preco); //Para Double %lf
		
		printf("\nInforme a quantidade para stock: ");
		fflush(stdin);
		scanf("%d", &pr[i].quantidade);
		
	}
}

int produtosEmFalta() {
	printf("\nFaltam produtos no stock!\n");
}

int lisitarProdutos(produtos *pr){
	int reg=1;
	while(pr != NULL) {
		printf("Log de produto %i", reg++);
		printf("\tNome %s\n", &pr->descricao);
		printf("\tCodigo do produto %i\n", &pr->codigo);
		printf("\tPreco do produto %i\n", &pr->preco);
		printf("\tQuantidade de produtos %i\n", &pr->quantidade);
	}	
}


int main(void)
{	
	int aux;
	printf("---- Sistema de Cadastro de Produtos ----");
	printf("\n----- Definindo o tamanho do Stock -----\n");
	printf("Informe a quantidade de produtos: ");
	scanf("%d", &aux);
	
	produtos *pr;
	
	alocaProdutos(pr, aux);
	preencherProduto(pr, aux);
	produtosEmFalta();
	lisitarProdutos(pr);
	
	system("pause");
	return 0;
}
