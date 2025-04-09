/*
	Author: Beatriz Miranda da Silva
	Name: Pilha.cpp
	Description: 
	Date: 09/04/2025
*/

//sessão de importação
#include <stdio.h>


//sessao de prototipaçao

void push(int); //funçao que insere um elemento na pilha
int pop(); //função que retira um elemento da pilha
int isEmpty();//funçao que verifica se a pilha esta vazia - retorna 1 ou 0
int isFull(); //funçao que verifica se a pilha esta cheia - retorna 1 ou 0
int top(); //retorna o elemento que está no topo da pilha
void showLIFO(); //exibe os elemenos que estao na pilha


//sessao de variaveis globais
int pilha[10];
int topo = -1; // para mostrar que a lista está vazia


main (){
	push(300);
	push(400);
	push(500);
	push(600);
	push(300);
	push(400);
	push(500);
	push(600);
	push(300);
	push(400);
	push(500);
	push(600);

	pop();
	pop();
	pop();
	pop();
	pop();
	pop();
	pop();
	pop();
	pop();
	pop();
	pop();
	pop();
	pop();
	
}//fim do main


void push(int elem){
	if(isFull() == 1){
		puts("A fila esta cheia, nao eh possivel inserir");
	}
	else{
		topo++;
		pilha[topo] = elem;
		//puts("Elemento inseirdo com sucesso");
	}
}//fim do push

int pop(){
	if(isEmpty() == 1){
		puts("Pilha vazia, nao eh possivel remover elementos");
	}
	else{
		
		int elemento;
		elemento = pilha[topo];
		topo--;
		return elemento;
		
	}
}//fim do pop

int isEmpty(){
	if(topo == -1)
		return 1;
	else
		return 0;

}//fim do isEmpty

int isFull(){
	if(topo == 9)
		return 1;
	else
		return 0;
	
}//fim do isFull

int top(){
	return pilha[topo];
}//fim do top

void showLIFO(){
	puts("\nConteudo da pilha": );
	if(isEmpty() == 1){
		puts("pilha vazia");
	}
	else{
		fot(int i = 0; i <= topo; i++){
			printf("%d\n", pilha[i]);
		}
	}
}//fim do show



