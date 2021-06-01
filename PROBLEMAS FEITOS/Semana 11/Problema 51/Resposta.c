/*Escreva um programa em linguagem C que possua uma fun��o que receba como par�metros um vetor de 
15 inteiros e um inteiro. A fun��o deve retornar a quantidade de elementos do vetor que s�o divis�veis 
pelo inteiro. Use define para definir o tamanho do vetor.

########### Entrada ####################

printf("Digite um n�mero.\n");

printf("Digite 15 valores, um em cada linha.\n")

#######################################

########### Sa�da ######################

printf("O n�mero de divisores �: %i .\n", ret);

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
	printf("Digite um n�mero.\n");
	scanf("%d", &num);
	printf("Digite 15 valores, um em cada linha.\n");
	for(i=0; i<TAM_VET; i++){
		scanf("%d", &vetor[i]);
	}
	ret = num_elem_div(vetor, num);
	printf("O n�mero de divisores �: %i .\n", ret);
}
