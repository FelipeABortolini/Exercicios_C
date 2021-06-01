/*Escreva um programa C que agrupe informa��es sobre um determinado tipo de fruta. As informa��es 
presentes no agrupamento devem ser: nome_fruta (string), pre�o (float), quantidade (int). O programa 
deve ser capaz de ler as informa��es e exibi-las no final. 

Para que a avalia��o automatizada funcione, siga as instru��es abaixo:

####  Entradas ########

printf("Digite nome, pre�o e quantidade um em cada linha.\n");

##### Sa�das #########

Fruta: ma�a

Pre�o: 5.30

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
	printf("Digite nome, pre�o e quantidade um em cada linha.\n");
	scanf("%s", frut.nome);
	scanf("%f %d", &frut.preco, &frut.quantidade);
	printf("Fruta: %s\nPre�o: %.2f\nQuantidade: %d\n", frut.nome, frut.preco, frut.quantidade);
	return 0;
}
