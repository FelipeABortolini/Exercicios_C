/*O m�ximo divisor comum (MDC) de dois n�meros inteiros n e m � o maior n�mero inteiro pelo 
qual ambos podem ser divididos sem que sobre um resto da divis�o. Crie um programa em C que 
leia dois n �n�meros digitados pelo usu�rio e retorne o MDC;*/

#include <stdio.h>
int main(){

    int a = 0, b = 0, i = 1, mdc = 0;
    printf("Informe dois n�meros para determinar o MDC:\n");
	scanf("%d %d", &a, &b);
	
    while((i<=a) && (i<=b)){
		if ((a%i==0) && (b%i==0)){
			mdc=i;
	    }
		i+=1;
    }
	printf("%d", mdc);
}
