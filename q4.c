	#include <stdio.h> // abertura de biblioteca 
 	#include <stdlib.h> // abertura de biblioteca
 
 
  int main (){ // chamando a fun��o principal
  	
  	float n1 ,n2 ,n3 , ma; // decara��o das vari�veis floats
  	
  	printf("Informe um primeiro numero: "); // solicita ao usu�rio um primeiro n�mero
  		scanf("%f",&n1); // o n�mero solicitado ap�s recebido do usu�rio � gravado na vari�vel "n1"
  		
  		printf("Informe um segundo numero: "); // solicita ao usu�rio um segundo n�mero
  		scanf("%f",&n2); // o n�mero solicitado ap�s recebido do usu�rio � gravado na vari�vel "n2"
  		
  		printf("Informe um terceiro numero: "); // solicita ao usu�rio um terceiro n�mero
  		scanf("%f",&n3); // o n�mero solicitado ap�s recebido do usu�rio � gravado na vari�vel "n3"
  		
  		ma=(n1+n2+n3)/2; // a soma dos tr�s n�meros solicitados ao usu�rio, e apos dividido por 2, � gravado na vari�vel "ma"
  		
  		printf("a media aritmetica e: %.2f", ma); // o computador imprime ao usu�rio o valor da vari�vel "ma"
  		
  		system("pause"); //pausa do programa
  		
  	}
