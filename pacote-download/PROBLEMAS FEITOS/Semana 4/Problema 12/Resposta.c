/* Programa que apresenta uma s�rie de n�meros determinados pelo problema.

 Autor: Felipe Augusto Bortolini        Data: 24/09/2020


 Teste de Mesa:
_________________Sa�da________________|
  10: 11 12 13 14 15 16 17 18 19 *    |
  11: 12 13 14 15 16 17 18 19 20 *    |
  12: 13 14 15 16 17 18 19 20 21 *    |
  13: 14 15 16 17 18 19 20 21 22 *    |
  14: 15 16 17 18 19 20 21 22 23 *    |
  15: 16 17 18 19 20 21 22 23 24 *    |
  16: 17 18 19 20 21 22 23 24 25 *    |
  17: 18 19 20 21 22 23 24 25 26 *    |
  18: 19 20 21 22 23 24 25 26 27 *    |
  19: 20 21 22 23 24 25 26 27 28 *    |
  20: 21 22 23 24 25 26 27 28 29 *    |
  21: 22 23 24 25 26 27 28 29 30 *    |
  22: 23 24 25 26 27 28 29 30 31 *    |
  23: 24 25 26 27 28 29 30 31 32 *    |
  24: 25 26 27 28 29 30 31 32 33 *    |
  25: 26 27 28 29 30 31 32 33 34 *    |
  26: 27 28 29 30 31 32 33 34 35 *    |
  27: 28 29 30 31 32 33 34 35 36 *    |
  28: 29 30 31 32 33 34 35 36 37 *    |
  29: 30 31 32 33 34 35 36 37 38 *    |
  30: 31 32 33 34 35 36 37 38 39 *    |
  31: 32 33 34 35 36 37 38 39 40 *    |
  32: 33 34 35 36 37 38 39 40 41 *    |
  33: 34 35 36 37 38 39 40 41 42 *    |
  34: 35 36 37 38 39 40 41 42 43 *    |
  35: 36 37 38 39 40 41 42 43 44 *    |
  36: 37 38 39 40 41 42 43 44 45 *    |
  37: 38 39 40 41 42 43 44 45 46 *    |
  38: 39 40 41 42 43 44 45 46 47 *    |
  39: 40 41 42 43 44 45 46 47 48 *    |
  40: 41 42 43 44 45 46 47 48 49 *    |   
  41: 42 43 44 45 46 47 48 49 50 *    | 
  42: 43 44 45 46 47 48 49 50 51 *    | 
  43: 44 45 46 47 48 49 50 51 52 *    | 
  44: 45 46 47 48 49 50 51 52 53 *    | 
  45: 46 47 48 49 50 51 52 53 54 *    | 
  46: 47 48 49 50 51 52 53 54 55 *    | 
  47: 48 49 50 51 52 53 54 55 56 *    | 
  48: 49 50 51 52 53 54 55 56 57 *    | 
  49: 50 51 52 53 54 55 56 57 58 *    | 
  50: 51 52 53 54 55 56 57 58 59 *    | 
 

 C�digo em C:*/

#include<stdio.h>

int main(){
	
	int a, n;
	for(a = 10; a < 51; a = a + 1) {
		n = a;
		printf("%d: ", a);
		while (n < a + 9){
			n = n + 1;
			printf("%d ", n);
		} 
		printf("\n");	
	}
}
