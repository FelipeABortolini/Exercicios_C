/*Escreva um programa C que agrupe informações sobre um determinado tipo de fruta. As informações 
presentes no agrupamento devem ser: nome_fruta (string), preço (float), quantidade (int). O programa 
deve ser capaz de ler as informações e exibi-las no final. 

Para que a avaliação automatizada funcione, siga as instruções abaixo:

####  Entradas ########

printf("Digite nome, preço e quantidade um em cada linha.\n");

##### Saídas #########

Fruta: maça

Preço: 5.30

Quantidade: 2

####################*/

#include<stdio.h>

struct fruta{
	char nome[41];
	float preco;
	int quantidade;
};

int main(){
	struct fruta frut;
	printf("Digite nome, preço e quantidade um em cada linha.\n");
	scanf("%s", frut.nome);
	scanf("%f %d", &frut.preco, &frut.quantidade);
	printf("Fruta: %s\nPreço: %.2f\nQuantidade: %d\n", frut.nome, frut.preco, frut.quantidade);
	return 0;
}
