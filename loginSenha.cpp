/*
	Name: loginSenha.cpp
	Author: Beatriz Miranda da Silva
	Date: 12/03/25 09:53
	Description: Programa para realizar recursividade INDIRETA para simular login de um sistema


*/

#include <stdio.h>
#include <iostream>
#include <string.h>

//Sessão de prototipação
void verLogin();
void verSenha();

char nome[10] = "Beatriz";
int senha = 1234;

int main()
{
	
	puts("Realizar login no sistema\n");
	puts("--------------------------");
	
	verLogin();
	
};


void verLogin(){
	
	char user[10] = " ";
	
	fflush(stdin);
	
	
	
	printf("Login: ");
	gets(user);
	if (strcmp(user, nome) == 0){
		verSenha();
	}
	else
		verLogin();
}


void verSenha(){
	
	int pwd = 0;
	int i;
	
	printf("Senha: ");
	scanf("%d", &pwd);
	

		for(i = 0; i >=3; i++){
			if(pwd == senha)
				puts("Logado!!");
		
		else (i >= 3){
			printf("Vc tem %d tentativa \n", i);
			verLogin();
		}
	}
}



//fim do prorama
