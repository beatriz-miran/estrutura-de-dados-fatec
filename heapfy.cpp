/*
	Name: heapSort
	Author: Beatriz Miranda da Silva 
	Date: 21/05/25 11:41
	Description: implementação do método de ordenação heaplsort
*/

#include <stdio.h>

//sessao de prototipaçao

void heapfy(int *, int, int);//heapfy(int vet[], tamanho do vetor, i)
void heapSort(int *, int);//heapSort(vetor[], tamanho do vetor)

//CRIAR VETOR RANDOMICO PARA REALIZAR O TRABALHO DE TODOS OS METODOS DE ORDENAÇÃO NO SWITCH CASE

main(){

	int i;
	int vet[] = {35,72,17,3,28,93,54,12,21,45};
	int tam =  sizeof(vet)/sizeof(tam);
	
	puts("vetor desordenado:");
	for(i = 0; i < tam; i++)
		printf("%d | ", vet[i]);
	
	heapSort(vet, tam);
	
	puts(" \n\nvetor ordenado:");
	for(i = 0; i < tam; i++)
		printf("%d | ", vet[i]);
	

}


//funçao recursiva que sempre testa se o nó pai é MAIOR que o filho no caso do MAX HEAP
void heapfy(int vet[], int tam, int i){
	int maior = i;
	int esquerda = (i * 2) + 1;//filho da esquerda
	int direita = (i * 2) + 2; //filho da direita
	
	if(esquerda < tam && vet[esquerda] > vet[maior])
		maior = esquerda; //trocando os indices
	
	if(direita < tam && vet[direita] > vet[maior])
		maior = direita;
	
	
	if(maior != i){
		int aux = vet[i];
		vet[i] = vet[maior];
		vet[maior] = aux;
		
		heapfy(vet, tam, maior);
	}
}//fim da funão recursiva heapfy

//funçao do heap sort
void heapSort(int vet[], int tam){
	for(int i  = tam/2 - 1; i >= 0; i-- ){
		heapfy(vet, tam, i);
	}
	
	//faz o swap
	for(int i = tam - 1; i >0; i--){
		int aux = vet[0];
		vet[0] = vet[i];
		vet[i] = aux;
		
		heapfy(vet, i, 0);
	}
}



