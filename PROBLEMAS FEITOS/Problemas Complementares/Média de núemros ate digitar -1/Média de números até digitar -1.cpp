#include <stdio.h>
#include <locale.h>
int main(){
	setlocale(LC_ALL, "Portuguese");
	float a, M;
	int n;
	a = M = n = 0;
	while(a != -1){
		printf("Informe um n�mero: ");
		scanf("%f", &a);
		n = n+1;
		M = (M*(n-1)+a)/n;
		printf("A m�dia dos numeros informados at� o momento �: %.2f\n", M);
		printf("A quantidade de n�meros informados at� o momento �: %d\n\n", n);
	}
}
