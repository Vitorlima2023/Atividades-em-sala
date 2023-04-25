#include <stdio.h> // inclusão de biblioteca
#include <stdlib.h> // inclusão de biblioteca

int main (){ // chamada da função principal
	
	char nome[25]; // declaração da variável char "nome" e limitação de 25 caracteres na sua gravação
	int idade; // declaração da variável inteira "idade"
	
	printf ("Informe seu primeiro nome: "); // solicita ao usuário seu  primeiro nome
	scanf("%s", &nome); // é feita a gravação do nome recebido do usuário a variável "nome"
	
	printf ("Informe sua idade: "); // solicita ao usuário sua idade
	scanf("%d", &idade); // é feita a gravação da idade recebida do usuário a variável "idade"
	
	printf("ola %s, parabens pelos seus %d anos e seja bem vindo(a)\n", nome, idade); // é impresso na tela do usuário uma mensagem de saudação com seu nome e sua idade;
	
	system("pause"); // pausa do programa
	
}
