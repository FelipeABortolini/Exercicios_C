/*Faça um programa em C para apresentar os números no intervalo de 0 (inclusive) 
a 30 (inclusive). Utilize a instrução "for".
Para que a avaliação automatizada funcione, siga as instruções abaixo:
 a saída deve ter o seguinte formato
### inicio da saída - ignore esta linha ###
0,1,2,3,...,30
### fim da saída - ignore esta linha ###

 Programa que apresenta os números no intervalo de 0 a 30:

 Autor: Felipe Augusto Bortolini        Data: 28/09/2020


 Teste de Mesa:
______i______|
      0*     |
      1*     |
      2*     |
      3*     |
      4*     |
      .      |
      .      |
      .      |
      26*    |
      27*    |
      28*    |
      29*    |
      30*    |


 Código em C:*/
 
#include<stdio.h>
int main(){
	int i;
	for(i=0; i<=30; i=i+1){
		printf("%d\n", i);
	}
}
