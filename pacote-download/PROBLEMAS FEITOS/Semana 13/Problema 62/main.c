/*Agora vamos praticar o uso da chamada fseek(). Esta chamada, conforme visto em aula, permite 
o deslocamento para regiões arbitrários de um arquivo. Assim, escreva um programa em Linguagem 
C que receba números digitados pelo usuário, entre 0 e 9, e retorne o inteiro da posição correspondente 
do arquivo. Não use vetores, use a função fseek() para deslocar-se para a região pretendida do arquivo e 
efetuar a leitura com fread(). O arquivo de entrada, consiste em um arquivo chamado data.bin e é um arquivo 
binário com 10 inteiros. O programa deve terminar quando o usuário digitar -1. 

Para que a correção automática funcione, é necessário que o código fonte do seu programa se chame main.c. 
Qualquer outro nome será rejeitado. Ainda, a entrada/saída do seu programa deve seguir o padrão abaixo:

################ Entrada/Saída ##################

Digite um número.

3

Valor: 10

Digite um número.

6

Valor: 51

-1

Fim do programa.

###########################################*/

#include<stdio.h>

int main(){
	FILE*arq;
	int x = 0, a;
	if((arq = fopen("data.bin", "rb")) == NULL){
		printf("Erro ao abrir o arquivo!\n");
		return 0;
	}
	while(x != -1){
		do{
			printf("Digite um número.\n");
		    scanf("%d", &x);
		} while(x < -1 || x > 9);
		if(x == -1){
			break;
		}
		fseek(arq, x*sizeof(x), SEEK_SET);
		fread(&a, sizeof(a), 1, arq);
		printf("Valor: %d\n", a);
	}
	fclose(arq);
	printf("Fim do programa.\n");
	return 0;
}
