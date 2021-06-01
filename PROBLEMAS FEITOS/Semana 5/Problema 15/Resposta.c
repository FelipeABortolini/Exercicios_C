/*Fa�a um programa em C para apresentar os n�meros no intervalo de 0 (inclusive) 
a 30 (inclusive). Utilize a instru��o "for".
Para que a avalia��o automatizada funcione, siga as instru��es abaixo:
 a sa�da deve ter o seguinte formato
### inicio da sa�da - ignore esta linha ###
0,1,2,3,...,30
### fim da sa�da - ignore esta linha ###

 Programa que apresenta os n�meros no intervalo de 0 a 30:

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


 C�digo em C:*/
 
#include<stdio.h>
int main(){
	int i;
	for(i=0; i<=30; i=i+1){
		printf("%d\n", i);
	}
}
