/*Escreva um programa em linguagem C que possua um procedimento que receba uma string no formato DD/MM/AAAA e imprima na sa�da o dia, nome do m�s e o ano. Por exemplo:

Entrada: 12/10/2020

Sa�da: 12 de outubro de 2020.

O programa deve permitir que usu�rio digite a data.

############## Entrada #####################

printf("Digite uma data no formato DD/MM/AAAA.");

##########################################

############## Sa�da ######################

<dia> de <m�s por extenso> de <ano>. 

##########################################*/

#include<stdio.h>
#include<string.h>
#define TAM_STRING 10

void data(char d[TAM_STRING]){
	char dia[2] = {d[0], d[1]}, mes[2] = {d[3], d[4]}, ano[4] = {d[6], d[7], d[8], d[9]};
	
	if(mes[0] == '0' && mes[1] == '1'){
		printf("%c%c de janeiro de %s.", dia[0], dia[1], ano);
	} else if (mes[0] == '0' && mes[1] == '2'){
		printf("%c%c de fevereiro de %s.", dia[0], dia[1], ano);
	} else if (mes[1] == '3'){
		printf("%c%c de mar�o de %s.", dia[0], dia[1], ano);
	} else if (mes[1] == '4'){
		printf("%c%c de abril de %s.", dia[0], dia[1], ano);
	} else if (mes[1] == '5'){
		printf("%c%c de maio de %s.", dia[0], dia[1], ano);
	} else if (mes[1] == '6'){
		printf("%c%c de junho de %s.", dia[0], dia[1], ano);
	} else if (mes[1] == '7'){
		printf("%c%c de julho de %s.", dia[0], dia[1], ano);
	} else if (mes[1] == '8'){
		printf("%c%c de agosto de %s.", dia[0], dia[1], ano);
	} else if (mes[1] == '9'){
		printf("%c%c de setembro de %s.", dia[0], dia[1], ano);
	} else if (mes[0] == '1' && mes[1] == '0'){
		printf("%c%c de outubro de %s.", dia[0], dia[1], ano);
	} else if (mes[0] == '1' && mes[1] == '1'){
		printf("%c%c de novembro de %s.", dia[0], dia[1], ano);
	} else if (mes[0] == '1' && mes[1] == '2'){
		printf("%c%c de dezembro de %s.", dia[0], dia[1], ano);
	}
}

int main(){
	char string[TAM_STRING];
	printf("Digite uma data no formato DD/MM/AAAA.\n");
	do{
		scanf("%s", string);
	    if(strlen(string)>TAM_STRING){
	    	printf("Formato inv�lido.\n");
	    	printf("Digite uma data no formato DD/MM/AAAA.\n");
	    }
	} while(strlen(string)>TAM_STRING);
	data(string);
}
