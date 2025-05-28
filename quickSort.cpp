/*
	Name: quickSort.cpp
	Author: Beatriz Miranda
	Date: 28/05/25 11:20
	Description: 
*/

#include <stdio.h>


void quickSort(int *, int, int);
int partition(int *, int, int);

main(){
	
	//vetor randomico
int i;
    
   int vet[] = { 35, 72, 17, 3, 28, 93, 54, 12, 21, 45};	// Vetor Randomico
   
   int tam = sizeof(vet)/sizeof(int);	
	
	puts("vetor desordenado:");
	for(i = 0; i < tam; i++){
		printf("%d | ", vet[i]);
	};

	quickSort(vet, 0, tam - 1);
	
	puts("\n\nvetor ordenado:");
	for(i = 0; i < tam; i++){
		printf("%d | ", vet[i]);
	};


}//fim do main


//funçao quick sort para a esquerda e direita das partições
void quickSort(int vet[], int inicio, int fim){
	
	int pivot = 0; //esse pivot quarda o indice
	if(inicio < fim){
		pivot = partition(vet, inicio, fim);
		quickSort(vet, inicio, pivot - 1); //quickSort para o lado esquerdo
		quickSort(vet, pivot + 1, fim); // quickSort para o lado direito
	}
	
}//fim do quick sort

//funçao partition para particionar o vetor
int partition(int vet[], int inicio, int fim){
	
	int pivot, aux; //esse pivot guarda o elemento
	pivot = vet[inicio];
	while(inicio < fim){
		while(vet[inicio] < pivot)
			inicio++;
		
		while(vet[fim] > pivot)
			fim--;
		
		
		if(inicio < fim){
			aux = vet[inicio];
			vet[inicio] = vet[fim];
			vet[fim] = aux;
		}
	}//fim do while que caminha nas duas direçoes
	
	vet[inicio] = vet[fim];
	vet[fim] = pivot;
	
	return fim;
	
}//fim do partition
