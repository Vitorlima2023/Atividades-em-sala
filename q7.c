#include <stdio.h> // inclusão de biblioteca
#include <stdlib.h> // inclusão de biblioteca

int main (){ // chamando a função principal
	
	int idade; // declarão da variáverl inteira "idade"
	
	printf("informe sua idade: "); // é solicitado ao usuário sua idade
	scanf("%d", &idade); // o valor recebido é gravado na variável "idade"
	
		if(idade>=18){ // o if identifica se o número recebido é maior, igual ou menor do que o valor atribuido na variável "idade"
		printf(" usuario maior de idade \n"); //se o valor da variável for maior ou igual a 18, é impresso na tela que o usuário é maior de idade 
	}
		else
		printf("usuario menor de idade \n"); //se o valor da variável for menor que 18, é impresso na tela que o usuário é menor de idade 
		
		system("pause"); //pausa do programa
	
	
}
