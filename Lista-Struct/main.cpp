#include <stdlib.h>
#include <stdio.h>

int numeroProdutos();
int produtosEmFalta();
int cadastroProduto(int quantidade);
int lisitarProdutos(int quantidade);

typedef struct {
	char descricao[40];
	int codigo;
	double preco;
	int quantidade;
} produtos;



int main()
{	
	printf("---- Sistema de Cadastro de Produtos ----");
	int quantAux;
	
	quantAux = numeroProdutos();
	cadastroProduto(quantAux);
	produtosEmFalta();
	lisitarProdutos(quantAux);
	
	system("pause");
	return 0;
}

int numeroProdutos(){
	int aux;
	printf("\n----- Definindo o tamanho do Stock -----\n");
	printf("Informe a quantidade de produtos: ");
	scanf("%d", &aux);
	
	produtos *pr; 
	pr = (produtos *) malloc(aux * sizeof (produtos));
	
	if (!pr){
          printf ("** Erro: Memoria Insuficiente **\n");
          exit;
      }else{
          printf ("** Memoria Alocada com Sucesso **\n");
      }    
	return aux;
}

int cadastroProduto(int quantidade){
	produtos produtos1[quantidade];
	int i;
	int *aux;
	aux = &pr;
	
	for(i =0; i <quantidade;i++){
		printf("\n----- Preenchendo as prateleiras -----", i+1);
		printf("\nInforme o nome do produto: ");
		fflush(stdin);
		gets(*pr[i].descricao);
		if(*pr[i].descricao == NULL){
			printf("\nInforme um nome para o produto!");
		}
		
		printf("\nInforme o codigo limite 50: ");
		fflush(stdin);
		scanf("%d", &produtos1[i].codigo);
		if(produtos1[i].codigo <0 && produtos1[i].codigo > 50) {
			printf("\nInforme um codigo valido (0 a 50)!");
		}
		
		printf("\nInforme o preco do produto: ");
		fflush(stdin);
		scanf("%d", &produtos1[i].preco);
		if(produtos1[i].preco < 0) {
			printf("\nInforme um preco positivo");
		}
		
		printf("\nInforme a quantidade para stock: ");
		fflush(stdin);
		scanf("%d", &produtos1[i].quantidade);
		if(produtos1[i].quantidade < 0){
			printf("\nInforme a quantidade positiva!");
		}
	}
	return 0;
}

int produtosEmFalta() {
	printf("\nFaltam produtos no stock!\n");
}

int lisitarProdutos(int quantidade){
	produtos produtos1[50];
	int i;
	
	printf("%d", produtos1[50].descricao);
	
}
