#include <stdio.h> // abertura de biblioteca
 #include <stdlib.h> // abertura de biblioteca
 
 
  int main (){ // chamando a fun��o principal
  	
  	int n1; // declara��o da vari�vel "n1"
  	
  	printf("Informe o numero: "); // solicita ao usu�rio um numero
  		scanf("%d",&n1); // o n�mero recebido do usu�rio � gravado na vari�vel "n1"
  		
  		if(n1 %2 == 0){ // equa��o para identificar se o n�mero � par ou impar, utilizando da divis�o do n�mero informado pelo usu�rio  por 2, e identificando sua natureza pela sobra do resultado
  			
  			printf("o numero e par"); // se a sobra do divis�o for 0, o programa imprime ao usu�rio que esse n�mero � par
  			
  		}
  			else
  			printf("o numero e impar"); // se a sobra for qualquer n�mero diferente de 0, o programa imprime ao usu�rio que esse n�mero � impar
  		
		  
		  system("pause"); // pausa do programa  
	}
  		
  	
