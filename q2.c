	#include <stdio.h> // abertura de biblioteca
 	#include <stdlib.h> // abertura de biblioteca
 
 
  int main (){ // chamando a fun��o principal
  	
  	float diametro, x, pi=3.141592, total; // declara��o e atribui��o de valor � vari�vel "pi" e declara��o das variav�is "diametro" "x" e "total"
  	
  	printf("Informe o diametro: "); // solicita ao usu�rio o diametro do circulo 
  		scanf("%f",&diametro); // imprime na vari�vel diametro
  		
  		x=diametro/2; // faz a divis�o do diametro informado pelo usu�rio por 2 assim atribuindo o valor do raio � vari�vel "x"
  		
  		total= (pow(x, 2) * pi); // o computacionar soluciona a equa��o para encontrar a area do circulo e ap�s grava o resultado na vari�vel "total"
  		
  		printf("O valor da area e: %.2f\n",total); // � impresso na tela do usu�rio o valor da �rea do circulo
  		
  		system("pause"); // pausa do programa
  	
  }
