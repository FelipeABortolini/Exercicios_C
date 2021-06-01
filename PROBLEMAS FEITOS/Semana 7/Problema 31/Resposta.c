/*Faça um programa em C que, dadas duas relac¸o~es de nu´meros contendo 8 e 9  valores cada uma respectivamente e obtidas a 
partir do teclado, fornec¸a os nu´meros que aparecem nas duas listas. Por exemplo, se as relac¸o~es forem 
u = {9, 32, 45, 21, 56, 67, 42, 55} e w = {24, 42, 32, 12, 45, 11, 67, 66, 78}, a func¸a~o deve fornecer o vetor v = {32, 45, 67, 42}.

para que a avaliação automatizada funcione, siga as instruções abaixo:

 para ler os valores de u apresente a mensagem abaixo e na sequencia leia os valores usando apenas um scanf para cada valor.
 
printf("Informe os 8 valores para o vetor u, 1 em cada linha.\n");

 para ler os valores de w apresente a mensagem abaixo e na sequencia leia os valores usando apenas um scanf para cada valor.
 
printf("Informe os 9 valores para o vetor w, 1 em cada linha.\n");

 os vetor de saída deve ter o seguinte formato
 
32,45,67,42*/

#include<stdio.h>
int main(){
	int u[8], w[9], i, j, k = 0, m = -1;
	printf("Informe os 8 valores para o vetor u, 1 em cada linha.\n");
	for(i=0; i<8; i++){
		scanf("%d", &u[i]);
	}
	printf("Informe os 9 valores para o vetor w, 1 em cada linha.\n");
	for(i=0; i<9; i++){
		scanf("%d", &w[i]);
    }
    for(i=0; i<8; i++){
    	for(j=0; j<9; j++){
    		if(u[i] == w[j]){
    			k += 1;	
			}
		}
	}
    int v[k];
    for(i=0; i<8; i++){
    	for(j=0; j<9; j++){
    		if(u[i] == w[j]){
    			m += 1;
    		    v[m] = u[i];
    		}
    	}
    }
    for(m=0; m < k; m++){
    	if(m != k-1){
    		printf("%d,", v[m]);
		} else{
			printf("%d", v[m]);
		}
	}
}



