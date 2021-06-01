/*Faça um programa em C que leia um vetor contendo n valores no intervalo [0,9], sendo n fornecido pelo usuário. Após obter o vetor, faça com que o seu vetor apresente a saída conforme abaixo:

vetor de entrada: [9,2,3,4,5]

saída esperada:

81, 18, 27, 36, 45,
18, 4, 6, 8, 10,
27, 6, 9, 12, 15,
36, 8, 12, 16, 20,
45, 10, 15, 20, 25,

Para que a avaliação automatizada funcione, siga as instruções abaixo:

para ler o tamanho do vetor apresente a mensagem abaixo e na sequencia leia o valor usando scanf

printf("Informe o tamanho do vetor:\n");

para ler os valores para o vetor, apresente a mensagem abaixo e na sequencia leia os valores usando scanf

printf("Informe os valores para o vetor (1 em cada linha):\n");


a saída deve ter o formato apresentado acima

## inicio saída (exemplo para o vetor do enunciado) - ignore esta linha 

81, 18, 27, 36, 45,
18, 4, 6, 8, 10,
27, 6, 9, 12, 15,
36, 8, 12, 16, 20,
45, 10, 15, 20, 25,

## fim saída - ignore esta linha*/

#include<stdio.h>
int main(){
	int n, i, j;
	printf("Informe o tamanho do vetor:\n");
	scanf("%d", &n);
	int v[n];
	printf("Informe os valores para o vetor (1 em cada linha):\n");
	for(i=0; i<n; i++){
		scanf("%d", &v[i]);
	}
	for(i=0; i<n; i++){
		for(j=0; j<n; j++){
		printf("%d, ", v[i]*v[j]);
	    }
	    printf("\n");
	}
}
