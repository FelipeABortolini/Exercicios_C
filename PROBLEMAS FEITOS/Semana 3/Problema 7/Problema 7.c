/*Calcular a média de números que foram informados até se digitar -1. A cada número informado mostrar a quantidade de números já informados.
Envie o arquivo de programa em .C e o arquivo de imagem com o fluxograma. O algoritmo e o teste de mesa podem ir como comentários no próprio 
arquivo de programa .C, como realizado no LVP anterior.

 Algoritmo Informal: 

 1°) Enquanto o número recebido "a" for diferente de -1, executar as instruções 2, 3, 4, 5, 6 e 7, após a sétima instrução fazer o teste da condição novamente;
 2°) Receber um  núemro real "a";
 3°) Se o número recebido "a" for -1, encerrar este bloco;
 4°) Senão, acrescentar uma unidade na quantidade de números informados "n";
 5°) Calcular a média "M" dos núemros informados até o momento;
 6°) Mostrar a média "M" na tela;
 7°) Mostrar a quantidade de números informados na tela.


 Teste de Mesa: 

 _____a_____|______M_____|_____n_____|  
   <- 7     |            |           |
            |      7*    |           |
            |            |     1*    |
            |            |           |
   <- 21    |            |           |
            |     14*    |           |
            |            |     2*    |
            |            |           |
   <- 20    |            |           |
            |     16*    |           |
            |            |     3*    |
            |            |           |
  <- -1     |            |           |


 Código em C:*/

#include <stdio.h>
int main(){
	float a, M;
	int n;
	a = M = n = 0;
	while(a != -1){
		scanf("%f", &a);
		if (a == -1)
			break;
		n = n+1;
		M = (M*(n-1)+a)/n;
		printf("%g\n", M);
		printf("%d\n\n", n);
	}
}
