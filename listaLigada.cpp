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
}; //fim da funçao inserirInicioLista


main(){
	
}//fim do programa
