/*Criar um programa que imprima os n�meros pares entre 0 (inclusive) a 1.000 (inclusive) em ordem crescente.
Para que a avalia��o automatizada funcione, siga as instru��es abaixo:
 a sa�da deve ter o seguinte formato
### inicio da sa�da - ignore esta linha ###
0,2,4,6,...,1000
### fim da sa�da - ignore esta linha ###

 Programa que imprime os n�meros pares entre 0 (inclusive) a 1.000 (inclusive) em ordem crescente:

 Autor: Felipe Augusto Bortolini        Data: 28/09/2020


 Teste de Mesa:
______i______|
      0*     |
      2*     |
      4*     |
      6*     |
      8*     |
      .      |
      .      |
      .      |
      992*   |
      994*   |
      996*   |
      998*   |
      1000*  |

 C�digo em C:*/
 
#include<stdio.h>
int main(){
	int i;
	for(i=0; i<=1000; i=i+2){
		printf("%d\n", i);
	}
}
