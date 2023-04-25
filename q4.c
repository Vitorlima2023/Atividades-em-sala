	#include <stdio.h> // abertura de biblioteca 
 	#include <stdlib.h> // abertura de biblioteca
 
 
  int main (){ // chamando a função principal
  	
  	float n1 ,n2 ,n3 , ma; // decaração das variáveis floats
  	
  	printf("Informe um primeiro numero: "); // solicita ao usuário um primeiro número
  		scanf("%f",&n1); // o número solicitado após recebido do usuário é gravado na variável "n1"
  		
  		printf("Informe um segundo numero: "); // solicita ao usuário um segundo número
  		scanf("%f",&n2); // o número solicitado após recebido do usuário é gravado na variável "n2"
  		
  		printf("Informe um terceiro numero: "); // solicita ao usuário um terceiro número
  		scanf("%f",&n3); // o número solicitado após recebido do usuário é gravado na variável "n3"
  		
  		ma=(n1+n2+n3)/2; // a soma dos três números solicitados ao usuário, e apos dividido por 2, é gravado na variável "ma"
  		
  		printf("a media aritmetica e: %.2f", ma); // o computador imprime ao usuário o valor da variável "ma"
  		
  		system("pause"); //pausa do programa
  		
  	}
