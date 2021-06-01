/*Problema 2: mostrar a sequência de 100 números inteiros a partir de um número informado.
Envie o arquivo de programa em .C e o arquivo de imagem com o fluxograma. O algoritmo e 
o teste de mesa podem ir como comentários no próprio arquivo de programa .C, como realizado no LVP anterior.

 Algoritmo Informal:

 1°) Receber um valor inteiro "a";
 2°) Enquanto um valor "n" for menor que 100, aumentar em uma unidade o valor de "n" a cada loop;
 3°) A cada loop que passar atribuir o valor da soma de "a" com "n" a "b";
 4°) Mostrar o valor de "b" a cada loop.


 Teste de Mesa:
    a    |    b
    5    |
         |    6
         |    7
         |    8
         |    9
         |    10
         |    11
         |    12
         |    13
         |    14
         |    15
         |    16
         |    17
         |    18
         |    19
         |    20
         |    21
         |    22
         |    23
         |    24
         |    25
         |    26
         |    27
         |    28
         |    29
         |    30
         |    31
         |    32
         |    33
         |    34
         |    35
         |    36
         |    37
         |    38
         |    39
         |    40
         |    41
         |    42
         |    43
         |    44
         |    45
         |    46
         |    47
         |    48
         |    49
         |    50
         |    51
         |    52
         |    53
         |    54
         |    55
         |    56
         |    57
         |    58
         |    59
         |    60
         |    61
         |    62
         |    63
         |    64
         |    65
         |    66
         |    67
         |    68
         |    69
         |    70
         |    71
         |    72
         |    73
         |    74
         |    75
         |    76
         |    77
         |    78
         |    79
         |    80
         |    81
         |    82
         |    83
         |    84
         |    85
         |    86
         |    87
         |    88
         |    89
         |    90
         |    91
         |    92
         |    93
         |    94
         |    95
         |    96
         |    97
         |    98
         |    99
         |    100
         |    101
         |    102
         |    103
         |    104
         |    105

 Código em C:*/

#include <stdio.h>
int main(){
	int a, n, b;
	n = 0;
	scanf("%d", &a);
	while (n < 100){
		n = n+1;
		b = a + n;
		printf("%d\n", b);
	}
}
