	#include <stdio.h> // abertura de biblioteca
 	#include <stdlib.h> // abertura de biblioteca
 
 
  int main (){ // chamando a função principal
  	
  	float diametro, x, pi=3.141592, total; // declaração e atribuição de valor á variável "pi" e declaração das variavéis "diametro" "x" e "total"
  	
  	printf("Informe o diametro: "); // solicita ao usuário o diametro do circulo 
  		scanf("%f",&diametro); // imprime na variável diametro
  		
  		x=diametro/2; // faz a divisão do diametro informado pelo usuário por 2 assim atribuindo o valor do raio à variável "x"
  		
  		total= (pow(x, 2) * pi); // o computacionar soluciona a equação para encontrar a area do circulo e após grava o resultado na variável "total"
  		
  		printf("O valor da area e: %.2f\n",total); // é impresso na tela do usuário o valor da área do circulo
  		
  		system("pause"); // pausa do programa
  	
  }
