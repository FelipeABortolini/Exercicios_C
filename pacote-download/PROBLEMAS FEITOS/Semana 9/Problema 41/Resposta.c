/*Uma palavra é palíndroma se ela não se altera quando lida da direita para esquerda. 
Por exemplo, "raiar" é palíndroma. Escreva um programa que verifique se uma palavra dada é palíndroma.

Para que a correção automatizada funcione, use a formatação das mensagens abaixo:

Para ler a palavra apresente a mensagem abaixo:

printf("Informe a palavra\n")

# saída esperada - ignore esta linha - substituir <valor> por Sim ou Nao #

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

