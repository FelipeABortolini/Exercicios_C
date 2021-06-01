/*Criar um programa que leia um número inteiro maior que zero e menor que 10000, 
e que calcule a soma dos algarismos que compõem esse número. Por exemplo, se o 
número lido for 7254, o cálculo será realizado da seguinte forma: 7 + 2 + 5 + 4 = 18*/

#include <stdio.h> 
int main() {
    int numero, SOMA = 0, a; 
    printf("Informe um número para a soma de cada dígito:\n");
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

