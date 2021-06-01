/*Fa�a um programa em C para apresentar os n�meros no intervalo de 4 (inclusive) 
a 42 (inclusive). Utilize a instru��o "while".
Para que a avalia��o automatizada funcione, siga as instru��es abaixo:
 a sa�da deve ter o seguinte formato
### inicio da sa�da - ignore esta linha ###
4,5,6,...,42
### fim da sa�da - ignore esta linha ###

 Programa que apresenta os números no intervalo de 4 a 42:

 Autor: Felipe Augusto Bortolini        Data: 28/09/2020


 Teste de Mesa:
______i______|
      4*     |
      5*     |
      6*     |
      7*     |
      8*     |
      .      |
      .      |
      .      |
      38*    |
      39*    |
      40*    |
      41*    |
      42*    |


 C�digo em C:*/
 
#include<stdio.h>
int main(){
	int i = 4;
	while (i<=42){
		printf("%d\n", i);
		i=i+1;
	}
}
