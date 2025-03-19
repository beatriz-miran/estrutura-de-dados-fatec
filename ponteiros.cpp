/*
	Name: Ponteiros.cpp
	Aauthor: Beatriz Miranda da Silva
	Date: 19/03/2025 11:08
	Description: Programa para explorar os recursos de ponteiros


*/

#include <stdio.h>

main(){
	
	char c1, c2, c3; 
	c1 = 'A';
	c2 = 'B';
	c3 = 'C';
	
	
	int a = 5;
	int b = 3;
	int c = 9;
	
	printf("Valor de A: %d \n", a );
	printf("Valor de B: %d \n", b );	
	printf("Valor de C: %d \n", c );

	
	puts("\nValor dos ponteiros em Hexadecimal: \n");
	printf("Endereco da variavel A: %p \n", &a);
	printf("Endereco da variavel B: %p \n", &b);
	printf("Endereco da variavel C: %p \n", &c);
	
	
	puts("\nValor dos ponteiros em Decimal (bytes) \n");

	
	printf("Endereco da variavel A: %d \n", &a);
	printf("Endereco da variavel B: %d \n", &b);
	printf("Endereco da variavel C: %d \n", &c);
	
	puts("\n\n======= Endereco das variaveis do tipo CHAR ======== ");
	
	printf("Valor de C1: %c \n", c1 );
	printf("Valor de C2: %c \n", c2 );	
	printf("Valor de C3: %c \n", c3 );

	
	puts("\nValor dos ponteiros em Hexadecimal: \n");
	printf("Endereco da variavel C1: %p \n", &c1);
	printf("Endereco da variavel C2: %p \n", &c2);
	printf("Endereco da variavel C3: %p \n", &c3);
	
	
	puts("\nValor dos ponteiros em Decimal (bytes) \n");

	
	printf("Endereco da variavel C1: %d \n", &c1);
	printf("Endereco da variavel C2: %d \n", &c2);
	printf("Endereco da variavel C3: %d \n", &c3); 
	
	 
}//fim do programa
