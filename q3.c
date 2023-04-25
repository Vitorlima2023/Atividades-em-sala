#include <stdio.h> // abertura de biblioteca
 #include <stdlib.h> // abertura de biblioteca
 
 
  int main (){ // chamando a função principal
  	
  	int n1; // declaração da variável "n1"
  	
  	printf("Informe o numero: "); // solicita ao usuário um numero
  		scanf("%d",&n1); // o número recebido do usuário é gravado na variável "n1"
  		
  		if(n1 %2 == 0){ // equação para identificar se o número é par ou impar, utilizando da divisão do número informado pelo usuário  por 2, e identificando sua natureza pela sobra do resultado
  			
  			printf("o numero e par"); // se a sobra do divisão for 0, o programa imprime ao usuário que esse número é par
  			
  		}
  			else
  			printf("o numero e impar"); // se a sobra for qualquer número diferente de 0, o programa imprime ao usuário que esse número é impar
  		
		  
		  system("pause"); // pausa do programa  
	}
  		
  	
