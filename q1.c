 #include <stdio.h>  // abertura de biblioteca
 #include <stdlib.h> // abertura de biblioteca
 
 
  int main (){ // chamando a fun��o principal
  	
  	int a,b,soma; // declara��o das variaveis inteiras   
  	
  		printf("Informe um primeiro numero: "); // imprime na tela solicitando um n�mero ao usu�rio
  		scanf("%d",&a); // grava��o do n�mero solicitado ao usu�rio na vari�vel "a"
  	
  		printf("Informe um segundo numero: "); //imprime na tela solicitando um segundo n�mero ao usu�rio
  		scanf("%d",&b); // grava��o do segundo n�mero solicitado ao usu�rio na vari�vel "b"
  		
  		soma=a+b; // atribuindo valor � variavel "soma" com a adi��o das vari�veis "a" + "b"
  		
  		printf("A soma dos dois numeros e: %d\n",soma); // � imprimido na tela o resultado da soma das vari�veis
  	
  	system("pause"); //pausa do programa
  	
  }
