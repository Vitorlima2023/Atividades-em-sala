#include <stdio.h> // inclus�o de biblioteca
 #include <stdlib.h> // inclus�o de biblioteca
 
 
  int main (){ // chamando a fun��o principal
  	
  	int x, ant, suc; // declara��o das vari�veris inteiras 
  	
  	printf("Informe um  numero: "); // solicita ao usu�rio um n�mero
  		scanf("%d",&x); // o n�mero recebido do usu�rio � gravado na vari�vel "x"
  		
  		ant=x-1; // � feita a subtra��o do n�mero recebido do usu�rio por 1, e ap�s isso, � feita a grava��o do resultado na vari�vel "ant"
  		suc=x+1; // � feita a adi��o do n�mero recebido do usu�rio por 1, e ap�s isso, � feita a grava��o do resultado na vari�vel "suc"
  		
  		printf("O antecessor e: %d\n", ant); // � impresso na tela do usu�rio o valor gravado vari�vel "ant"
  		printf("O sucessor e: %d\n", suc); // � impresso na tela do usu�rio o valor gravado vari�vel "suc"
  		
  		system("pause"); //pausa do programa
  		
  	}
