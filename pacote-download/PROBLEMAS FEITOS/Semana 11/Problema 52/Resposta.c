/*Escreva um programa em linguagem C que possua um procedimento que receba uma string no formato DD/MM/AAAA e imprima na saída o dia, nome do mês e o ano. Por exemplo:

Entrada: 12/10/2020

Saída: 12 de outubro de 2020.

O programa deve permitir que usuário digite a data.

############## Entrada #####################

printf("Digite uma data no formato DD/MM/AAAA.");

##########################################

############## Saída ######################

<dia> de <mês por extenso> de <ano>. 

##########################################*/

#include<stdio.h>
#include<string.h>
#define TAM_STRING 11

void data(char d[TAM_STRING]){
	char dia[3] = {d[0], d[1], '\0'}, ano[5] = {d[6], d[7], d[8], d[9], '\0'};
	char meses[12][10] = {"janeiro","fevereiro","março","abril","maio","junho","julho","agosto","setembro","outubro","novembro","dezembro"};
	char a = d[4];
	int b = a-48;    //Código do 0 na tabela ASCII é 48.
	if(d[3] == '0'){
		printf("%s de %s de %s.\n", dia, meses[b-1], ano);
	} else {
		printf("%s de %s de %s.\n", dia, meses[b+9], ano);
	}
}

int main(){
	char string[TAM_STRING];
	printf("Digite uma data no formato DD/MM/AAAA.\n");
	do{
		scanf("%s", string);
	    if(strlen(string)>TAM_STRING){
	    	printf("Formato inválido.\n");
	    	printf("Digite uma data no formato DD/MM/AAAA.\n");
	    }
	} while(strlen(string)>TAM_STRING);
	data(string);
}
