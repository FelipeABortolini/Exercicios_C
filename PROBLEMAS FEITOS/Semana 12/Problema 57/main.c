/*Escreva um programa em Linguagem C que, dado um valor de entrada, crie um arquivo de sa�da, chamado saida.txt, 
possuindo uma escada de asteriscos com o n�mero de degraus conforme o valor de entrada. Por exemplo, para o valor 
de entrada igual a 4, a sa�da deve ser:

*
**
***
****

Ou seja, um asterisco na primeira linha, dois na segunda, e assim sucessivamente, at� o valor informado. 

Para que a corre��o autom�tica funcione, � necess�rio que o c�digo fontes do seu programa se chame main.c. Qualquer 
outro nome ser� rejeitado. Fique atento para o nome do arquivo de sa�da, que deve ser saida.txt.*/

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
