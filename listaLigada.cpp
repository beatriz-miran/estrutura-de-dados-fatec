
/*
	Name: listLigada.cpp 
	Author: Beatriz Miranda da Silva
	Date: 19/03/2025 11:37
	Description: Implementação de lista ligada (encadeada)
*/

#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <string.h>
#include <windows.h>


typedef struct No
{
	char *nome;
	int idade;
	float altura;
	struct No *proximo; // o no aponta para o proximo nó
};

typedef struct{
	No *inicio, *fim;
	int tamanho;
	
} Lista;


// Funçao para inserir um elemento (nó) no início da lista
void inserirInicioLista(Lista *lista, char *nom , int ida, float alt){
	No *novo = (No*)malloc(sizeof(No)); //reserva espaço na memória para armazenar um nó
	novo->nome = nom;
	novo->idade = ida;
	novo->altura = alt;
	
	
	if(lista->inicio == NULL)//A lista está vazia
	{
		novo->proximo = NULL;
		lista->inicio = novo;
		lista->fim = novo;	
	}
	else // A lista não está vazia
	{
		novo->proximo = lista->inicio;
		lista->inicio = novo;		
	}
	
	lista->tamanho++;	
	puts("ELEMENTO INSERIDO NO INICIO COM SUCESSO");
}; //fim da funçao inserirInicioLista


void inserirFimLista(Lista *lista, char *nome, int idade, float alt){
	No *novo = (No*)malloc(sizeof(No));
	
	novo->nome = nome;
	novo->idade = idade;
	novo->altura = alt;
	
	novo->proximo = NULL;
	
	if(lista->inicio == NULL) // a lista estiver vazia
	{
		lista->inicio = novo;
		lista->fim = novo; 
	}
	else{ //se a lista NÃO estiver vazia
		lista->fim->proximo = novo;
		lista->fim = novo; //o fim da minha lista é o novo nó que eu inseri
	}
	
	lista->tamanho++;
	puts("ELEMENTO INSERIDO NO FIM COM SUCESSO");
}// fim da funçao inserirFimLista


//função para exibir todo o conteudo da lista
void exibirLista(Lista *lista)
{
	No *inicio = lista->inicio; //posiciona no primeiro nó da lista
	printf("\n\nTamanho da lista: %d elementos \n\n", lista->tamanho);
	
	while(inicio != NULL)
	{
		printf("| Nome: %s | Idade: %d | Altura: %f |", &inicio->nome, inicio->idade, inicio->altura);
		printf(" -> \n\n");
		inicio = inicio->proximo;
	}
	printf("NULL");
 } 

//funçao para retirar um elemento da lista
void retirarNoLista(Lista *lista, char *nomeRemover){
	
	No *inicio = lista->inicio; //ponteiro para o primeiro No da lista
	No *noARemover = NULL;
	
	if(inicio != NULL && lista->inicio->nome == nomeRemover) //remove o primeiro elemento da lista
	{
		noARemover = lista->inicio;
		lista->inicio = noARemover->proximo;
		if(lista->inicio == NULL){
			lista->fim == NULL;
		}
		else //remover nos do meio da lista ou do fim dela
		{
			while(inicio != NULL && inicio->proximo != NULL && inicio->proximo->nome != nomeRemover)
			{
				inicio = inicio->proximo;
			} 
			if(inicio != NULL && inicio->proximo != NULL)
			{
				noARemover = inicio->proximo;
				inicio->proximo = noARemover->proximo;
				if(inicio->proximo == NULL){ //se o ultimo elemento for removido
					lista->fim = inicio;
				}
			}
			
		}//fim do else
		if(noARemover)//teste logico para ver se é Null ou não
		{
			free(noARemover);//libera o espaço de memoria reservado para o nó
			lista->tamanho--;
		}
	}
}//fim do retirarNoLista

main(){
	
	Lista pessoas = {NULL, NULL, 0}; //Inicializa a lista
	
	char *nome;
	int idade;
	float altura;
	
	int opc = 0; //variavel que ira armazenar a opçao do menu
	while(1)
	{
		
		
		puts("1 - Inserir INICIO\n2 - Inserir FIM\n3 - Exibir lista\n4 - Remover elemento\n5 - Sair");
		printf("\nEscolha sua opcao: ");
		scanf("%d", &opc);
		
		switch(opc){
			
			case 1:
				puts("INICIO da lista");
				puts("===============");
				printf("Nome: "); scanf("%s", &nome);
				printf("Idade: "); scanf("%d", &idade);
				printf("Altura: "); scanf("%f", &altura);
				
				inserirInicioLista(&pessoas, nome, idade, altura);
				
				break;
			case 2:
				puts("FIM da lista");
				puts("============");
				printf("Nome: "); scanf("%s", &nome);
				printf("Idade: "); scanf("%d", &idade);
				printf("Altura: "); scanf("%f", &altura);
				
				inserirFimLista(&pessoas, nome, idade, altura);
				
				break;
			case 3:
				puts("Conteudo da Lista");
				puts("=================");
				
				exibirLista(&pessoas);
				break;
			case 4:
				printf("\n Digite o nome da pessoa que deseja remover da lista: ");
				scanf("%s", &nome);
				retirarNoLista(&pessoas, nome);
				
				break;
			case 5: exit(0);
			default:
				puts("Opcao invalida. Digite novamente");
		}//fim switch
	
		puts("\n\nPressione qualquer tecla para continuar...");
		getch();
			system("cls"); //clear screen
		
	}//fim do loop infinito
	
}//fim do programa
