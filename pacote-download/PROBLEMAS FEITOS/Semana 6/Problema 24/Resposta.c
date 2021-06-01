//Faça um programa em C para calcular o fatorial de um número inteiro informado pelo usuário.

#include<stdio.h>
int main(){
	int num, a, b, fatorial;
	printf("Informe um número para obter o fatorial:\n");
	scanf("%d", &num);
	fatorial = num;
	for(b = 1; b < num; b += 1){
		a = num - b;
		if(b==1){
			fatorial = num * a;
		} else {
			fatorial = fatorial * a;
		}
	}
	printf("%d", fatorial);
}
