#include <stdio.h> // inclusão de biblioteca
#include <stdlib.h> // inclusão de biblioteca

int main (){ // chamada da função principal
	
	int n, i, tab; // declaração das variáveis "n", "i" e "tab"
	
		printf("informe um numero: "); // solicita um número ao usuário
		scanf("%d", &n); // é feita a gravação do número recebido do usuário a variável "n"
	
		for(i=1;i<=10;i++){ // laço de repetição para imprimir a tabuada quantas vezes desejada ao usuário, no caso em questão do 1 ao 10
		 tab = n*i; // é gravado na variável "tab" a multiplicação do indice de repetição pelo número gravado na variável "n"
		printf("%d * %d resulta em %d \n",n ,i ,tab); // é impresso na tela do usuário a soma em questão e seu resultado através do número atribuido a variável "tab", até o fim do laço de repetição 
	}
	
	system("pause"); // pausa do programa
	
}
