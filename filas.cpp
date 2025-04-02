/*
	Name: filas.cpp
	Author: Beatriz Miranda da Silva
	Date: 02/04/2025 11:29
	Description: programa para implementar o conceito de filas - FIFO
*/


//Sessão de importação
#include <stdio.h>


//Sessão de prototipação
void enqueue(int);//inserir elementos na lista
int dequeue();//retirar elementos da lista
int isFull(); //verifica se a lista está cheia
int isEmpty(); //verifica se a lista está vazia
void showFIFO(); //exibir o conteúdo da fila

//Variáveis globais
int inicio, fim, total = 0, tamanho = 0;
int senhas[7];


main()
{
	tamanho = sizeof(senhas)/sizeof(int);
	printf("Tamanho do vetor: %d elementos \n", tamanho);
	//printf("Tamanho do vetor em bytes: %d", sizeof(senhas));
}//fim do main



//inserir elementos na lista
void enqueue(int){
	
};// fim enqueue


//retirar elementos da lista
int dequeue(){
	
};//fim dequeue



//verifica se a lista está cheia
int isFull(){
	if(total == tamanho){
		return 1;	
	}else{
		return 0;
	}
}//fim da função isFull

//verifica se a lista está vazia
int isEmpty(){
	if(total == 0){
		return 1;
	}else{
		return 0;
	}
	
}

//exibir o conteúdo da fila
void showFIFO();
