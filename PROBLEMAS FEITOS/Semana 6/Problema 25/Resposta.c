/*Fa�a um programa para apresentar todos os n�meros primos em um intervalo de a at� b. Os valores 
do intervalo [a, b] ser�o informados pelo usu�rio (n�o consideramos 1 como n�mero primo).*/

#include<stdio.h>
int main(){
	int a, b, num;
	printf("Informe dos valores de um intervalo para an�lises dos n�meros primos:\n");
    scanf("%i", &a);
	scanf("%i", &b);
	printf("N�meros primos do intervalo:\n");
	for(num = a; num <= b; num += 1){
		if(num == 1){
		} else if((num == 2) || (num == 3) || (num == 5) || (num == 7)){
			printf("%d\n", num);
		} else if((num % 2 != 0) && (num % 3 != 0) && (num % 4 != 0) && (num % 5 != 0) && (num % 6 != 0) && (num % 7 != 0) && (num % 8 != 0) && (num % 9 != 0)){
			printf("%d\n", num);
		}
	}
}
