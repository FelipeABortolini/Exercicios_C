/*Escreva um programa C que armazene um endere�o, contendo: rua (string), n�mero (int), bairro (string) 
e cidade (string). O programa deve ser capaz de ler as informa��es e exibi-las no final. Use struct para 
agrupar as informa��es. 

Para que a avalia��o automatizada funcione, siga as instru��es abaixo:

####  Entradas ########

printf("Digite rua, n�mero, bairro e cidade um em cada linha.\n");

##### Sa�das #########

Rua <nome da rua>, <n�mero>, <nome do bairro>, <cidade>.

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
	printf("Digite rua, n�mero, bairro e cidade um em cada linha.\n");
	gets(end.rua);
	scanf("%d\n", &end.num);
	gets(end.bairro);
	gets(end.cidade);
	printf("Rua %s, %d, %s, %s.", end.rua, end.num, end.bairro, end.cidade);
	return 0;
}
