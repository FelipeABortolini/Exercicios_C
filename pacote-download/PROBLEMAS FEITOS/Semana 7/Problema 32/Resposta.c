/*Faça um programa em C que lê 2 vetores de valores reais denominados vn1 e vn2 contendo respectivamente em cada posição i dos vetores,  duas notas de um aluno.
Após a leitura dos dois vetores, calcule as médias de cada aluno e apresente na tela;

Para que a avaliação automatizada funcione, siga as instruções abaixo:

 para ler os valores de vn1 apresente a mensagem abaixo e na sequencia leia os valores usando apenas um scanf para cada valor.
 
printf("Informe os 10 valores para vn1, 1 em cada linha.\n");
 
 para ler os valores de vn2 apresente a mensagem abaixo e na sequencia leia os valores usando apenas um scanf para cada valor.
 
printf("Informe os 10 valores para vn2, 1 em cada linha.\n");
 
 para apresentar as médias, use o formato abaixo:
 
### inicio da saída - ignore esta linha ###

Medias:
5.6,6.1,7,7.5,3,4,5,9.9,10,9 

### fim da saída - ignore esta linha ###*/

#include<stdio.h>
int main(){
	int aux = 0, num = 0, dentroInt = 0, foraInt = 0;
	printf("Informe 10 nÃºmeros:\n");
	for (aux = 1; aux <= 10; aux += 1){
		scanf("%d", &num);
		if (num>=10 && num<=20){
			dentroInt += 1;
		} else {
			foraInt += 1;
		}
	}
	printf("Vezes que foram informados nÃºmeros dentro da faixa de [10-20]: %i\n", dentroInt);
	printf("Vezes que foram informados nÃºmeros fora da faixa de [10-20]: %i\n", foraInt);
}
