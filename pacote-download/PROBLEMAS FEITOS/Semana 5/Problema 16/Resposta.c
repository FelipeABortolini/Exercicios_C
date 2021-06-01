/*Fa�a um programa em C para apresentar os n�meros de 30 (inclusive) at� 0 (inclusive) em ordem decrescente.
Para que a avalia��o automatizada funcione, siga as instru��es abaixo:
 a sa�da deve ter o seguinte formato
### inicio da sa�da - ignore esta linha ###
30,29,28,...,0
### fim da sa�da - ignore esta linha ###

 Programa que apresenta os n�meros no intervalo de 30 a 0:

 Autor: Felipe Augusto Bortolini        Data: 28/09/2020


 Teste de Mesa:
______i______|
      30*    |
      29*    |
      28*    |
      27*    |
      26*    |
      .      |
      .      |
      .      |
      4*     |
      3*     |
      2*     |
      1*     |
      0*     |


 C�digo em C:*/

#include<stdio.h>
int main(){
	int i;
	for(i=30; i>=0; i=i-1){
		printf("%d\n", i);
	}
}
