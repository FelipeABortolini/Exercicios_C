/*Criar um programa que leia um n�mero inteiro maior que zero e menor que 10000, 
e que calcule a soma dos algarismos que comp�em esse n�mero. Por exemplo, se o 
n�mero lido for 7254, o c�lculo ser� realizado da seguinte forma: 7 + 2 + 5 + 4 = 18*/

#include <stdio.h> 
int main() {
    int numero, SOMA = 0, a; 
    printf("Informe um n�mero para a soma de cada d�gito:\n");
    do {
   	    scanf("%d", &numero); 
    } while ((numero <= 0) || (numero >= 10000)); 
    a = numero;
    while (numero > 0) { 
        SOMA = SOMA + numero % 10; 
        numero = numero / 10; 
    } 
    printf("%d\n", SOMA);
} 

