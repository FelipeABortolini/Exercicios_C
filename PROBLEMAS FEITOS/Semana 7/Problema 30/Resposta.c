/*Faça um programa em C para armazenar os números de 10 a 29 em um vetor de 20 posições.

Use um laço de repetição (for ou while). Na sequência apresente os valores presentes no 
vetor com a seguinte formato de saída:

### inicio da saída - ignore esta linha ####

10,12,14,16,18,20,22,24,26,28,
11,13,15,17,19,21,23,25,27,29,

### fim da saída - ignore esta linha ####*/

#include<stdio.h>
int main(){
	int v[20], i;
	for(i=0; i<20; i++){
		v[i] = 10 + i;
	}
	for(i=0; i<20; i++){
		if((i%2 == 0) && (i != 18)){
			printf("%d,", v[i]);	
	    }
	    if(i == 18){
	    	printf("%d,\n", v[i]);
		}	
	}
	for(i=0; i<20; i++){
		if(i%2 != 0){
			printf("%d,", v[i]);
		}
    }
}
