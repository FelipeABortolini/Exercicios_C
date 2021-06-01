/*Utilizando a estrutura de repetição for, faça um programa em C que receba 10 números e conte 
quantos deles estão no intervalo [10,20] e quantos deles estão fora do intervalo, escrevendo estas informações.*/

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
