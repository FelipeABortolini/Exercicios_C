/*Faça um programa em C para apresentar os números no intervalo de 4 (inclusive) 
a 42 (inclusive). Utilize a instrução "while".
Para que a avaliação automatizada funcione, siga as instruções abaixo:
 a saída deve ter o seguinte formato
### inicio da saída - ignore esta linha ###
4,5,6,...,42
### fim da saída - ignore esta linha ###

 Programa que apresenta os nÃºmeros no intervalo de 4 a 42:

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


 Código em C:*/
 
#include<stdio.h>
int main(){
	int i = 4;
	while (i<=42){
		printf("%d\n", i);
		i=i+1;
	}
}
