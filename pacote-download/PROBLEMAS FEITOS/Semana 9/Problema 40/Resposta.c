/*Escreva um programa em C que leia 5 de strings (sem espaços) e apresente ao final, 
quantas vezes a primeira letra da primeira string está presente em todas as strings (incluindo a primeira).

Exemplo:  para as Strings abaixo:

banana

abracadabra

abacate

alibaba

sobremesa

a saída deve ser:

Frequencia da letra b = 7

Para que a correção automatizada funcione, use a formatação das mensagens abaixo:

Para ler as strings apresente a mensagem abaixo:

printf("Informe 5 strings, uma em cada linha\n")

# saída esperada - ignore esta linha - substituir <valor> pelo resultado a ser apresentado #

Frequencia da letra <valor> = <valor>*/

#include<stdio.h>
#include<string.h>
int main(){
	char s1[100], s2[51], s3[51], s4[51], s5[51];
	printf("Informe 5 strings, uma em cada linha\n");
	scanf("%s %s %s %s %s", s1, s2, s3, s4, s5);
	char prim_letra;
	int i, freq = 0;
	prim_letra = s1[0];
	strcat(s1, s2);
	strcat(s1, s3);
	strcat(s1, s4);
	strcat(s1, s5);
	for(i=0; s1[i]!='\0'; i++){
		if(s1[i] == prim_letra){
			freq++;
		}
	}
	printf("Frequencia da letra %c = %d\n", prim_letra, freq);
}
