/*Problema 3: mostrar a média de três números informados com uma casa após a vírgula e informar aprovado se a média for maior que 6.
Envie o arquivo de programa em .C e o arquivo de imagem com o fluxograma. O algoritmo e o teste de mesa podem ir como comentários 
no próprio arquivo de programa .C, como realizado no LVP anterior.

 Algoritmo Informal: 

 1Â°) Receber 3 nÃºmeros reais (n1, n2, n3);
 2Â°) Calcular a mÃ©dia (M) dos nÃºemros recebidos com uma casa apÃ³s a vÃ­rgula e mostrÃ¡-la na tela;
 3Â°) Se a mÃ©dia (M) for maior que 6 mostrar na tela "Aprovado".
 
 
 Teste de Mesa:
 
     n1    |    n2    |     n3    |    M    |   Aprovado?  |
  <- 7.5   |          |           |         |
           | <- 5.3   |           |         |
           |          |  <- 8.5   |         |
           |          |           |   7.1*  |
           |          |           |         |   Aprovado*  |


 Código em C:*/

#include <stdio.h>
int main(){
	float n1, n2, n3, M;
	scanf("%f %f %f", &n1, &n2, &n3);
	M = (n1+n2+n3)/3;
	printf("%.1f\n", M);
	if (M > 6){
		printf("Aprovado");
	}
}
