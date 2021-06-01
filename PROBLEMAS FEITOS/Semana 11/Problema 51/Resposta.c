/*Escreva um programa em linguagem C que possua uma função que receba como parâmetros um vetor de 
15 inteiros e um inteiro. A função deve retornar a quantidade de elementos do vetor que são divisíveis 
pelo inteiro. Use define para definir o tamanho do vetor.

########### Entrada ####################

printf("Digite um número.\n");

printf("Digite 15 valores, um em cada linha.\n")

#######################################

########### Saída ######################

printf("O número de divisores é: %i .\n", ret);

#######################################*/

#include<stdio.h>
#define TAM_VET 15

int num_elem_div(int v[TAM_VET], int a){
	int i, x = 0; 
	for(i=0; i<TAM_VET; i++){
		if(v[i] % a == 0){
			x++;
		}
	}
	return x;
}

int main(){
	int vetor[TAM_VET], num, i, ret;
	printf("Digite um número.\n");
	scanf("%d", &num);
	printf("Digite 15 valores, um em cada linha.\n");
	for(i=0; i<TAM_VET; i++){
		scanf("%d", &vetor[i]);
	}
	ret = num_elem_div(vetor, num);
	printf("O número de divisores é: %i .\n", ret);
}
