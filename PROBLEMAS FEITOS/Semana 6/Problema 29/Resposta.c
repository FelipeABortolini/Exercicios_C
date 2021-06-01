/*O máximo divisor comum (MDC) de dois números inteiros n e m é o maior número inteiro pelo 
qual ambos podem ser divididos sem que sobre um resto da divisão. Crie um programa em C que 
leia dois n ´números digitados pelo usuário e retorne o MDC;*/

#include <stdio.h>
int main(){

    int a = 0, b = 0, i = 1, mdc = 0;
    printf("Informe dois números para determinar o MDC:\n");
	scanf("%d %d", &a, &b);
	
    while((i<=a) && (i<=b)){
		if ((a%i==0) && (b%i==0)){
			mdc=i;
	    }
		i+=1;
    }
	printf("%d", mdc);
}
