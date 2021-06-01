/*Criar um programa que leia um número inteiro n maior que 1 e imprima 'quadrados' de 
tamanho n × n utilizando o caractere "*". Por exemplo, se o número informado for 3, o resultado impresso será:

* * *
* * *
* * *

*/

#include<stdio.h>
int main(){
	int n, linhas, colunas;
	printf("Informe um número para o tamanho do quadrado:\n");
	do{
		scanf("%d", &n);
	} while (n <= 1);
	for(linhas = 1; linhas <= n; linhas += 1){
	    for (colunas = 1; colunas <= n; colunas += 1){
	    	if (colunas == n){
	    		printf("*");
			} else {
			    printf("* ");	
			}
	    }
	    printf("\n");
    }
}
