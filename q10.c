#include <stdio.h> // inclus�o de biblioteca
#include <stdlib.h> // inclus�o de biblioteca

int main (){ // chamada da fun��o principal
	
	char nome[25]; // declara��o da vari�vel char "nome" e limita��o de 25 caracteres na sua grava��o
	int idade; // declara��o da vari�vel inteira "idade"
	
	printf ("Informe seu primeiro nome: "); // solicita ao usu�rio seu  primeiro nome
	scanf("%s", &nome); // � feita a grava��o do nome recebido do usu�rio a vari�vel "nome"
	
	printf ("Informe sua idade: "); // solicita ao usu�rio sua idade
	scanf("%d", &idade); // � feita a grava��o da idade recebida do usu�rio a vari�vel "idade"
	
	printf("ola %s, parabens pelos seus %d anos e seja bem vindo(a)\n", nome, idade); // � impresso na tela do usu�rio uma mensagem de sauda��o com seu nome e sua idade;
	
	system("pause"); // pausa do programa
	
}
