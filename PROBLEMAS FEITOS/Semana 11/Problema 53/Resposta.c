/*Escreva um programa em linguagem C que possua uma fun��o chamada my_strcat(). Esta fun��o deve 
ter um comportamento semelhante a fun��o strcat() da linguagem C, ou seja, deve realizar a concatena��o 
de duas strings. Por exemplo:

char str1[32] = "oi";

char str2[32] = "mundo";

strcat(str1, str2)

Ap�s a chamada de strcat() str1 ter� como resultado "oimundo". Assim, o resultado da concatena��o deve acontecer na primeria string. 

############ Entradas ##################

printf("Digite duas strings, uma em cada linha.);

#######################################

############ Sa�da ####################

<exiba a string concatenada>

######################################*/

#include<stdio.h>

#define TAM_STRING 101

void my_strcat(char str1[TAM_STRING], char str2[TAM_STRING]){
	int i, j, cont = 0;
	for(i=0; i<TAM_STRING; i++){
		if(str1[i] == '\0' && cont == 0){
			cont++;
			for(j=0; j<TAM_STRING; j++){
				str1[i] = str2[j];
				i++;
			}
		}
	}
}

int main(){
	char string1[TAM_STRING], string2[TAM_STRING];
	printf("Digite duas strings, uma em cada linha.\n");
	scanf("%s", string1);
	scanf("%s", string2);
	my_strcat(string1, string2);
	printf("%s", string1);
}
