/*Desta vez iremos explorar o poder das fun��es! Escreva uma fun��o em linguagem C que receba um n�mero e retorne o resultado de S, onde:

S = 1 + 1/1! + 1/2! + 1/3! + ... + 1/N!

Contudo, a fun��o que calcula S deve utilizar a fun��o implementada na Atividade 43 para ajudar com o calculo do fatorial. Copie a fun��o e a reutilize neste novo programa! Para que a corre��o autom�tica funcione siga as instru��es abaixo:

####### Entrada ########

printf("Digite um n�mero\n");

#######################

####### Sa�da ########

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
	printf("Digite um número\n");
	scanf("%d", &num);
	S = calc_S(num);
	printf("S = %f", S);
}
