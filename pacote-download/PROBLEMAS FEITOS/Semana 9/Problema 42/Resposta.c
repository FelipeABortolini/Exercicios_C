/*Faça um programa em C que leia uma string de 32 caracteres e depois apresente quantas vezes a sequência "aca" aparece na string.

Ex: para a string abaixo:

abacbacadcadcadaedacfaccgcddhaca

deve ser apresentada a mensagem:

Numero de ocorrências de aca: 2

Para que a correção automatizada funcione, use a formatação das mensagens abaixo:

Para ler a palavra apresente a mensagem abaixo:

printf("Informe uma string com 32 caracteres\n");

# saída esperada - ignore esta linha - substituir <valor> pela contagem #

Numero de ocorrencias de aca: <valor>*/

#include<stdio.h>
#include<string.h>
int main(){
	char string[33], m[4] = "aca";
	printf("Informe uma string com 32 caracteres\n");
	scanf("%s", string);
	int i, cont = 0;
	char s1, s2, s3;
	for(i=0; i<30; i++){
		s1 = string[i];
		s2 = string[i+1];
		s3 = string[i+2];
		if((s1==m[0])&&(s2==m[1])&&(s3==m[2])){
			cont++;
		}
	}
	printf("Numero de ocorrencias de aca: %d", cont);
}
