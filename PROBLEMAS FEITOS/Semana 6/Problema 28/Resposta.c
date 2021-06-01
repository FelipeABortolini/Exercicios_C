/*Criar um programa que leia um número inteiro n maior que 1 e imprima uma “arvore de natal" com n linhas 
utilizando o caractere “*” Por exemplo, se o número lido for 4, o resultado impresso será:

      * 
    * * *
  * * * * *
* * * * * * *

*/

#include<stdio.h>
int main(){
	int num_recebido, colunas, linhas, contagem_espacos, numEspacos, aux1 = 0, aux2 = 0;
	printf("Informe um número para o tamanho da árvore:\n");
	do{
		scanf("%d", &num_recebido);
	} while (num_recebido <= 1);
	for (linhas = 1; linhas <= num_recebido; linhas += 1){
		for(aux2=1; aux2<=num_recebido; aux2+=1){
			if(linhas == aux2){
				aux1 = aux2 + linhas;
			}
	    }
		numEspacos = ((num_recebido*2)-1)-aux1;
	    for(contagem_espacos=0; contagem_espacos<=numEspacos; contagem_espacos += 1){
	    	printf(" ");
		}
	    for(colunas = 1; colunas <= (linhas*2)-1; colunas += 1){
	    	printf("* ");
		}
	    printf("\n");
	}
}

