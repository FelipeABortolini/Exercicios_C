//Fa�a um programa em C para calcular o fatorial de um n�mero inteiro informado pelo usu�rio.

#include<stdio.h>
int main(){
	int num, a, b, fatorial;
	printf("Informe um n�mero para obter o fatorial:\n");
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
