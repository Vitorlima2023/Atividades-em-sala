#include <stdio.h> // inclus�o de biblioteca
#include <stdlib.h> // inclus�o de biblioteca

int main (){ // chamada da fun��o principal
	
	int n, i, tab; // declara��o das vari�veis "n", "i" e "tab"
	
		printf("informe um numero: "); // solicita um n�mero ao usu�rio
		scanf("%d", &n); // � feita a grava��o do n�mero recebido do usu�rio a vari�vel "n"
	
		for(i=1;i<=10;i++){ // la�o de repeti��o para imprimir a tabuada quantas vezes desejada ao usu�rio, no caso em quest�o do 1 ao 10
		 tab = n*i; // � gravado na vari�vel "tab" a multiplica��o do indice de repeti��o pelo n�mero gravado na vari�vel "n"
		printf("%d * %d resulta em %d \n",n ,i ,tab); // � impresso na tela do usu�rio a soma em quest�o e seu resultado atrav�s do n�mero atribuido a vari�vel "tab", at� o fim do la�o de repeti��o 
	}
	
	system("pause"); // pausa do programa
	
}
