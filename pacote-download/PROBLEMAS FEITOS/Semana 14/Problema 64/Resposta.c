/*Escreva um programa C que armazene um endereço, contendo: rua (string), número (int), bairro (string) 
e cidade (string). O programa deve ser capaz de ler as informações e exibi-las no final. Use struct para 
agrupar as informações. 

Para que a avaliação automatizada funcione, siga as instruções abaixo:

####  Entradas ########

printf("Digite rua, número, bairro e cidade um em cada linha.\n");

##### Saídas #########

Rua <nome da rua>, <número>, <nome do bairro>, <cidade>.

####################*/

#include<stdio.h>

struct endereco {
	char rua[51];
	int num;
	char bairro[51];
	char cidade[51];
};

int main(){
	struct endereco end;
	printf("Digite rua, número, bairro e cidade um em cada linha.\n");
	gets(end.rua);
	scanf("%d\n", &end.num);
	gets(end.bairro);
	gets(end.cidade);
	printf("Rua %s, %d, %s, %s.", end.rua, end.num, end.bairro, end.cidade);
	return 0;
}
