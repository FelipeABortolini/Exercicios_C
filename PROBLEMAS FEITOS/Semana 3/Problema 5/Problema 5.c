/*Problema 4: Receber n�meros e escrever na tela at� que se digite o n�mero 4890.
Envie o arquivo de programa em .C e o arquivo de imagem com o fluxograma. O algoritmo 
e o teste de mesa podem ir como coment�rios no pr�prio arquivo de programa .C, como realizado no LVP anterior.

 Algoritmo Informal:
 
 1�) Informar n = 0 e M = 0;
 2�) Enquanto "n" for menor que 5, executar as instru��es 3, 4 e 5, ap�s a 5� instru��o, fazer o teste da condi��o novamente;
 3�) Receber um n�mero real "a";
 4�) Somar uma unidade a vari�vel "n";
 5�) Calcular a m�dia (M) dos n�meros digitados at� o momento;
 6�) Mostrar "M".

 Teste de Mesa: 

      a    |      M    |
   <- 5    |           |
   <- 10   |           |
   <- 15   |           |
   <- 3    |           |
   <- 4.5  |           |
           |    7.5*   |


 C�digo em C:*/

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
