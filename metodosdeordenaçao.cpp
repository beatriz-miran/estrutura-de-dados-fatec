/*
	Name: metodosdeordenaçao.cpp
	Author: Beatriz Miranda da Silva
	Date: 16/04/25 11:17
	Description: Programa para demonstrar o métodos de ordenação
*/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
	int tam, i, aux, comp, troca;
	comp = troca = 0;
//	int vetor[] = { 35, 72, 17, 3, 28, 93, 54, 12, 21, 45};	// Vetor Randomico
//	int vetor[] = { 93, 72, 54, 45, 35, 28, 21, 17, 12, 3};	//Pior caso
//	int vetor[] = { 3, 12, 17, 21, 28, 35, 45, 54,72, 93};	//Melhor caso
//int vetor[] = { 35, 72, 17, 3};

	// Criando vetor de 100 elementos randomicos
	int vetor[10];
	tam = sizeof(vetor)/ sizeof (int);
	srand(time(NULL));
	for(i=0; i <tam;i++){
		vetor[i] = rand()%10;
	};
	
	puts("vetor desordenado:");
	for(i = 0; i < tam; i++){
		printf("%d | ", vetor[i]);
	};
	
	// lógica do Bubble Sort
	while(tam > 0){
		for(i = 0; i < tam-1; i++){
			if(vetor[i] > vetor[i+1]){
				aux = vetor[i+1];	// Variavel auxiliar
				vetor[i+1] = vetor[i];
				vetor[i] = aux;
				troca++;
			};
			comp++;
		};
		tam--;
	};// fim do While
	tam = sizeof(vetor)/ sizeof (int);
	puts("\n\nvetor ordenado por Bubble:");
	for(i = 0; i < tam; i++){
		printf("%d | ", vetor[i]);
	};
	printf("\nQuantidade de comparações: %d ", comp);
	printf("\nQuantidade de trocas: %d ", troca);
	
};// fim do programa
