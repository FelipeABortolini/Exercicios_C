/*Faça uma função em linguagem C que receba a média final de um aluno por parâmetro e retone o seu conceito, conforme a tabela abaixo:

       Nota        |       Conceito
    de 0,0 a 4,9   |          D
    de 5,0 a 6,9   |          C
    de 7,0 a 8,9   |          B
    de 9,0 a 10,0  |          A

A função deve receber um float e retornar um char. Para que a correção automática funcione, siga as instruções abaixo:

################## Entrada ####################

printf("Digite a nota do aluno.\n");

##############################################

##################### Saída ###################

printf("O conceito é %c.", ret);

##############################################*/

#include<stdio.h>

char conceito(int n){
	char resp;
	if(n <= 4.9){
		resp = 'D';
	} else if(n > 4.9 && n <= 6.9){
		resp = 'C';
	} else if(n > 6.9 && n <= 8.9){
		resp = 'B';
	} else if(n > 8.9){
		resp = 'A';
	}
	return resp;
}

int main(){
	float nota;
	char ret;
	printf("Digite a nota do aluno.\n");
	scanf("%f", &nota);
	ret = conceito(nota);
	printf("O conceito é %c.", ret);
}
