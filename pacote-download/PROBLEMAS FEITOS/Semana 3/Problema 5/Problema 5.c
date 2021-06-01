/*Problema 4: Receber números e escrever na tela até que se digite o número 4890.
Envie o arquivo de programa em .C e o arquivo de imagem com o fluxograma. O algoritmo 
e o teste de mesa podem ir como comentários no próprio arquivo de programa .C, como realizado no LVP anterior.

 Algoritmo Informal:
 
 1°) Informar n = 0 e M = 0;
 2°) Enquanto "n" for menor que 5, executar as instruções 3, 4 e 5, após a 5ª instrução, fazer o teste da condição novamente;
 3°) Receber um número real "a";
 4°) Somar uma unidade a variável "n";
 5°) Calcular a média (M) dos números digitados até o momento;
 6°) Mostrar "M".

 Teste de Mesa: 

      a    |      M    |
   <- 5    |           |
   <- 10   |           |
   <- 15   |           |
   <- 3    |           |
   <- 4.5  |           |
           |    7.5*   |


 Código em C:*/

#include <stdio.h>
int main(){
	float a, n, M;
	n = M = 0;
	while (n < 5){
		scanf("%f", &a);
		n = n + 1;
		M = (M * (n-1) + a) / n;
	}
	printf("%g\n", M);
}
