/*Escreva um programa me linguagem C que tenha uma função que receba uma string por parâmetro e 
devolva o número de caracteres. Não use strlen() e use define para determinar o tamanho da string.

############ Entradas #############

printf("Digite uma frase.\n")

##################################

############ Saída ################

printf("A quantidade de caracteres é: %i", ret");

##################################*/

#include<stdio.h>

#define TAM_STRING 101

int n_caracteres(char s[TAM_STRING]){
	int total = 0;
	while(s[total] != '\0'){
		total++;
	}
	return total;
}

int main(){
	char string[TAM_STRING];
	int num;
	printf("Digite uma frase.\n");
	gets(string);
	num = n_caracteres(string);
	printf("A quantidade de caracteres é: %i", num);
}
