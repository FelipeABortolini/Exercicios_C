/*Escreva um programa me linguagem C que tenha uma fun��o que receba uma string por par�metro e 
devolva o n�mero de caracteres. N�o use strlen() e use define para determinar o tamanho da string.

############ Entradas #############

printf("Digite uma frase.\n")

##################################

############ Sa�da ################

printf("A quantidade de caracteres �: %i", ret");

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
	printf("A quantidade de caracteres �: %i", num);
}
