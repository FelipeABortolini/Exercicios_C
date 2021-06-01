#include <stdio.h>
#include <locale.h>
int main(){
	setlocale(LC_ALL, "Portuguese");
	float a, M;
	int n;
	a = M = n = 0;
	while(a != -1){
		printf("Informe um número: ");
		scanf("%f", &a);
		n = n+1;
		M = (M*(n-1)+a)/n;
		printf("A média dos numeros informados até o momento é: %.2f\n", M);
		printf("A quantidade de números informados até o momento é: %d\n\n", n);
	}
}
