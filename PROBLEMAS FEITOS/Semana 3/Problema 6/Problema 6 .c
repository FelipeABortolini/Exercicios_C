/*Problema 6: Calcular a média de 50 números informados e mostrar a média.
Envie o arquivo de programa em .C e o arquivo de imagem com o fluxograma. 
O algoritmo e o teste de mesa podem ir como comentários no próprio arquivo de programa .C, como realizado no LVP anterior.

 Algoritmo Informal: 

 1°) Enquanto a quantidade de númeors informados "n" for menor que 50, execute as instruções 2, 3 e 4, após a instrução 4, teste essa condição novamente;
 2°) Receber um núemro real "a";
 3°) Somar uma unidade com a quantidade de núemros informados "n";
 4°) Calcular a média (M) com os núemros informados até o momento;
 5°) Mostrar a média (M).


 Teste de Mesa: 

     a    |     M    |
  <- 1    |          |
  <- 2    |          |
  <- 3    |          |
  <- 4    |          |
  <- 5    |          |
  <- 6    |          |
  <- 7    |          |
  <- 8    |          |
  <- 9    |          |
  <- 10   |          |
  <- 11   |          |
  <- 12   |          |
  <- 13   |          |
  <- 14   |          |
  <- 15   |          |
  <- 16   |          |
  <- 17   |          |
  <- 18   |          |
  <- 19   |          |
  <- 20   |          |
  <- 21   |          |
  <- 22   |          |
  <- 23   |          |
  <- 24   |          |
  <- 25   |          |
  <- 26   |          |
  <- 27   |          |
  <- 28   |          |
  <- 29   |          |
  <- 30   |          |
  <- 31   |          |
  <- 32   |          |
  <- 33   |          |
  <- 34   |          |
  <- 35   |          |
  <- 36   |          |
  <- 37   |          |
  <- 38   |          |
  <- 39   |          |
  <- 40   |          |
  <- 41   |          |
  <- 42   |          |
  <- 43   |          |
  <- 44   |          |
  <- 45   |          |
  <- 46   |          |
  <- 47   |          |
  <- 48   |          |
  <- 49   |          |
  <- 50   |          |
          |   25.5*  |


 Código em C:*/

#include<stdio.h>
int main(){
	float a, n, M;
	n = M = 0;
	while (n < 50){
		scanf("%f", &a);
		n = n+1;
		M = (M*(n-1)+a)/n;	
	}
	printf("%g\n", M);
}
