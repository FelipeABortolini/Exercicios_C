/*Crie um programa que solicite que o usu�rio informe um n�mero. 
A seguir o programa deve informar se esse n�mero � par ou �mpar. 
Dica: o operador �%� retorna o resto da divis�o. Por exemplo, 5%2=1 e 8%3=2

 Programa que apresenta se o n�mero informado � par ou �mpar.

 Autor: Felipe Augusto Bortolini        Data: 22/09/2020


 Teste de Mesa:

____a____|___Sa�da___|   
 <- 8    |           |                                          
         |   par*    |                                          
 <- 5    |           |                                          
         |  impar*   |                                          


 C�digo em C:*/

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

