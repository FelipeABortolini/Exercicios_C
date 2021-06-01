/*Faça um programa que peça dois número inteiros ao usuário e mostre se o segundo número é maior, menor ou igual ao primeiro número.

 Programa que apresenta se o segundo numero informado é maior, menor ou igual 
 ao primeiro número informado.

 Autor: Felipe Augusto Bortolini        Data: 22/09/2020


 Teste de Mesa:

____n1____|____n2____|__________________Saída___________________|       
 <- 8     |          |                                          |
          |  <- 5    |                                          |
          |          |  Segundo número é menor que o primeiro.* |
 <- 4     |          |                                          |
          |  <- 9    |                                          |
          |          |  Segundo núemro é maior que o primeiro.* |
 <- 6     |          |                                          |
          |  <- 6    |                                          |
          |          |   Segundo número é igual ao primeiro.*   | 


 Código em C:*/

#include<stdio.h>

int main(){
	
	int n1, n2;
	scanf("%d %d", &n1, &n2);
	if (n2!=n1){
		if (n2>n1){
			printf("Segundo numero é maior que o primeiro.");
		} else {
			printf("Segundo numero é menor que o primeiro.");
		}	
	} else {
		printf("Segundo numero é igual ao primeiro.");
	}			
}

