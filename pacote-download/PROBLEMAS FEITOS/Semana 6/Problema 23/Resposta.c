/*Utilizando a estrutura de repeti��o for, fa�a um programa em C que receba 10 n�meros e conte 
quantos deles est�o no intervalo [10,20] e quantos deles est�o fora do intervalo, escrevendo estas informa��es.*/

#include<stdio.h>
int main(){
	int aux = 0, num = 0, dentroInt = 0, foraInt = 0;
	printf("Informe 10 números:\n");
	for (aux = 1; aux <= 10; aux += 1){
		scanf("%d", &num);
		if (num>=10 && num<=20){
			dentroInt += 1;
		} else {
			foraInt += 1;
		}
	}
	printf("Vezes que foram informados números dentro da faixa de [10-20]: %i\n", dentroInt);
	printf("Vezes que foram informados números fora da faixa de [10-20]: %i\n", foraInt);
}
