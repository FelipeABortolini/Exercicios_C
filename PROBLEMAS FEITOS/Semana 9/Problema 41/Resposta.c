/*Uma palavra � pal�ndroma se ela n�o se altera quando lida da direita para esquerda. 
Por exemplo, "raiar" � pal�ndroma. Escreva um programa que verifique se uma palavra dada � pal�ndroma.

Para que a corre��o automatizada funcione, use a formata��o das mensagens abaixo:

Para ler a palavra apresente a mensagem abaixo:

printf("Informe a palavra\n")

# sa�da esperada - ignore esta linha - substituir <valor> por Sim ou Nao #

Palindroma = <valor>*/

#include<stdio.h>
#include<string.h>
int main(){
	char m[31];
	printf("Informe a palavra\n");
	scanf("%s", m);
	int i, j = 0, tam = strlen(m);
	for(i=tam-1; i>=0; i--){
		if(m[i]!=m[j]){
			printf("Palindroma = Nao");
			return 0;
		}
		j++;
	}
	printf("Palindroma = Sim");
	return 0;
}

