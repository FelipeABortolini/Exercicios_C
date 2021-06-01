/*Calcular a m�dia de n�meros que foram informados at� se digitar -1. A cada n�mero informado mostrar a quantidade de n�meros j� informados.
Envie o arquivo de programa em .C e o arquivo de imagem com o fluxograma. O algoritmo e o teste de mesa podem ir como coment�rios no pr�prio 
arquivo de programa .C, como realizado no LVP anterior.

 Algoritmo Informal: 

 1�) Enquanto o n�mero recebido "a" for diferente de -1, executar as instru��es 2, 3, 4, 5, 6 e 7, ap�s a s�tima instru��o fazer o teste da condi��o novamente;
 2�) Receber um  n�emro real "a";
 3�) Se o n�mero recebido "a" for -1, encerrar este bloco;
 4�) Sen�o, acrescentar uma unidade na quantidade de n�meros informados "n";
 5�) Calcular a m�dia "M" dos n�emros informados at� o momento;
 6�) Mostrar a m�dia "M" na tela;
 7�) Mostrar a quantidade de n�meros informados na tela.


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


 C�digo em C:*/

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
