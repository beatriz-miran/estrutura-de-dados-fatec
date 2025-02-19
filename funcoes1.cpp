/*
	Nome: Funcoes1.cpp
	Author: Beatriz Miranda
	Date: 19/02/2025 11:07
	Description: Programa para demonstrar o uso das funções.

*/

#include <stdio.h> //STDandad input output

//sessão de prototipação (declarar a função antes para poder usar)

int somar(int, int);
float dividir(int, int);
void desenharLinha();

main(){
	
	int a, b, soma, c;
	
	/*printf("Endereco da variavel A: %p \n", &a);
		desenharLinha();
	printf("Endereco da variavel B: %p \n", &b);
			desenharLinha();
	printf("Endereco da variavel SOMA: %p \n", &soma);
			desenharLinha();
	printf("Endereco da variavel C: %p \n", &c);*/
		
	a = b = 0;
	
	desenharLinha();
	printf("Digite o valor de A: ");
	scanf("%d", &a);
	desenharLinha();
	printf("Digite o valor de B: ");
	scanf("%d", &b);
	//soma = somar(a, b); //invoke, chamar a função
	desenharLinha();
	printf("A soma eh: %d \n", somar(a,b));
	desenharLinha();
	printf("A divisao eh: %.2f \n", dividir(a,b));
	
	desenharLinha();
	
}//fim do programa


// funções do programa
int somar(int a, int b){
	return a + b;
}

float dividir(int a, int b){
	return (float)a/b; //casting
}

void desenharLinha(){
	puts("____________________________________");
}
