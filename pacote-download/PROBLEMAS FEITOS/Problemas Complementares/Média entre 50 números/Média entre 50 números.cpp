#include <stdio.h>
int main(){
    float a, M;
	int n;
	a = M = n = 0;
	printf("Digite 50 numeros para obter a media entre eles.\n");
	while (n<50){
		scanf("%f", &a);
		n = n+1;
		M = (M*(n-1)+a)/n;
	}
	printf("A media entre os 50 numeros digitados e: %.2f", M);
}

