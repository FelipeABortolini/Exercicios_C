/*Fa�a um programa que pe�a dois n�mero inteiros ao usu�rio e mostre se o segundo n�mero � maior, menor ou igual ao primeiro n�mero.

 Programa que apresenta se o segundo numero informado � maior, menor ou igual 
 ao primeiro n�mero informado.

 Autor: Felipe Augusto Bortolini        Data: 22/09/2020


 Teste de Mesa:

____n1____|____n2____|__________________Sa�da___________________|       
 <- 8     |          |                                          |
          |  <- 5    |                                          |
          |          |  Segundo n�mero � menor que o primeiro.* |
 <- 4     |          |                                          |
          |  <- 9    |                                          |
          |          |  Segundo n�emro � maior que o primeiro.* |
 <- 6     |          |                                          |
          |  <- 6    |                                          |
          |          |   Segundo n�mero � igual ao primeiro.*   | 


 C�digo em C:*/

#include<stdio.h>

int main(){
	
	int n1, n2;
	scanf("%d %d", &n1, &n2);
	if (n2!=n1){
		if (n2>n1){
			printf("Segundo numero � maior que o primeiro.");
		} else {
			printf("Segundo numero � menor que o primeiro.");
		}	
	} else {
		printf("Segundo numero � igual ao primeiro.");
	}			
}

