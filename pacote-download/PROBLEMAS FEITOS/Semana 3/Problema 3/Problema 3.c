/*Problema 3: mostrar a m�dia de tr�s n�meros informados com uma casa ap�s a v�rgula e informar aprovado se a m�dia for maior que 6.
Envie o arquivo de programa em .C e o arquivo de imagem com o fluxograma. O algoritmo e o teste de mesa podem ir como coment�rios 
no pr�prio arquivo de programa .C, como realizado no LVP anterior.

 Algoritmo Informal: 

 1°) Receber 3 números reais (n1, n2, n3);
 2°) Calcular a média (M) dos núemros recebidos com uma casa após a vírgula e mostrá-la na tela;
 3°) Se a média (M) for maior que 6 mostrar na tela "Aprovado".
 
 
 Teste de Mesa:
 
     n1    |    n2    |     n3    |    M    |   Aprovado?  |
  <- 7.5   |          |           |         |
           | <- 5.3   |           |         |
           |          |  <- 8.5   |         |
           |          |           |   7.1*  |
           |          |           |         |   Aprovado*  |


 C�digo em C:*/

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
