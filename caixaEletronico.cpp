/*
	Name: caixaEletronico.cpp
	Author: Beatriz Miranda da Silva
	Date: 12/03/25 11:16
	Description: Programa para realizar recursividade INDIRETA para simular login de um sistema


*/

#include <stdio.h>
#include <iostream>
#include <string.h>

//Sessão de prototipação
void verSaldo();
void realizarSaque();
void fazerDeposito();
void menuOpcoes();
void verLogin();
void verSenha();


//Sessão variaveis globais
char cliente[10] = "Beatriz";
int saldo = 1000;
float numCont = 123456;
int senha = 123;

int main()
{
	
	puts("Bem vindo ao nosso Caixa Eletronico!");
	puts("------------------------------------");
	
	menuOpcoes();
	
};

void menuOpcoes(){
	
	int opcao;
	

	puts("\n1 - VER SALDO");
	puts("2 - REALIZAR SAQUE");
	puts("3 - FAZER DEPOSITO");
	puts("0 - SAIR\n");
	
	scanf("%d", &opcao);
	
	switch(opcao){
		case 1:
				
	verLogin();
		
			verSaldo();
			break;
		case 2:
				
	verLogin();
	
			realizarSaque();
			break;
		case 3:
			fazerDeposito();
			break;
		case 0:
			puts("saindo");
			break;
		default:
			printf("Opçao invalida. Digite novamente.");
	};
}

void verSaldo(){
	
	
	printf("Seu saldo eh: R$ %d \n\n", saldo);
	
		menuOpcoes();
}

void realizarSaque(){

	int valSaq;
	
	printf("Seu saldo atual eh: %d\n\n", saldo);
	
	printf("\nInsira o valor que deseja sacar: \n");
	scanf("%d", &valSaq);
	
	 	if (valSaq > saldo){
	 		puts("Vc nao possui valor suficiente para realizar o saque. \n");
	 		realizarSaque();
		 }
		 else if(valSaq <= saldo){
		 	saldo = saldo - valSaq;
		 	printf("Vc acabou de sacar %d reais. Seu saldo atual eh: %d \n", valSaq, saldo);
		 	menuOpcoes();
		 }
}

void fazerDeposito(){
	int valIns;
	
	printf("Insira o valor que deseja inserir: ");
	scanf("%d", &valIns);
	
	 
	saldo = saldo + valIns;
	printf("Vc acabou de inserir %d reais. Seu saldo atual eh: %d", valIns, saldo);
	
		menuOpcoes();

}


void verLogin(){
	
	float cont;
	
	fflush(stdin);
	
	puts("===========================");
	printf("Numero da conta: ");
	scanf("%f", &cont);
	if (cont == numCont){
		verSenha();
	}
	else
		verLogin();
}


void verSenha(){
	
	int pwd = 0;
	int i;
	int tentativas = 3;
	
		
		
	while (i <= tentativas) {
        printf("Digite a senha: ");
        scanf("%d", &pwd); 
        
   
	if(pwd == senha){

		puts("Logado!!\n");
		return;
	}
	else 
	{
            printf("Senha incorreta! Voce tem %d tentativas restantes.\n", tentativas - i);
    }

        i++; 
    }
    
    verLogin();
    
	
	puts("============================");
}



