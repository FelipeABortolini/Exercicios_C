/*Escreva um programa em linguagem C que tenha três funções. Cada uma delas deve ser capaz de receber 
um vetor de 10 elementos. A primeira deve ler os elementos do vetor. As outras duas devem ser capazes de 
retornar o maior dos elementos do vetor e o menor dos elementos, respectivamente. Use define para determinar 
o tamanho do vetor. 

########### Entrada ####################

printf("Digite 10 valores, um em cada linha.\n")

#######################################

########### Saída ######################

printf("O maior elemento é: %i .\n", ret);

printf("O menor elemento é: %i .\n", ret);

#######################################*/

#include<stdio.h>
#define TAM_VET 10

void leitura_vetor(int vet[TAM_VET]);

int maior_elemento(int vet[TAM_VET]);

int menor_elemento(int vet[TAM_VET]);

int main(){
	int vetor[TAM_VET], maior, menor;
	printf("Digite 10 valores, um em cada linha.\n");
	leitura_vetor(vetor);
	maior = maior_elemento(vetor);
	menor = menor_elemento(vetor);
	printf("O maior elemento Ã©: %i .\n", maior);
    printf("O menor elemento Ã©: %i .\n", menor);
}

void leitura_vetor(int vet[TAM_VET]){
	int i;
	for(i=0; i<TAM_VET; i++){
		scanf("%d", &vet[i]);
	}
}

int maior_elemento(int vet[TAM_VET]){
	int i, n;
	n = vet[0];
	for(i=0; i<TAM_VET; i++){
		if(n < vet[i]){
			n = vet[i];
		}
	}
	return n;
}

int menor_elemento(int vet[TAM_VET]){
	int i, n;
	n = vet[0];
	for(i=0; i<TAM_VET; i++){
    	if(n > vet[i]){
			n = vet[i];
		}
	}
	return n;
}
