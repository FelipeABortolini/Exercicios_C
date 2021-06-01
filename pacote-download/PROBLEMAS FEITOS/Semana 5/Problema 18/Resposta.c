/* Programa que imprime os números ímpares entre 1 (inclusive) a 1.000 (inclusive) em ordem decrescente:

 Autor: Felipe Augusto Bortolini        Data: 29/09/2020


 Teste de Mesa:
_________Saída_________|
  999,997,995,...,1 *  |


C�digo em C:*/
 
#include<stdio.h>
int main(){
	int i;
	for (i=999; i>=0; i = i-2){
		printf("%d", i);
		if (i!=1){
			printf(",");
		}
	}
}
