/*Faça um programa em C para apresentar os números de 30 (inclusive) até 0 (inclusive) em ordem decrescente.
Para que a avaliação automatizada funcione, siga as instruções abaixo:
 a saída deve ter o seguinte formato
### inicio da saída - ignore esta linha ###
30,29,28,...,0
### fim da saída - ignore esta linha ###

 Programa que apresenta os números no intervalo de 30 a 0:

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


 Código em C:*/

#include<stdio.h>
int main(){
	int i;
	for(i=30; i>=0; i=i-1){
		printf("%d\n", i);
	}
}
