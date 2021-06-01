/*Escreva um programa em Linguagem C que, dado um valor de entrada, crie um arquivo de saída, chamado saida.txt, 
possuindo uma escada de asteriscos com o número de degraus conforme o valor de entrada. Por exemplo, para o valor 
de entrada igual a 4, a saída deve ser:

*
**
***
****

Ou seja, um asterisco na primeira linha, dois na segunda, e assim sucessivamente, até o valor informado. 

Para que a correção automática funcione, é necessário que o código fontes do seu programa se chame main.c. Qualquer 
outro nome será rejeitado. Fique atento para o nome do arquivo de saída, que deve ser saida.txt.*/

#include<stdio.h>

int main(){
	FILE *arq;
	int x, i, j;
	if((arq = fopen("saida.txt", "w")) == NULL){
		printf("Erro ao abrir o arquivo!\n");
		return 0;
	}
	scanf("%d", &x);
	for(i=1; i<x+1; i++){
		for(j=1; j<i+1; j++){
			fprintf(arq, "*");
		}
		fprintf(arq, "\n");
	}
	fclose(arq);
	return 0;
}
