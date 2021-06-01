/* Programa que imprime uma sequências de números pré-definidos:

 Autor: Felipe Augusto Bortolini        Data: 29/09/2020


 Teste de Mesa:
_____________Saída_____________|
  (1, 1 2 3 4 5 6 7 8 9 10), * |
  (2, 1 2 3 4 5 6 7 8 9 10), * |
  (3, 1 2 3 4 5 6 7 8 9 10), * |
  (4, 1 2 3 4 5 6 7 8 9 10), * |
            ...                |
  (10, 1 2 3 4 5 6 7 8 9 10) * |


C�digo em C:*/

#include<stdio.h>

int main(){
	
	int i, a;
	for (i=1; i<=10; i=i+1){
		printf("(%d, ", i);
		for (a=1; a<=10; a=a+1){
			if(a!=10){
			printf("%d ", a);
			} else {
				printf("%d", a);
			}
		} 
		if(i!=10){
		printf("),\n");
	    } else {
	    	printf(")");
		}
	}
}
