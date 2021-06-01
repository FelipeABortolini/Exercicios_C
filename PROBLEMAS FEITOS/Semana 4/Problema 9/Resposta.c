/*Crie um programa que solicite que o usuário informe um número. 
A seguir o programa deve informar se esse número é par ou ímpar. 
Dica: o operador “%” retorna o resto da divisão. Por exemplo, 5%2=1 e 8%3=2

 Programa que apresenta se o número informado é par ou ímpar.

 Autor: Felipe Augusto Bortolini        Data: 22/09/2020


 Teste de Mesa:

____a____|___Saída___|   
 <- 8    |           |                                          
         |   par*    |                                          
 <- 5    |           |                                          
         |  impar*   |                                          


 Código em C:*/

#include<stdio.h>
int main(){
	int a, n;
	printf("Informe um numero: ");
	scanf("%d", &a);
	n = a%2;
	if (n%2 == 0){
		printf("par");
	} else {
		printf("impar");
	}
}

