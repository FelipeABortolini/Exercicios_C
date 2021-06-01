/*Agora vamos praticar o uso da chamada fseek(). Esta chamada, conforme visto em aula, permite 
o deslocamento para regi�es arbitr�rios de um arquivo. Assim, escreva um programa em Linguagem 
C que receba n�meros digitados pelo usu�rio, entre 0 e 9, e retorne o inteiro da posi��o correspondente 
do arquivo. N�o use vetores, use a fun��o fseek() para deslocar-se para a regi�o pretendida do arquivo e 
efetuar a leitura com fread(). O arquivo de entrada, consiste em um arquivo chamado data.bin e � um arquivo 
bin�rio com 10 inteiros. O programa deve terminar quando o usu�rio digitar -1. 

Para que a corre��o autom�tica funcione, � necess�rio que o c�digo fonte do seu programa se chame main.c. 
Qualquer outro nome ser� rejeitado. Ainda, a entrada/sa�da do seu programa deve seguir o padr�o abaixo:

################ Entrada/Sa�da ##################

Digite um n�mero.

3

Valor: 10

Digite um n�mero.

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
			printf("Digite um n�mero.\n");
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
