/*
	Name: Buscasequencial.cpp
	Author: Beatriz Miranda da Silva
	Date: 04/06/25 10:54
	Description: implementaçaodo metodo de recuperação de informação chamado busca binaria ou logaritimica
*/

#include <stdio.h>

 main(){
 	
	//int vet[] = { 93, 72, 54, 45, 35, 28, 21, 17, 12, 3};	//Pior caso
	int vet[] = { 3, 12, 17, 21, 28, 35, 45, 54,72, 93};	//Melhor caso
 	
 	int seek, i = 0, comp = 0; //quem voce vai localizar "procurar"
 	int flag = 0; //valor simulado booleano
 	
 	int tam = sizeof(vet)/sizeof(int);	
 	
 	puts("Conteudo do vetor:");
	for(i = 0; i < tam; i++){
		printf("%d | ", vet[i]);
	}
	
	printf("\nDigite o valor a ser pesquisado: ");
 	scanf("%d", &seek);
		

	while(flag != 1){
		if(vet[i] == seek){
			flag = 1;
		}
		else{
			i++;
	}
	comp ++;
	}
	
		if(flag == 1){
			printf("o %d buscado esta na posicao %d \n\n", vet[i], vet[i +1]);
			printf("Numero de comparacoes: %d", comp);
		}
	
	
};
