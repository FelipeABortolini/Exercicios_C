/*Escreva um programa em C que leia tr�s strings (sem espa�os) e apresente o tamanho de cada uma;

Para que a corre��o automatizada funcione, use a formata��o das mensagens abaixo:

Para ler as strings apresente a mensagem abaixo:

printf("Informe 3 strings, uma em cada linha\n")

# sa�da esperada - ignore esta linha - substituir <valor> pelo resultado a ser apresentado #

Tamanho da string 1 = <valor>
Tamanho da string 2 = <valor>
Tamanho da string 3 = <valor>*/

#include<stdio.h>
#include<string.h>
int main(){
	char s1[101], s2[101], s3[101];
	printf("Informe 3 strings, uma em cada linha\n");
	scanf("%s", s1);
	scanf("%s", s2);
	scanf("%s", s3);
	int tam1, tam2, tam3;
	tam1 = strlen(s1);
	tam2 = strlen(s2);
	tam3 = strlen(s3);
	printf("Tamanho da string 1 = %d\n", tam1);
	printf("Tamanho da string 2 = %d\n", tam2);
	printf("Tamanho da string 3 = %d\n", tam3);
}
