 #include <stdio.h>  // abertura de biblioteca
 #include <stdlib.h> // abertura de biblioteca
 
 
  int main (){ // chamando a função principal
  	
  	int a,b,soma; // declaração das variaveis inteiras   
  	
  		printf("Informe um primeiro numero: "); // imprime na tela solicitando um número ao usuário
  		scanf("%d",&a); // gravação do número solicitado ao usuário na variável "a"
  	
  		printf("Informe um segundo numero: "); //imprime na tela solicitando um segundo número ao usuário
  		scanf("%d",&b); // gravação do segundo número solicitado ao usuário na variável "b"
  		
  		soma=a+b; // atribuindo valor á variavel "soma" com a adição das variáveis "a" + "b"
  		
  		printf("A soma dos dois numeros e: %d\n",soma); // é imprimido na tela o resultado da soma das variáveis
  	
  	system("pause"); //pausa do programa
  	
  }
