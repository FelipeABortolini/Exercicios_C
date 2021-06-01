/*Programa que apresenta os números no intervalo de 5 a 100:

 Autor: Felipe Augusto Bortolini        Data: 28/09/2020


 Teste de Mesa:
_______i_______|
       5*      |
       6*      |
       7*      |
       8*      |
       9*      |
       10*     |
       .       |
       .       |
       .       |
       95*     |
       96*     |
       97*     |
       98*     |
       99*     |
       100*    |


 Código em C:*/

#include<stdio.h>
int main(){
	int i = 5;
	do {
		printf("%d\n", i);
		i = i+1;
	} while (i<=100);
}
