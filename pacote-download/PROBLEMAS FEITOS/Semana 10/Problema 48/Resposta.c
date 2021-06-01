/*Desta vez iremos explorar o poder das funções! Escreva uma função em linguagem C que receba um número e retorne o resultado de S, onde:

S = 1 + 1/1! + 1/2! + 1/3! + ... + 1/N!

Contudo, a função que calcula S deve utilizar a função implementada na Atividade 43 para ajudar com o calculo do fatorial. Copie a função e a reutilize neste novo programa! Para que a correção automática funcione siga as instruções abaixo:

####### Entrada ########

printf("Digite um número\n");

#######################

####### Saída ########

printf("S = %f", ret);

#######################*/

#include<stdio.h>

int calc_fat (int n){
	int fat;
	if(n) {
	    fat = n*calc_fat(n-1);
	} else {
		return 1;
	}
}

float calc_S(int valor){
	float res = 1;
	int denominador;
	int i;
	for(i=valor; i>0; i--){
	    denominador = calc_fat(i);
		res += (1.0/denominador);
	}
	return res;
}

int main(){
	int num;
	float S;
	printf("Digite um nÃºmero\n");
	scanf("%d", &num);
	S = calc_S(num);
	printf("S = %f", S);
}
